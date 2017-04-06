#include "Invoker.h"

Invoker::Invoker(Command* pCommand)
{
	this->_cmd = pCommand;
}

Invoker::~Invoker()
{}

void Invoker::invoke()
{
	this->_cmd->execute();
}