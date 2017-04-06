#include "Decorator.h"

Decorator::Decorator(Component *cmp)
{
	this->_cmp = cmp;
}

Decorator::~Decorator(void)
{
}

void Decorator::operation()
{
	this->_cmp->operation();
}
