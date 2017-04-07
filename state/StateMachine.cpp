//context.cpp
#include "StateMachine.h"
#include "State.h"

StateMachine::StateMachine() : _state(0)
{
}

StateMachine::StateMachine(State* state)
{
	this->_state = state;
}

StateMachine::~StateMachine()
{
	if(!this->_state)
	{
		delete this->_state;
		this->_state = 0;
	}
}

void StateMachine::opration()
{
	_state->operation(this);
}

void StateMachine::changState()
{
	_state->changeState(this);
}

bool StateMachine::changeState(State* state)
{
	if(!this->_state)
	{
		delete this->_state;
		this->_state = 0;
	}
	this->_state= state;
	return true;
}