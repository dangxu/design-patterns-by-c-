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
	if (_succ)
		delete _succ;
}

Handle::Handle(Handle* succ)
{
	this->_succ = succ;
}

void Handle::setSuccessor(Handle* succ)
{
	_succ = succ;
}

Handle* Handle::getSuccessor()
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
	if (this->getSuccessor() != 0)
	{
		cout<<"ConcreteHandleA 我把处理权给后继节点....."<<endl;
		this->getSuccessor()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleA 没有后继了，我必须自己处理...."<<endl;
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
	if (this->getSuccessor() != 0)
	{
		cout<<"ConcreteHandleB 我把处理权给后继节点....."<<endl;
		this->getSuccessor()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleB 没有后继了，我必须自己处理...."<<endl;
	}
}