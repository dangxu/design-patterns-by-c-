#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main(int argc, char **argv)
{
	Component *cmp = new ConcreteComponent();
	Decorator *dec = new ConcreteDecorator(cmp);
	dec->operation();
	delete cmp;
	delete dec;
	return 0;
}