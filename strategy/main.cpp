#include "Context.h"
#include "Strategy.h"
#include <iostream>
using namespace std;

//Strategy=Template+Bridge

int main(int argc, char* argv[])
{
    Strategy* ps = NULL;
    Context* pc =NULL;
    
    ps = new ConcreteStrategyA();//Template
    pc = new Context(ps);//Bridge
    pc->doAction();
    delete ps;
    delete pc;
    
    ps = new ConcreteStrategyB();
    pc = new Context(ps);
	pc->doAction();
    delete ps;
    delete pc;
    return 0;
}