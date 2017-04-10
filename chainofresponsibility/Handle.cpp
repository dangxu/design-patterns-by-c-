//Handle.cpp
#include "Handle.h"
#include <iostream>

using namespace std;
Handle::Handle()
{
	_succ = 0;
}

Handle::~Handle()
{
}

Handle::Handle(Handle* succ)
{
	this->_succ = succ;
}

void Handle::setHandler  (Handle* succ)
{
	_succ = succ;
}

Handle* Handle::getHandler()
{
	return _succ;
}

void Handle::handleRequest()
{
}

//
ConcreteHandleA::ConcreteHandleA()
{
}

ConcreteHandleA::ConcreteHandleA(Handle* succ):Handle(succ)
{
}

ConcreteHandleA::~ConcreteHandleA()
{
}

void ConcreteHandleA::handleRequest()
{
	if (this->getHandler() != 0)
	{
		cout<<"ConcreteHandleA pass the request to next handler ......"<<endl;
		this->getHandler()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleA handle the request himself."<<endl;
	}
}

//
ConcreteHandleB::ConcreteHandleB()
{
}

ConcreteHandleB::ConcreteHandleB(Handle* succ):Handle(succ)
{
}

ConcreteHandleB::~ConcreteHandleB()
{
}

void ConcreteHandleB::handleRequest()
{
	if (this->getHandler() != 0)
	{
		cout<<"ConcreteHandleB pass the request to next handler ......"<<endl;
		this->getHandler()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleB handle the request himself."<<endl;
	}
}