#include "Observer.h"
#include "Subject.h"
#include <iostream>
using namespace std;

int main()
{
	Observer* p1 = new ConcreteObserverA();
	Observer* p2 = new ConcreteObserverB();
	Observer* p3 = new ConcreteObserverA();

	Subject* pSubject = new ConcreteSubject();
	pSubject->attach(p1);
	pSubject->attach(p2);
	pSubject->attach(p3);
	pSubject->setState("old");//update subject
	pSubject->notify();//synchronize with subject's observer
	pSubject->setState("new");//update subject
	pSubject->notify();//synchronize with subject's observer
	pSubject->setState("hello");//update subject
	pSubject->detach(p3);//remove a observer
	pSubject->notify();//synchronize with subject's observer
	return 0;
}