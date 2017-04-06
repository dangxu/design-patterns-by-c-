#include "Context.h"
#include "Strategy.h"
#include <iostream>
using namespace std;

Context::Context(Strategy* stg)
{
	_stg = stg;
}

Context::~Context()
{
	if (!_stg)
		delete _stg;
}

void Context::doAction()
{
	//interface implement by composite object's method
	_stg->algrithmInterface();
}
