//main.cpp
#include "Originator.h"
#include "Memento.h"
#include "Caretaker.h"
#include <iostream>
using namespace std;

int main()
{
    Originator* o = new Originator("Old");//original state "Old"
    o->show();
    Caretaker* pTaker = new Caretaker();
    pTaker->setMemento(o->createMemento());
    o->setState("New");
    o->show();
    o->restoreToMemento(pTaker->getMemento());
    o->show();

    delete pTaker;
    delete o;
    return 0;
}