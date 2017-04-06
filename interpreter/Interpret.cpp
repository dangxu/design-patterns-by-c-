//interpret.cpp
#include "interpret.h"
#include <iostream>
using namespace std;

AbstractExpression::AbstractExpression()
{
}

AbstractExpression::~AbstractExpression()
{
}

void AbstractExpression::interpret(const Context& c)
{
}

//
TerminalExpression::TerminalExpression(const string& statement)
{
	this->_statement = statement;
}

TerminalExpression::~TerminalExpression()
{
}

void TerminalExpression::interpret(const Context& c)
{
	cout<<this->_statement<<" TerminalExpression"<<endl;
}

//
NonterminalExpression::NonterminalExpression(AbstractExpression* expression,int times)
{
	this->_expression = expression;
	this->_times = times;
}

NonterminalExpression::~NonterminalExpression()
{
}

void NonterminalExpression::interpret(const Context& c)
{
	for (int i = 0; i < _times ; i++)
	{
		this->_expression->interpret(c);
	}
}