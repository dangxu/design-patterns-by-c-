#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

ConcreteFlyweight::ConcreteFlyweight(const string state) : Flyweight(state)
{
}

ConcreteFlyweight::~ConcreteFlyweight(void)
{
}

void ConcreteFlyweight::operation(const string &extrinsicState)
{
	cout << "inner state:" << this->getState()
		<< ", outer state:" << extrinsicState
		<< endl;
}