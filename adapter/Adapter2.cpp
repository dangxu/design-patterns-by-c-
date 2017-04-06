#include "Adapter2.h"

Adapter2::Adapter2(Adaptee *adpe)
{
	this->_adpe = adpe;
}

Adapter2::~Adapter2(void)
{
}

void Adapter2::request()
{
	_adpe->SpecialRequest();
}