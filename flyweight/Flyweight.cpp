#include "Flyweight.h"
#include <iostream>
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
	this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{
}
void Flyweight::Operation(const string& extrinsicState)
{
	cout << this->GetIntrinsicState() << endl;
	cout << extrinsicState << endl;
}

string Flyweight::GetIntrinsicState()
{
	return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState):Flyweight(intrinsicState)
{
	cout<<"ConcreteFlyweight::ConcreteFlyweight"<<intrinsicState<<endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::Operation(const string& extrinsicState)
{
	cout<<"ConcreteFlyweight:inner ["<<this->GetIntrinsicState()<<"], outer["<<extrinsicState<<"]"<<endl;
}

/*
UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(string intrinsicState):Flyweight(intrinsicState)
{
}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight()
{
}

void UnsharedConcreteFlyweight::Operation(const string& extrinsicState)
{
	cout << "extrinsicState" << endl;
}
*/