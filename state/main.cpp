//main.cpp
#include "StateMachine.h"
#include "State.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	State* st = NULL;
	StateMachine* sm = NULL;
	st = new ConcreteStateA();
	sm = new StateMachine(st);
	sm->opration();//operation of StateA
	sm->changState();//then change to another state, here to state StateB
	sm->opration();//operation of StateB
	delete sm;

    st = new ConcreteStateB();
	sm = new StateMachine(st);
	sm->opration();//operation of StateB
	sm->changState();//then change to another state, here to state StateA
	sm->opration();//operation of StateA
	delete sm;
	return 0;
}