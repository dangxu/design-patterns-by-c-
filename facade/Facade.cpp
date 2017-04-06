#include "Facade.h"
#include <iostream>
using namespace std;

Subsystem1::Subsystem1()
{
}
Subsystem1::~Subsystem1()
{
}
void Subsystem1::operation()
{
	cout<<"Subsystem1 operation.."<<endl;
}

Subsystem2::Subsystem2()
{
}
Subsystem2::~Subsystem2()
{
}
void Subsystem2::operation()
{
	cout<<"Subsystem2 operation.."<<endl;
}

Facade::Facade()
{
	this->_subs1 = new Subsystem1();
	this->_subs2 = new Subsystem2();
}
Facade::~Facade()
{
	delete _subs1;
	delete _subs2;
}
void Facade::operationWrapper()
{
	this->_subs1->operation();
	this->_subs2->operation();
}