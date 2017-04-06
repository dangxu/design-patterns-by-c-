//main.cpp
#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	State* st = NULL;//state details
	Context* con = NULL;//record current state
	st = new ConcreteStateA();
	con = new Context(st);//current state is StateA
	con->OprationInterface();//operation of StateA
	con->OperationChangState();//then change to another state, here to state StateB
	con->OprationInterface();//operation of StateB
	delete st;
    delete con;

    st = new ConcreteStateB();
	con = new Context(st);//current state is StateB
	con->OprationInterface();//operation of StateB
	con->OperationChangState();//then change to another state, here to state StateA
	con->OprationInterface();//operation of StateA
	delete st;
	delete con;
	return 0;
}