//Director.cpp
#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld)
{
	_bld = bld;
}

Director::~Director()
{
}

void Director::Construct()
{
    _bld->BuildPart();
}

Product* Director::GetProduct()  
{  
    return _bld->GetProduct();
}  