package net.fathomsoft.nova;

import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

import net.fathomsoft.nova.tree.*;
import net.fathomsoft.nova.error.SyntaxErrorException;
import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.tree.BinaryOperation;
import net.fathomsoft.nova.tree.FileDeclaration;
import net.fathomsoft.nova.tree.Identifier;
import net.fathomsoft.nova.tree.MethodDeclaration;
import net.fathomsoft.nova.tree.SyntaxTree;
import net.fathomsoft.nova.tree.exceptionhandling.Exception;
import net.fathomsoft.nova.util.Command;
import net.fathomsoft.nova.util.CommandListener;
import net.fathomsoft.nova.util.FileUtils;
import net.fathomsoft.nova.util.StringUtils;
import net.fathomsoft.nova.util.SyntaxUtils;

/**
 * File used for the compilation process.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 9:00:04 PM
 * @version	v0.2.19 Jul 26, 2014 at 12:30:24 AM
 */
public class Nova
{
	private int					compiler;
	
	private long				flags;
	private long				startTime, endTime;
	
	private File				outputFile, workingDir;
	
	private SyntaxTree			tree;
	
	private ArrayList<String>	includeDirectories, errors, messages;
	
	private ArrayList<File>		inputFiles, cSourceFiles, cHeaderFiles;
	
	private List<File>			lingeringFiles;
	
	private static final int	OS;
	
	private static final String	OUTPUT_EXTENSION, DYNAMIC_LIB_EXT;
	
	public static final boolean	ANDROID_DEBUG = false;
	public static final boolean	DEBUG         = true;
	
	// Set to 0 to not benchmark.
	public static final int		BENCHMARK     = 0;
	
	public static final long	CSOURCE       = 0x1l;
	public static final long	FORMATC       = 0x10l;
	public static final long	VERBOSE       = 0x100l;
	public static final long	DRY_RUN       = 0x1000l;
	public static final long	KEEP_C        = 0x10000l;
	public static final long	C_ARGS        = 0x100000l;
	public static final long	RUNTIME       = 0x1000000l;
	public static final long	LIBRARY       = 0x10000000l;
	public static final long	NO_GC         = 0x100000000l;
	public static final long	SMALL_BIN     = 0x1000000000l;
	public static final long	SINGLE_THREAD = 0x10000000000l;
	
	public static final int		GCC           = 1;
	public static final int		TCC           = 2;
	public static final int		CLANG         = 3;
	
	public static final int		WINDOWS       = 1;
	public static final int		MACOSX        = 2;
	public static final int		LINUX         = 3;
	
	public static final String	LANGUAGE_NAME = "Nova";
	public static final String	VERSION       = "v0.2.19";
	
	/**
	 * Find out which operating system the compiler is running on.
	 */
	static
	{
		String osName = System.getProperty("os.name").toLowerCase();
		
		if (osName.startsWith("win"))
		{
			OS = WINDOWS;
			OUTPUT_EXTENSION = ".exe";
			DYNAMIC_LIB_EXT = ".dll";
		}
		else if (osName.startsWith("mac"))
		{
			OS = MACOSX;
			OUTPUT_EXTENSION = "";
			DYNAMIC_LIB_EXT = ".dylib";
		}
		else if (osName.startsWith("lin"))
		{
			OS = LINUX;
			OUTPUT_EXTENSION = "";
			DYNAMIC_LIB_EXT = ".so";
		}
		else
		{
			OS = 0;
			OUTPUT_EXTENSION = "";
			DYNAMIC_LIB_EXT = "";
		}
	}
	
	/**
	 * Method called whenever the compiler is invoked. Supplies the
	 * needed information for compiling the given files.
	 * 
	 * @param args The String array containing the locations of the files
	 * 		to compile, as well as other compiler arguments.
	 */
	public static void main(String args[])
	{
		Nova nova = new Nova(args);
	}
	
	/**
	 * Method used to initialize the compiler data and start the
	 * compilation process.
	 * 
	 * @param args The String array containing the locations of the files
	 * 		to compile, as well as other compiler arguments.
	 */
	private Nova(String args[])
	{
		if (BENCHMARK > 0)
		{
			try
			{
				System.out.println("Preparing Benchmark...");
				
				Thread.sleep(100);
				
				System.out.println("Starting...");
			}
			catch (InterruptedException e)
			{
				e.printStackTrace();
			}
			
			enableFlag(DRY_RUN);
		}
		
		lingeringFiles     = new LinkedList<File>();
		inputFiles         = new ArrayList<File>();
		cSourceFiles       = new ArrayList<File>();
		cHeaderFiles       = new ArrayList<File>();
		includeDirectories = new ArrayList<String>();
		errors             = new ArrayList<String>();
		messages           = new ArrayList<String>();
		
		compile(args);
	}
	
	/**
	 * Compile the input files given within the args.
	 * 
	 * @param args The String array containing the locations of the files
	 * 		to compile, as well as other compiler arguments.
	 */
	private void compile(String args[])
	{
		String directory = getWorkingDirectoryPath() + "example/";
		String stability = getWorkingDirectoryPath() + "stabilitytest/";
		String standard  = getWorkingDirectoryPath() + "standard/";
		
		if (OS == WINDOWS)
		{
			compiler = TCC;
		}
		else
		{
			compiler = GCC;
		}
		
		if (DEBUG)
		{
			if (BENCHMARK <= 0)
			{
				testClasses();
			}
			
			args = new String[]
			{
				formatPath(stability + "StabilityTest.nova"),
				formatPath(stability + "TimeStability.nova"),
				formatPath(stability + "FileStability.nova"),
				formatPath(stability + "ThreadStability.nova"),
				formatPath(stability + "ExceptionStability.nova"),
				formatPath(stability + "SyntaxStability.nova"),
				formatPath(stability + "ClosureStability.nova"),
				formatPath(stability + "PolymorphismStability.nova"),
				formatPath(stability + "PolymorphicSuperClass.nova"),
				formatPath(stability + "PolymorphicSubClass.nova"),
				formatPath(stability + "StabilityTestException.nova"),
				formatPath(stability + "StabilityExceptionHandler.nova"),
				formatPath(stability + "ThreadImplementation.nova"),
				formatPath(stability + "UnstableException.nova"),
//				formatPath(directory + "MathDemo.nova"),
//				formatPath(directory + "ThreadDemo.nova"),
//				formatPath(directory + "PolymorphismDemo.nova"),
//				formatPath(directory + "Animal.nova"),
//				formatPath(directory + "Spider.nova"),
//				formatPath(directory + "Dog.nova"),
//				formatPath(directory + "ThreadDemoImplementation.nova"),
//				formatPath(directory + "IntegerTest.nova"),
//				formatPath(directory + "FileTest.nova"),
//				formatPath(directory + "SVGTest.nova"),
//				formatPath(directory + "ExceptionHandlingDemo.nova"),
//				formatPath(directory + "NonWholeDivisionException.nova"),
//				formatPath(directory + "ArrayListDemo.nova"),
//				formatPath(directory + "ClosureDemo.nova"),
//				formatPath(directory + "Person.nova"),
//				formatPath(directory + "BodyBuilder.nova"),
				formatPath(standard  + "Console.nova"),
				formatPath(standard  + "String.nova"),
				formatPath(standard  + "ExceptionData.nova"),
				formatPath(standard  + "ArrayList.nova"),
				formatPath(standard  + "Math.nova"),
				formatPath(standard  + "Time.nova"),
				formatPath(standard  + "DivideByZeroException.nova"),
				formatPath(standard  + "Object.nova"),
				formatPath(standard  + "InputStream.nova"),
				formatPath(standard  + "OutputStream.nova"),
				formatPath(standard  + "StreamReader.nova"),
				formatPath(standard  + "List.nova"),
				formatPath(standard  + "ListNode.nova"),
				formatPath(standard  + "Thread.nova"),
				formatPath(standard  + "UncaughtExceptionHandler.nova"),
				formatPath(standard  + "Exception.nova"),
				formatPath(standard  + "Array.nova"),
				formatPath(standard  + "Char.nova"),
				formatPath(standard  + "CharArray.nova"),
				formatPath(standard  + "Bool.nova"),
				formatPath(standard  + "Short.nova"),
				formatPath(standard  + "Integer.nova"),
				formatPath(standard  + "Long.nova"),
				formatPath(standard  + "Float.nova"),
				formatPath(standard  + "Double.nova"),
				formatPath(standard  + "Number.nova"),
				formatPath(standard  + "GC.nova"),
				formatPath(standard  + "File.nova"),
				formatPath(standard  + "SVG.nova"),
				formatPath(standard  + "SVGComponent.nova"),
				formatPath(standard  + "SVGComponentList.nova"),
				formatPath(standard  + "SVGComponentNode.nova"),
				formatPath(standard  + "SVGMainComponent.nova"),
				formatPath(standard  + "SVGCircle.nova"),
				formatPath(standard  + "System.nova"),
				"-o",   formatPath(directory + "bin/Executable" + OUTPUT_EXTENSION),
				"-dir", formatPath(directory + "../include"),
				"-dir", formatPath(directory + "../include/gc"),
				"-dir", formatPath(directory + "../standard"),
				"-dir", formatPath(directory + "../example"),
				"-dir", formatPath(directory + "../stabilitytest"),
				"-run",
//				"-csource",
				"-formatc",
				"-v",
//				"-gcc",
//				"-small",
				"-cargs",
				"-keepc",
				"-single-thread",
//				"-nogc",
//				"-dry"
				"-library",
			};
		}
		if (ANDROID_DEBUG)
		{
			enableFlag(DRY_RUN);
		}
		
		parseArguments(args);
		
//		log("Nova " + VERSION + " Copyright (C) 2014  Braden Steffaniak <BradenSteffaniak@gmail.com>\n" +
//				"This program comes with ABSOLUTELY NO WARRANTY\n" + //; for details type show w." +
//				"This is free software, and you are welcome to redistribute it\n" +
//				"under certain conditions");//; type show c for details.");
		
		workingDir = new File(directory);
		
		startTimer();
		
		// Try to create a Syntax Tree for the given file.
		try
		{
			int times = 1;
			
			if (BENCHMARK > 0)
			{
				times = BENCHMARK;
			}
			
			try
			{
				for (int i = 0; i < times; i++)
				{
					long before = System.currentTimeMillis();
					
					tree = new SyntaxTree(inputFiles.toArray(new File[0]), this);
					
					tree.generateCOutput();
					
					insertMainMethod();
					
					long time = System.currentTimeMillis() - before;
					
					if (BENCHMARK > 1)
					{
						System.out.println("Benchmark " + (i + 1) + ": " + time + "ms");
					}
				}
			}
			catch (SyntaxErrorException e)
			{
				enableFlag(DRY_RUN);
				completed();
			}
		}
		catch (IOException e1)
		{
			error("Could not generate the syntax tree for the file '");// + file.getName() + "'.");
			
			e1.printStackTrace();
			
			completed();
		}
		
		long   time = System.currentTimeMillis() - startTime;
		
		String str  = LANGUAGE_NAME + " compile time: " + time + "ms";
		
		if (BENCHMARK > 0)
		{
			if (BENCHMARK > 1)
			{
				str += " (Average of " + String.format("%.3f", time / (float)BENCHMARK) + "ms)";
			}
			
			System.out.println(str);
		}
		else
		{
			log(str);
		}
		
		if (isFlagEnabled(FORMATC))
		{
			log("Formatting the output c output code...");
			
			tree.formatCOutput();
		}
		
		String headers[] = tree.getCHeaderOutput();
		String sources[] = tree.getCSourceOutput();
		FileDeclaration files[] = tree.getFiles();
		
		if (isFlagEnabled(CSOURCE))
		{
			for (int i = 0; i < headers.length; i++)
			{
				log(headers[i]);
				log(sources[i]);
			}
		}
		
		log("Writing files...");
		
		StringBuilder allHeaders = new StringBuilder();
		StringBuilder includes = new StringBuilder();
		StringBuilder types = new StringBuilder();

		allHeaders.append("#pragma once\n");
		allHeaders.append("#ifndef NOVA_ALL_HEADERS\n");
		allHeaders.append("#define NOVA_ALL_HEADERS\n\n");
		allHeaders.append("#include <Nova.h>\n");
		allHeaders.append("#include <math.h>\n");
		allHeaders.append("#include <ExceptionHandler.h>\n");
		allHeaders.append("#include <setjmp.h>\n").append('\n');
		
		for (int i = 0; i < files.length; i++)
		{
			FileDeclaration file   = files[i];
			String          header = headers[i];
			String          source = sources[i];
			File            parent = files[i].getFile().getParentFile();
			
			types.append("typedef struct ").append(file.getName()).append(' ').append(file.getName()).append(';').append('\n');
			includes.append("#include <").append(file.generateCHeaderName()).append('>').append('\n');
			
			try
			{
				File headerFile = FileUtils.writeFile(file.generateCHeaderName(), parent, header);
				File sourceFile = FileUtils.writeFile(file.generateCSourceName(), parent, source);
				
				cHeaderFiles.add(headerFile);
				cSourceFiles.add(sourceFile);
				
				if (!isFlagEnabled(KEEP_C))
				{
					lingeringFiles.add(headerFile);
					lingeringFiles.add(sourceFile);
				}
			}
			catch (IOException e)
			{
				e.printStackTrace();
				
				completed();
			}
		}
		
		allHeaders.append(types).append('\n');
		allHeaders.append(includes).append('\n');
		
		allHeaders.append("#endif");
		
		log("Done writing files.");
		
//		try
//		{
//			File file = FileUtils.writeFile("AllNovaHeaders.h", allHeaders.toString());
//		}
//		catch (IOException e)
//		{
//			e.printStackTrace();
//			
//			completed();
//		}
		
//		if (!isFlagEnabled(DRY_RUN))
//		{
			compileC();
//		}
//		else
//		{
//			completed();
//		}
	}
	
	/**
	 * Insert the main method into the correct file. Also set up the
	 * initialization for the program within the main method.
	 */
	private void insertMainMethod()
	{
		MethodDeclaration mainMethod = tree.getMainMethod();
		
		if (mainMethod == null)
		{
			if (!isFlagEnabled(LIBRARY))
			{
				SyntaxMessage.error("No main method found in program", this);
				
				completed();
			}
			
			return;
		}
		
		FileDeclaration fileDeclaration = mainMethod.getFileDeclaration();
		
		if (mainMethod != null)
		{
//			FileDeclaration file = mainMethod.getFileDeclaration();
//			file.addChild(Import.decodeStatement(file, "import \"GC\"", file.getLocationIn(), true, false));
			Identifier gcInit = (Identifier)SyntaxTree.decodeScopeContents(mainMethod, "GC.init()", mainMethod.getLocationIn(), false);
			Identifier enter  = (Identifier)SyntaxTree.decodeScopeContents(mainMethod, "Console.waitForEnter()", mainMethod.getLocationIn(), false);
			
			
			StringBuilder mainMethodText = new StringBuilder();
			
			mainMethodText.append('\n').append('\n');
			mainMethodText.append('\n');
			mainMethodText.append("int main(int argc, char** argvs)").append('\n');
			mainMethodText.append("{").append('\n');
			mainMethodText.append	("String** args;").append('\n');
			mainMethodText.append	("int      i;").append('\n').append('\n');
			mainMethodText.append	("ExceptionData* ").append(Exception.EXCEPTION_DATA_IDENTIFIER).append(" = 0;").append('\n');
			mainMethodText.append	("srand(currentTimeMillis());").append('\n');
			mainMethodText.append	(gcInit.generateCSource()).append('\n');
			mainMethodText.append	("args = (String**)NOVA_MALLOC(argc * sizeof(String));").append('\n');
			mainMethodText.append	('\n');
			mainMethodText.append	("for (i = 0; i < argc; i++)").append('\n');
			mainMethodText.append	("{").append('\n');
			mainMethodText.append		("char* str = (char*)NOVA_MALLOC(sizeof(char) * strlen(argvs[i]) + 1);").append('\n');
			mainMethodText.append		("copy_string(str, argvs[i]);").append('\n');
			mainMethodText.append		("args[i] = ").append(LANGUAGE_NAME.toLowerCase()).append("_String_String(0, str);").append('\n');
			mainMethodText.append	("}").append('\n');
			mainMethodText.append	('\n');
			mainMethodText.append	("TRY").append('\n');
			mainMethodText.append	('{').append('\n');
			mainMethodText.append		(mainMethod.generateCSourceName()).append("(0, ").append(Exception.EXCEPTION_DATA_IDENTIFIER).append(", args);").append('\n');
			mainMethodText.append	('}').append('\n');
			mainMethodText.append	("CATCH (1)").append('\n');
			mainMethodText.append	('{').append('\n');
			mainMethodText.append		("printf(\"You broke it.\");").append('\n');
			mainMethodText.append		(enter.generateCSource()).append('\n');
			mainMethodText.append	('}').append('\n');
			mainMethodText.append	("FINALLY").append('\n');
			mainMethodText.append	('{').append('\n');
			mainMethodText.append		('\n');
			mainMethodText.append	('}').append('\n');
			mainMethodText.append	("END_TRY;").append('\n');
			mainMethodText.append	("NOVA_FREE(args);").append('\n');
			mainMethodText.append	("GC_gcollect();").append('\n');
			mainMethodText.append	('\n');
			mainMethodText.append	("return 0;").append('\n');
			mainMethodText.append("}");
			
			String newSource = fileDeclaration.generateCSource() + mainMethodText.toString();
			
			newSource = SyntaxUtils.formatText(newSource);
			
			fileDeclaration.setSource(newSource);
		}
	}
	
	/**
	 * Compile the generated c code into an executable file.
	 */
	private void compileC()
	{
		StringBuilder cmd = new StringBuilder();
		
		if (compiler == GCC)
		{
			cmd.append("gcc -pipe ");
			
			if (isFlagEnabled(SMALL_BIN))
			{
				cmd.append("-ffast-math ");
			}
			else
			{
				cmd.append("-march=native -fomit-frame-pointer ");
			}
		}
		else if (compiler == TCC)
		{
			cmd.append("compiler/tcc/tcc.exe ");
		}
		else if (compiler == CLANG)
		{
			cmd.append("clang ");
		}
		
		if (!isFlagEnabled(NO_GC))
		{
			cmd.append("-DUSE_GC ");
		}
		
		cmd.append("-DE4C_THREADSAFE ");
		
		for (int i = 0; i < includeDirectories.size(); i++)
		{
			String dir = includeDirectories.get(i);
			
			cmd.append("-I").append(dir).append(' ');
		}
		
		String libDir    = workingDir + "/bin/";
		
		String libFathom = formatPath(libDir + "libNova" + DYNAMIC_LIB_EXT);
		String libThread = formatPath(libDir + "libThread" + DYNAMIC_LIB_EXT);
		String libGC     = formatPath(libDir + "gc" + DYNAMIC_LIB_EXT);
		
		cmd.append(libFathom).append(' ').append(libThread).append(' ').append(libGC).append(' ');
		
		for (File sourceFile : cSourceFiles)
		{
			cmd.append('"').append(sourceFile.getAbsolutePath()).append('"').append(' ');
		}
		
		cmd.append(formatPath(workingDir  + "../standard/NativeObject.c")).append(' ');
		cmd.append(formatPath(workingDir  + "../standard/NativeThread.c")).append(' ');
		cmd.append(formatPath(workingDir  + "../standard/NativeSystem.c")).append(' ');
		
		cmd.append("-o ").append('"').append(outputFile.getAbsolutePath()).append('"').append(' ');
		
		if (isFlagEnabled(SMALL_BIN))
		{
			cmd.append("-Os -s ");
		}
		else
		{
			cmd.append("-O2 ");
		}
		
//		cmd.append("-Ofast ");
//		cmd.append("-s ");
		
		if (OS == LINUX)
		{
			cmd.append("-lm -lpthread -ldl");
		}
		
		if (isFlagEnabled(C_ARGS))
		{
			System.out.println(cmd);
		}
		
		if (isFlagEnabled(DRY_RUN))
		{
			completed();
		}
		
		log("Compiling C sources...");
		
		final Command command = new Command(cmd.toString(), workingDir);
		
		command.addCommandListener(new CommandListener()
		{
			boolean failed = false;
			
			@Override
			public void resultReceived(int result)
			{
				if (!failed)
				{
					log("Compilation succeeded.");
				}
				else
				{
					System.err.println("Compilation failed.");
				}
			}
			
			@Override
			public void messageReceived(String message)
			{
				System.out.println(message);
			}
			
			@Override
			public void errorReceived(String message)
			{
				if (compiler == TCC)
				{
					if (message.contains("error: "))
					{
						failed = true;
					}
				}
				else if (compiler == GCC)
				{
					if (message.contains("error: "))
					{
						failed = true;
					}
				}
				else
				{
					failed = true;
				}
				
				System.err.println(message);
			}
			
			@Override
			public void commandExecuted()
			{
				try
				{
					command.terminate();
					
					completed();
				}
				catch (InterruptedException e)
				{
					e.printStackTrace();
				}
			}
		});
		
		try
		{
			command.execute();
		}
		catch (IOException e)
		{
			e.printStackTrace();
		}
	}
	
	/**
	 * Remove all of the relative syntax from the given path.<br>
	 * <br>
	 * For example: Passing a path of "C:/folder/../dir1/dir2" would
	 * return a path of "C:/dir1/dir2"
	 * 
	 * @param path The path to remove the relative syntax from.
	 * @return The newly formatted path.
	 */
	private String formAbsolutePath(String path)
	{
		StringBuilder absolute = new StringBuilder(path);
		
		int index = absolute.indexOf("..");
		
		while (index >= 0)
		{
			int index2 = absolute.lastIndexOf("/", index - 2);
			
			absolute.delete(index2, index + 2);
			
			index = absolute.indexOf("..");
		}
		
		return absolute.toString();
	}
	
	/**
	 * Format a path according to how the specified OS needs it.
	 * 
	 * @param path The path to format for the OS standards.
	 * @return The formatted path.
	 */
	private String formatPath(String path)
	{
		path = path.replace("\\", "/");
		
		path = formAbsolutePath(path);
		
		if (OS == WINDOWS)
		{
			return '"' + path + '"';
		}
		else
		{
			return StringUtils.escapeSpaces(path);
		}
	}
	
	/**
	 * Get the directory that holds the Nova library.
	 * 
	 * @return The location of the directory that holds the library.
	 */
	private String getLibraryDir()
	{
		return formatPath(workingDir + "/../lib");
	}
	
	/**
	 * Output the log message from the compiler.
	 * 
	 * @param message The message describing what happened.
	 */
	public void log(String message)
	{
		log(flags, message);
	}
	
	/**
	 * Output the log message from the compiler.
	 * 
	 * @param flags The flags that verify whether the compiler is verbose.
	 * @param message The message describing what happened.
	 */
	public static void log(long flags, String message)
	{
		if (isFlagEnabled(flags, VERBOSE))
		{
			System.out.println(message);
		}
	}
	
	/**
	 * Output a warning message from the compiler.
	 * 
	 * @param message The message describing the warning.
	 */
	public void warning(String message)
	{
		errors.add("Warning: " + message);
	}
	
	/**
	 * Output an error message from the compiler.
	 * 
	 * @param message The message describing the error.
	 */
	public void error(String message)
	{
		if (!isFlagEnabled(DRY_RUN))
		{
			enableFlag(DRY_RUN);
		}
		
		String error = "Error: " + message;
		
		errors.add(error);
	}
	
	/**
	 * Get whether or not the compilation has accumulated any errors.
	 * 
	 * @return Whether or not there are any errors currently.
	 */
	public boolean containsErrors()
	{
		return errors.size() > 0;
	}
	
	/**
	 * Parse the arguments passed to the compiler.
	 * 
	 * @param args The list of arguments to parse.
	 */
	private void parseArguments(String args[])
	{
		// Start off the lastInput index to -1 because it will start
		// checking for (index - 1).
		// (index starts at 0, therefore 0 - 1 = -1)
		int lastInput = -1;
		
		// Declare and initialize two booleans used to keep track of
		// whether or not the argument parser is expecting a certain
		// type of input at the current argument.
		boolean expectingOutputFile       = false;
		boolean expectingIncludeDirectory = false;
		
		// Iterate through all of the arguments.
		for (int i = 0; i < args.length; i++)
		{
			// Lowercase the argument for easier non-case-sensitive String
			// matching.
			String arg = args[i].toLowerCase();
			
			// Create temporary variables holding the current values.
			boolean expectingIncludeDirectoryTemp = expectingIncludeDirectory;
			
			// Set the variables to false in the expectation of a
			// different type of argument.
			expectingIncludeDirectory = false;
			
			// Check all other types of arguments.
			
			// If the user is trying to set the output location.
			if (arg.equals("-o"))
			{
				expectingOutputFile = true;
			}
			// If the user is trying to set the source include directory.
			else if (arg.equals("-dir"))
			{
				expectingIncludeDirectory = true;
			}
			// If the user wants to run the application after compilation.
			else if (arg.equals("-run"))
			{
				enableFlag(RUNTIME);
			}
			// Do not use bdw garbage collection.
			else if (arg.equals("-nogc"))
			{
				enableFlag(NO_GC);
			}
			// If the user wants to view the c source output.
			else if (arg.equals("-csource"))
			{
				enableFlag(CSOURCE);
			}
			// If the user wants to format the c source output.
			else if (arg.equals("-formatc"))
			{
				enableFlag(FORMATC);
			}
			// If the user wants a more verbose compilation output,
			// explaining each step.
			else if (arg.equals("-verbose") || arg.equals("-v"))
			{
				if (BENCHMARK <= 0)
				{
					enableFlag(VERBOSE);
				}
			}
			// If the user wants to use the GCC c compiler.
			else if (arg.equals("-gcc"))
			{
				compiler = GCC;
			}
			// If the user wants to use the TCC c compiler.
			else if (arg.equals("-tcc"))
			{
				compiler = TCC;
			}
			// If the user wants to use the CLANG LLVM compiler.
			else if (arg.equals("-clang"))
			{
				compiler = CLANG;
			}
			// If the user wants to run a single threaded compilation
			else if (arg.equals("-single-thread"))
			{
				enableFlag(SINGLE_THREAD);
			}
			// If the user wants to perform a dry run of the compilation
			// process.
			else if (arg.equals("-dry"))
			{
				enableFlag(DRY_RUN);
			}
			// If the user wants to keep the files that hold the c output.
			else if (arg.equals("-keepc"))
			{
				enableFlag(KEEP_C);
			}
			// If the user wants to obtain the c compiler arguments.
			else if (arg.equals("-cargs"))
			{
				enableFlag(C_ARGS);
			}
			// If the user wants to generate a smaller executable output.
			else if (arg.equals("-small"))
			{
				enableFlag(SMALL_BIN);
			}
			// If the user wants to output a library instead of an
			// executable.
			else if (arg.equals("-library"))
			{
				enableFlag(LIBRARY);
			}
			// If none of the arguments were matched, check these:
			else
			{
				expectingIncludeDirectory = expectingIncludeDirectoryTemp;
				
				if (args[i].startsWith("\""))
				{
					args[i] = args[i].substring(1, args[i].length() - 1);
				}
				
				// If the argument is one of the first arguments passed
				// (If it is one of the sources to compile)
				if (lastInput == i - 1)
				{
					File file = new File(args[i]);
					
					inputFiles.add(file);
					
					lastInput = i;
				}
				// Check if we are still dealing with any  ongoing arguments
				// still.
				else if (expectingOutputFile)
				{
					outputFile = new File(args[i]);
					
					expectingOutputFile = false;
				}
				else if (expectingIncludeDirectory)
				{
					includeDirectories.add(formatPath(args[i]));
				}
				else
				{
					error("Unknown argument '" + args[i] + "'");
					completed();
				}
			}
		}
		
		validateInputFiles();
		
//		if (outputFile == null)
//		{
//			enableFlag(RUNTIME);
//			
//			outputFile = new File(workingDir, "bin/Executa.exe");
//		}
	}
	
	/**
	 * Validate that the input files end with .fat. If any of them
	 * do not, an error will be output. Also outputs an error if the
	 * input file does not exist or is a directory.
	 */
	private void validateInputFiles()
	{
		boolean working = true;
		
		for (File f : inputFiles)
		{
			if (!f.getName().toLowerCase().endsWith(".nova"))
			{
				working = false;
				
				error("Input file '" + f.getName() + "' must have an extension of .nova");
			}
			else if (!f.exists())
			{
				working = false;
				
				error("Input file '" + f.getAbsolutePath() + "' does not exist.");
			}
			else if (!f.isFile())
			{
				working = false;
				
				error("Input file '" + f.getAbsolutePath() + "' is not a file.");
			}
		}
		
		if (!working)
		{
			startTimer();
			stopTimer();
			
			completed();
		}
	}
	
	/**
	 * Enable the specified flag.
	 * 
	 * @param flag The flag to set enable.
	 */
	private void enableFlag(long flag)
	{
		flags |= flag;
	}
	
	/**
	 * Disable the specified flag.
	 * 
	 * @param flag The flag to disable.
	 */
	private void disableFlag(long flag)
	{
		flags = flags & (~flag);
	}
	
	/**
	 * Check if the specific flag is enabled for the compiler.
	 * 
	 * @param flag The flag to check if is enabled.
	 * @return Whether or not the flag is enabled.
	 */
	public boolean isFlagEnabled(long flag)
	{
		return isFlagEnabled(flags, flag);
	}
	
	/**
	 * Check if the specific flag is enabled for the given set of flags.
	 * 
	 * @param flags The flags to verify the flag with.
	 * @param flag The flag to check if is enabled.
	 * @return Whether or not the flag is enabled.
	 */
	public static boolean isFlagEnabled(long flags, long flag)
	{
		return (flags & flag) != 0;
	}
	
	/**
	 * Get the working directory of the compiler.
	 * 
	 * @return The working directory of the compiler.
	 */
	private static String getWorkingDirectoryPath()
	{
		if (ANDROID_DEBUG)
		{
			return "/mnt/sdcard/AppProjects/Nova/";
		}
			
		return System.getProperty("user.dir").replace('\\', '/') + "/";
	}
	
	/**
	 * Start the compilation timer.
	 */
	private void startTimer()
	{
		startTime = System.currentTimeMillis();
	}
	
	/**
	 * Stop the compilation timer.
	 */
	private void stopTimer()
	{
		endTime = System.currentTimeMillis();
	}
	 
	/**
	 * Get the time the compiler took to compile the input files.
	 * 
	 * @return The time in milliseconds it took to compile.
	 */
	private long getCompileTime()
	{
		return endTime - startTime;
	}
	
	/**
	 * Delete the files that are left over from the compilation process.
	 */
	private void deleteLingeringFiles()
	{
		Iterator<File> files = lingeringFiles.iterator();
		
		while (files.hasNext())
		{
			File file = files.next();
			
			if (!file.delete())
			{
				System.err.println("Error: Was not able to delete file: " + file.getAbsolutePath());
			}
		}
	}
	
	/**
	 * Output all of the stored errors, warnings, and other messages.
	 */
	private void outputMessages()
	{
		for (String s : messages)
		{
			System.out.println(s);
		}
		
		if (errors.size() > 0)
		{
			System.err.println("Compilation failed with " + errors.size() + " error" + (errors.size() > 1 ? "s" : "") + ".");
		}
		
		for (String s : errors)
		{
			System.err.println(s);
		}
	}
	
	/**
	 * Method called whenever the compilation sequence has completed.
	 */
	public void completed()
	{
		stopTimer();
		
		log("Compile time: " + getCompileTime() + "ms");
		
		deleteLingeringFiles();
		
		outputMessages();
		
		if (isFlagEnabled(RUNTIME))
		{
//			final Command c = new Command("start bin/Executa.exe", workingDir);
//			
//			c.addCommandListener(new CommandListener()
//			{
//				
//				@Override
//				public void resultReceived(int result)
//				{
//					if (result != 0)
//					{
//						System.err.println("error.");
//					}
//				}
//				
//				@Override
//				public void messageReceived(String message)
//				{
//					System.out.println(message);
//				}
//				
//				@Override
//				public void errorReceived(String message)
//				{
//					System.err.println(message);
//				}
//				
//				@Override
//				public void commandExecuted()
//				{
//					try
//					{
//						c.terminate();
//					}
//					catch (InterruptedException e)
//					{
//						e.printStackTrace();
//					}
//				}
//			});
//			try
//			{
//				c.execute();
//			}
//			catch (IOException e)
//			{
//				e.printStackTrace();
//			}
		}
		
		if (!ANDROID_DEBUG)
		{
			System.exit(0);
		}
	}
	
	public static void debuggingBreakpoint()
	{
		
	}
	
	private void testClasses()
	{
		String error = null;
		
		error = ArgumentList.test();
		
		if (error == null)
		{
			error = Assignment.test();
			
			if (error == null)
			{
				error = BinaryOperation.test();
					
				if (error == null)
				{
					error = ClassDeclaration.test();
					
					if (error == null)
					{
						error = Closure.test();
						
						if (error == null)
						{
							error = ClosureDeclaration.test();
							
							if (error == null)
							{
								error = Condition.test();
								
								if (error == null)
								{
									error = Constructor.test();
									
									if (error == null)
									{
										error = Destructor.test();
										
										if (error == null)
										{
											error = Dimensions.test();
											
											if (error == null)
											{
												error = ElseStatement.test();
												
												if (error == null)
												{
													error = ExternalMethodDeclaration.test();
													
													if (error == null)
													{
														error = ExternalType.test();
														
														if (error == null)
														{
															error = ExternalTypeList.test();
															
															if (error == null)
															{
																error = FileDeclaration.test();
																
																if (error == null)
																{
																	error = ForLoop.test();
																	
																	if (error == null)
																	{
																		error = Identifier.test();
																		
																		if (error == null)
																		{
																			error = IfStatement.test();
																			
																			if (error == null)
																			{
																				error = IIdentifier.test();
																				
																				if (error == null)
																				{
																					error = Import.test();
																					
																					if (error == null)
																					{
																						error = ImportList.test();
																						
																						if (error == null)
																						{
																							error = InstanceDeclaration.test();
																							
																							if (error == null)
																							{
																								error = Instantiation.test();
																								
																								if (error == null)
																								{
																									error = IValue.test();
																									
																									if (error == null)
																									{
																										error = Literal.test();
																										
																										if (error == null)
																										{
																											error = LocalDeclaration.test();
																											
																											if (error == null)
																											{
																												error = Loop.test();
																												
																												if (error == null)
																												{
																													error = LoopInitialization.test();
																													
																													if (error == null)
																													{
																														error = LoopUpdate.test();
																														
																														if (error == null)
																														{
																															error = MethodCall.test();
																															
																															if (error == null)
																															{
																																error = MethodCallArgumentList.test();
																																
																																if (error == null)
																																{
																																	error = MethodDeclaration.test();
																																	
																																	if (error == null)
																																	{
																																		error = MethodList.test();
																																		
																																		if (error == null)
																																		{
																																			error = Node.test();
																																			
																																			if (error == null)
																																			{
																																				error = Operator.test();
																																				
																																				if (error == null)
																																				{
																																					error = Parameter.test();
																																					
																																					if (error == null)
																																					{
																																						error = ParameterList.test();
																																						
																																						if (error == null)
																																						{
																																							error = Priority.test();
																																							
																																							if (error == null)
																																							{
																																								error = Program.test();
																																								
																																								if (error == null)
																																								{
																																									error = Return.test();
																																									
																																									if (error == null)
																																									{
																																										error = Scope.test();
																																										
																																										if (error == null)
																																										{
																																											error = SyntaxTree.test();
																																											
																																											if (error == null)
																																											{
																																												error = TreeGenerator.test();
																																												
																																												if (error == null)
																																												{
																																													error = UnaryOperation.test();
																																													
																																													if (error == null)
																																													{
																																														error = Until.test();
																																														
																																														if (error == null)
																																														{
																																															error = Value.test();
																																															
																																															if (error == null)
																																															{
																																																error = VTable.test();
																																																
																																																if (error == null)
																																																{
																																																	error = WhileLoop.test();
																																																}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		
		if (error != null)
		{
			System.err.println("Pre-compilation class tests failed:");
			System.err.println(error);
			
			completed();
		}
	}
}
