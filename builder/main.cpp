//main.cpp
#include "Builder.h"
#include "Director.h"
#include <iostream>
using namespace std;

int main (int argc, const char * argv[])
{

    Director* d = new Director(new ConcreteBuilder());
    d->Construct();
    return 0;
}