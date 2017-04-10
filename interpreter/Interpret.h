//interpret.h
#ifndef _interpret_H_
#define _interpret_H_
#include "Context.h"
#include <string>
using namespace std;

class Interpreter
{
public:
	virtual ~Interpreter();
	virtual void interpret(const Context& c);
protected:
	Interpreter();
private:
};

class TerminalInterpreter : public Interpreter
{
public:
	TerminalInterpreter(const string& statement);
	~TerminalInterpreter();
	void interpret(const Context& c);
protected:
private:
	string _statement;
};

class NoTerminalInterpreter : public Interpreter
{
public:
	NoTerminalInterpreter(Interpreter* expression, int times);
	~NoTerminalInterpreter();
	void interpret(const Context& c);
protected:
private:
	Interpreter* _interpreter;
	int _times;
};

#endif //~_interpret_H_