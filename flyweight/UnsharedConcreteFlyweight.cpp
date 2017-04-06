#include "UnsharedConcreteFlyweight.h"
#include <iostream>
using namespace std;

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(const string state) : Flyweight(state)
{
}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight(void)
{
}

void UnsharedConcreteFlyweight::operation(const string &extrinsicState)
{
	cout << extrinsicState << endl;
}
