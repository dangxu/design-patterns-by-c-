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
		cout<<"ConcreteHandleA �ҰѴ���Ȩ����̽ڵ�....."<<endl;
		this->getSuccessor()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleA û�к���ˣ��ұ����Լ�����...."<<endl;
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
		cout<<"ConcreteHandleB �ҰѴ���Ȩ����̽ڵ�....."<<endl;
		this->getSuccessor()->handleRequest();
	}
	else
	{
		cout<<"ConcreteHandleB û�к���ˣ��ұ����Լ�����...."<<endl;
	}
}