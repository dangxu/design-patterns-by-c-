//main.cpp
#include "Context.h"
#include "interpret.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	Context* c = new Context();
	AbstractExpression* te = new TerminalExpression("hello");
	te->interpret(*c);
	AbstractExpression* nte = new NonterminalExpression(te, 2);
	nte->interpret(*c);
	return 0;
}