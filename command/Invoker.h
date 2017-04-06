#ifndef _Invoker_H_
#define _Invoker_H_

#include "Command.h"

// sent the command
class Invoker
{
public:
	Invoker(Command* pCommand);
	~Invoker();
	void invoke();
protected:
private:
	Command* _cmd;// which command to be sent
};

#endif