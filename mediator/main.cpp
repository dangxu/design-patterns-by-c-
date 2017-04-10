//main.cpp
#include "Mediator.h"
#include "Colleage.h"

int main()
{
    ConcreteMediator* pMediator = new ConcreteMediator();//communicator
    Colleage* pa = new ConcreteColleageA(pMediator);//talker A use communicator to send info
    Colleage* pb = new ConcreteColleageB(pMediator);//talker B use communicator to send info
    pMediator->setColleageA(pa);//register talker A to communicator
    pMediator->setColleageB(pb);//register talker B to communicator
    pa->sendMsg("aaa");
    pb->sendMsg("bbb");
    delete pMediator;
    delete pa;
    delete pb;
    return 0;
}