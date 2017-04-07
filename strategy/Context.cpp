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
}

void Context::doAction()
{
    _stg->algrithmInterface();
}
