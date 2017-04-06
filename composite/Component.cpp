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

void Component::add(Component*)
{
}

void Component::remove(Component*)
{
}

Component* Component::getChild(const int index)
{
	return 0;
}