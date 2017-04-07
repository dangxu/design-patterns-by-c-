#include "Template.h"
#include <iostream>
using namespace std;

TemplateClass::TemplateClass()
{
}

TemplateClass::~TemplateClass()
{
}

void TemplateClass::algrithmInterface()
{
	this->algrithmOperation1();
	this->algrithmOperation2();
}

ConcreteTemplateA::ConcreteTemplateA()
{
}

ConcreteTemplateA::~ConcreteTemplateA()
{
}

void ConcreteTemplateA::algrithmOperation1()
{
	cout<<"ConcreteTemplateA::algrithmOperation1"<<endl;
}

void ConcreteTemplateA::algrithmOperation2()
{
	cout<<"ConcreteTemplateA::algrithmOperation2"<<endl;
}

ConcreteTemplateB::ConcreteTemplateB()
{
}

ConcreteTemplateB::~ConcreteTemplateB()
{
}

void ConcreteTemplateB::algrithmOperation1()
{
	cout<<"ConcreteTemplateB::algrithmOperation1"<<endl;
}

void ConcreteTemplateB::algrithmOperation2()
{
	cout<<"ConcreteTemplateB::algrithmOperation2"<<endl;
}