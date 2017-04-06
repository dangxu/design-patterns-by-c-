//interpret.h
#ifndef _interpret_H_
#define _interpret_H_
#include "Context.h"
#include <string>
using namespace std;

class AbstractExpression
{
public:
	virtual ~AbstractExpression();
	virtual void interpret(const Context& c);
protected:
	AbstractExpression();
private:
};

class TerminalExpression:public AbstractExpression
{
public:
	TerminalExpression(const string& statement);
	~ TerminalExpression();
	void interpret(const Context& c);
protected:
private:
	string _statement;
};

class NonterminalExpression:public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression* expression, int times);
	~ NonterminalExpression();
	void interpret(const Context& c);
protected:
private:
	AbstractExpression* _expression;
	int _times;
};

#endif //~_interpret_H_