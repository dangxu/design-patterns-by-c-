//State.cpp
#include "State.h"
#include "StateMachine.h"
#include <iostream>
using namespace std;

State::State()
{
}

State::~State()
{
}

void State::operation(StateMachine* sm)
{
}

void State::changeState(StateMachine* sm)
{
}

bool State::changeState(StateMachine* sm, State* st)
{
	sm->changeState(st);
	return true;
}

ConcreteStateA::ConcreteStateA()
{
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::operation(StateMachine* sm)
{
	cout<<"ConcreteStateA::operation"<<endl;
}

void ConcreteStateA::changeState(StateMachine* sm)
{
	State::changeState(sm, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB()
{
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::operation(StateMachine* sm)
{
	cout<<"ConcreteStateB::operation"<<endl;
}

void ConcreteStateB::changeState(StateMachine* sm)
{
	State::changeState(sm, new ConcreteStateA());
}