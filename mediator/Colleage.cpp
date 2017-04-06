//Colleage.cpp
#include "Mediator.h"
#include "Colleage.h"
#include <iostream>
using namespace std;

Colleage::Colleage(Mediator* pMediator)
{
	_mediator = pMediator;
}

Colleage::~Colleage()
{}

void Colleage::setMediator(Mediator* pMediator)
{
	_mediator = pMediator;
}

//
ConcreteColleageA::ConcreteColleageA(Mediator* pMediator) : Colleage(pMediator)
{
}

ConcreteColleageA::~ConcreteColleageA()
{
}

void ConcreteColleageA::sendMsg(string msg)
{
	_mediator->sendMsg(msg,this);
}

void ConcreteColleageA::getMsg(string msg)
{
	cout << "ConcreteColleageA Receive:"<< msg << endl;
}

//
ConcreteColleageB::ConcreteColleageB(Mediator* pMediator) : Colleage(pMediator)
{
}

ConcreteColleageB::~ConcreteColleageB()
{
}

void ConcreteColleageB::sendMsg(string msg)
{
	_mediator->sendMsg(msg,this);
}

void ConcreteColleageB::getMsg(string msg)
{
	cout << "ConcreteColleageB Receive:" << msg << endl;
}