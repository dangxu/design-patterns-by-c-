//interpret.cpp
#include "interpret.h"
#include <iostream>
using namespace std;

Interpreter::Interpreter()
{
}

Interpreter::~Interpreter()
{
}

void Interpreter::interpret(const Context& c)
{
}

//
TerminalInterpreter::TerminalInterpreter(const string& statement)
{
	this->_statement = statement;
}

TerminalInterpreter::~TerminalInterpreter()
{
}

void TerminalInterpreter::interpret(const Context& c)
{
	cout<<this->_statement<<" TerminalExpression"<<endl;
}

//
NoTerminalInterpreter::NoTerminalInterpreter(Interpreter* expression,int times)
{
	this->_interpreter = expression;
	this->_times = times;
}

NoTerminalInterpreter::~NoTerminalInterpreter()
{
}

void NoTerminalInterpreter::interpret(const Context& c)
{
	for (int i = 0; i < _times ; i++)
	{
		this->_interpreter->interpret(c);
	}
}