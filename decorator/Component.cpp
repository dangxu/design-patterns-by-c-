#include "Component.h"
#include <iostream>
using namespace std;

Component::Component(void)
{
}

Component::~Component(void)
{
}

void Component::operation()
{
	cout << "Component::operation" << endl;
}