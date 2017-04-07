#include "Template.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	TemplateClass* p1 = new ConcreteTemplateA();
	p1->algrithmInterface();
	delete p1;

	TemplateClass* p2 = new ConcreteTemplateB();
	p2->algrithmInterface();
	delete p2;
	return 0;
}