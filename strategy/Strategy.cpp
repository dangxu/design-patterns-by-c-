#include "Strategy.h"
#include <iostream>

using namespace std;

Strategy::Strategy()
{
}

Strategy::~Strategy()
{
}

void Strategy::algrithmInterface()
{
}

ConcreteStrategyA::ConcreteStrategyA()
{
}

ConcreteStrategyA::~ConcreteStrategyA()
{
}

void ConcreteStrategyA::algrithmInterface()
{
	cout<<"ConcreteStrategyA::algrithmInterface"<<endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{
}

ConcreteStrategyB::~ConcreteStrategyB()
{
}

void ConcreteStrategyB::algrithmInterface()
{
	cout<<"ConcreteStrategyB::algrithmInterface"<<endl;
}