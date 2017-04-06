#include "Abstraction.h"
#include "AbstractionImpl.h"

int main(int argc, char **argv)
{
	AbstractionImpl *impl = new ConcreteAbstractionImplA();
	Abstraction *abs = new RefindedAbstraction(impl);
	abs->operation();
	delete impl;
	delete abs;

	impl = new ConcreteBbstractionImplB();
	abs = new RefindedAbstraction(impl);
	abs->operation();
	delete impl;
	delete abs;
	return 0;
}