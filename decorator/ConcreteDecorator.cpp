#include "ConcreteDecorator.h"
#include <iostream>
using namespace std;

ConcreteDecorator::ConcreteDecorator(Component *cmp) : Decorator(cmp)
{
}

ConcreteDecorator::~ConcreteDecorator(void)
{
}

void ConcreteDecorator::operation()
{
	this->_cmp->operation();
	this->addedBehavior();
}

void ConcreteDecorator::addedBehavior()
{
	cout << "ConcreteDecorator::addedBehavior" << endl;
}