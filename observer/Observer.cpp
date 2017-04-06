#include "Observer.h"
#include "Subject.h"
#include <iostream>

Observer::Observer()
{}

Observer::~Observer()
{}

ConcreteObserverA::ConcreteObserverA()
{}

ConcreteObserverA::~ConcreteObserverA()
{}

void ConcreteObserverA::update(Subject* pSubject)
{
	this->_st = pSubject->getState();
	cout << "The ConcreteObserverA is " << _st << std::endl;
}

ConcreteObserverB::ConcreteObserverB()
{}

ConcreteObserverB::~ConcreteObserverB()
{}

void ConcreteObserverB::update(Subject* pSubject)
{
	this->_st = pSubject->getState();
	cout << "The ConcreteObserverB is " << _st << std::endl;
}