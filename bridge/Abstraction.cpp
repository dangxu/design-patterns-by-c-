#include "Abstraction.h"
#include "AbstractionImpl.h"

Abstraction::Abstraction(void)
{
}

Abstraction::~Abstraction(void)
{
}

RefindedAbstraction::RefindedAbstraction(AbstractionImpl *impl)
{
	_impl = impl;
}

RefindedAbstraction::~RefindedAbstraction()
{
}

void RefindedAbstraction::operation()
{
	_impl->operation();
}
