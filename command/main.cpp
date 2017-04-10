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
    
    pRev = new Receiver();
    pCmd = new SimpleCommand<Receiver>(pRev, &Receiver::action);
    pInv = new Invoker(pCmd);
    pInv->invoke();
    delete pRev;
    delete pCmd;
    delete pInv;
    return 0;
}