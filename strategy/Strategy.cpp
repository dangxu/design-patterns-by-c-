#include "Strategy.h"
#include <iostream>

using namespace std;

Strategy::Strategy()
{
}

Strategy::~Strategy()
{
	cout<<"~Strategy....."<<endl;
}

void Strategy::algrithmInterface()
{
}

ConcreteStrategyA::ConcreteStrategyA()
{
}

ConcreteStrategyA::~ConcreteStrategyA()
{
	cout<<"~ConcreteStrategyA....."<<endl;
}

void ConcreteStrategyA::algrithmInterface()
{
	cout<<"test ConcreteStrategyA....."<<endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{
}

ConcreteStrategyB::~ConcreteStrategyB()
{
	cout<<"~ConcreteStrategyB....."<<endl;
}

void ConcreteStrategyB::algrithmInterface()
{
	cout<<"test ConcreteStrategyB....."<<endl;
}