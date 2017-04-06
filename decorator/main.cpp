#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main(int argc, char **argv)
{
	Component *cmp = new ConcreteComponent();//original function
	cmp->operation();
	Decorator *dec = new ConcreteDecorator(cmp);//add new function to object *cmp
	dec->operation();
	delete cmp;
	delete dec;
	return 0;
}