//Mediator.cpp
#include "Mediator.h"
#include "Colleage.h"

Mediator::Mediator()
{}

Mediator::~Mediator()
{}

ConcreteMediator::ConcreteMediator()
{}

ConcreteMediator::~ConcreteMediator()
{}

void ConcreteMediator::setColleageA(Colleage* p)
{
	m_ColleageA = p;
}

void ConcreteMediator::setColleageB(Colleage* p)
{
	m_ColleageB = p;
}

void ConcreteMediator::sendMsg(string msg,Colleage* from)
{
	// p is m_ColleageA, then send msg to m_ColleageB
	if(from == m_ColleageA)
	{
		m_ColleageB->getMsg(msg);
	}
	else if(from == m_ColleageB)
	{
		m_ColleageA->getMsg(msg);
	}
}