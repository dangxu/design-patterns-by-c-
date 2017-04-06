#include "Command.h"
#include <iostream>

using namespace std;

Command::Command()
{}

Command::~Command()
{}

//
ConcreteCommand::ConcreteCommand(Receiver* pReceiver)
{
	this->_recv = pReceiver;
}

ConcreteCommand::~ConcreteCommand()
{}

void ConcreteCommand::execute()
{
	this->_recv->action();
}