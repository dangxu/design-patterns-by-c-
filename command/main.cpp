#include "Command.h"
#include "Invoker.h"

int main()
{

	Receiver* pRev = new Receiver();//who to act the command
	Command* pCmd = new ConcreteCommand(pRev);//which command to be act
	Invoker* pInv = new Invoker(pCmd);//who sent the command
	pInv->invoke();// sent the command

	delete pRev;
	delete pCmd;
	delete pInv;

	Receiver* rev = new Receiver();
	Command* cmd = new SimpleCommand<Receiver>(rev,&Receiver::action);
	cmd->execute();
    delete rev;
	delete rev;
	return 0;
}