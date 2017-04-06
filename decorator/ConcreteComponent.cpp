#include "ConcreteComponent.h"
#include <iostream>
using namespace std;

ConcreteComponent::ConcreteComponent(void)
{
}

ConcreteComponent::~ConcreteComponent(void)
{
}

void ConcreteComponent::operation()
{
	cout << "ConcreteComponent::operation" << endl;
}
