#include "Prototype.h"
#include <iostream>
using namespace std;

int main()
{
    Prototype* p1 = new ConcretePrototype1();
    Prototype* p2 = p1->Clone();
    Prototype* p3 = new ConcretePrototype2();
    Prototype* p4 = p3->Clone();
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}