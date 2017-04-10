//main.cpp
#include "Context.h"
#include "interpret.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	Context* c = new Context();
	Interpreter* it = new TerminalInterpreter("hello");
	it->interpret(*c);
	Interpreter* nit = new NoTerminalInterpreter(it, 2);
	nit->interpret(*c);
	delete c;
	delete it;
	delete nit;
	return 0;
}