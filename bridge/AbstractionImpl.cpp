#include "AbstractionImpl.h"
#include <iostream>
using namespace std;

AbstractionImpl::AbstractionImpl(void)
{
}

AbstractionImpl::~AbstractionImpl(void)
{
}

void AbstractionImpl::operation()
{
	cout << "AbstractionImpl::operation" << endl;
}

ConcreteAbstractionImplA::ConcreteAbstractionImplA()
{
}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
{
}

void ConcreteAbstractionImplA::operation()
{
	cout << "ConcreteAbstractionImplA::operation" << endl;
}

ConcreteBbstractionImplB::ConcreteBbstractionImplB()
{
}

ConcreteBbstractionImplB::~ConcreteBbstractionImplB()
{
}

void ConcreteBbstractionImplB::operation()
{
	cout << "ConcreteBbstractionImplB::operation" << endl;
}