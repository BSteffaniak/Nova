#include <precompiled.h>
#include <nova/standard/network/nova_standard_network_Nova_ServerSocket.h>


nova_standard_network_Extension_VTable_ServerSocket nova_standard_network_Extension_VTable_ServerSocket_val =
{
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_standard_Nova_Object_0_Nova_getHashCodeLong,
	nova_standard_Nova_Object_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
};


CCLASS_PRIVATE
(
	SOCKET_ID_TYPE nova_standard_network_Nova_ServerSocket_Nova_serverSocket;
	
)
void nova_standard_network_Nova_ServerSocketNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_network_Nova_ServerSocket* nova_standard_network_Nova_ServerSocket_2_Nova_construct(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_standard_network_Nova_ServerSocket, this);
	this->vtable = &nova_standard_network_Extension_VTable_ServerSocket_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_network_Nova_Socket_Nova_super((nova_standard_network_Nova_Socket*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_network_Nova_Socket_2_Nova_this((nova_standard_network_Nova_Socket*)(this), exceptionData);
	nova_standard_network_Nova_ServerSocket_2_Nova_super(this, exceptionData);
	
	{
		nova_standard_network_Nova_ServerSocket_2_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_standard_network_Nova_ServerSocket_Nova_destroy(nova_standard_network_Nova_ServerSocket** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	nova_standard_datastruct_Nova_ArrayList_Nova_destroy(&(*this)->nova_standard_network_Nova_ServerSocket_Nova_requests, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_standard_network_Nova_ServerSocket_2_Nova_this(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_standard_network_Nova_ServerSocket_Nova_open = 0;
}

char nova_standard_network_Nova_ServerSocket_Nova_start(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_port)
{
	this->prv->nova_standard_network_Nova_ServerSocket_Nova_serverSocket = nova_serversocket_start((int)(l0_Nova_port));
	if (this->prv->nova_standard_network_Nova_ServerSocket_Nova_serverSocket == 0)
	{
		return 0;
	}
	this->nova_standard_network_Nova_ServerSocket_Nova_open = 1;
	return 1;
}

char nova_standard_network_Nova_ServerSocket_Nova_close(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_result;
	
	l1_Nova_result = (int)(nova_socket_close(this->prv->nova_standard_network_Nova_ServerSocket_Nova_serverSocket));
	if (l1_Nova_result == 0)
	{
		return 0;
	}
	this->nova_standard_network_Nova_ServerSocket_Nova_open = 0;
	return 1;
}

nova_standard_network_Nova_ConnectionSocket* nova_standard_network_Nova_ServerSocket_Nova_acceptClient(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	SOCKET_ID_TYPE l1_Nova_clientSocket;
	nova_standard_network_Nova_ConnectionSocket* l1_Nova_socket;
	
	l1_Nova_clientSocket = nova_serversocket_accept(this->prv->nova_standard_network_Nova_ServerSocket_Nova_serverSocket);
	if (l1_Nova_clientSocket == 0)
	{
		return (nova_standard_network_Nova_ConnectionSocket*)nova_null;
	}
	l1_Nova_socket = nova_standard_network_Nova_ConnectionSocket_Nova_construct(0, exceptionData, l1_Nova_clientSocket);
	return l1_Nova_socket;
}

void nova_standard_network_Nova_ServerSocket_2_Nova_super(nova_standard_network_Nova_ServerSocket* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_standard_network_Nova_ServerSocket_Nova_open = 0;
	this->nova_standard_network_Nova_ServerSocket_Nova_requests = (nova_standard_datastruct_Nova_ArrayList*)nova_null;
	this->prv->nova_standard_network_Nova_ServerSocket_Nova_serverSocket = 0;
	this->nova_standard_network_Nova_ServerSocket_Nova_requests = nova_standard_datastruct_Nova_ArrayList_2_Nova_construct(0, exceptionData);
}
