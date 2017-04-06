#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Receiver.h"

// switch the command
class Command
{
public:
	virtual ~Command();
	virtual void execute()=0;
protected:
	Command();
private:
};

//detail command
class ConcreteCommand : public Command
{
public:
	ConcreteCommand(Receiver* pReceiver);
	~ConcreteCommand();
	virtual void execute();
protected:
private:
	Receiver* _recv;// which to act the command
};

template <class Receiver>
class SimpleCommand:public Command
{
public:
	typedef void (Receiver::* action)();

	SimpleCommand(Receiver* rev,action act)
	{
		_rev=rev;
		_act= act;
	}

	virtual void execute()
	{
		(_rev->*_act)();
	}

	~SimpleCommand()
	{
		delete _rev;
	}
protected:
private:
	Receiver* _rev;
	action _act;
};

#endif