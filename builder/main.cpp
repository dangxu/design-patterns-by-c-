//main.cpp
#include "Builder.h"
#include "Director.h"
#include <iostream>
using namespace std;

int main (int argc, const char * argv[])
{
    Builder *b = new ConcreteBuilder();
    Director *d = new Director(b);
    d->Construct();
    d->GetProduct();
    delete d;
    delete b;
    return 0;
}