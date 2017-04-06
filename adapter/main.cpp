#include "Adapter.h"
#include "Adapter2.h"
#include "Adaptee.h"
#include <iostream>

int main(int argc, char **argv)
{
	//Inheritance Implement
	Adapter *adp = new Adapter();
	adp->request();
	delete adp;

    //Composition Implement
	Adaptee *adpe = new Adaptee();
	Adapter2 *adpt = new Adapter2(adpe);
	adpt->request();
	delete adpe;
	delete adpt;
	return 0;
}