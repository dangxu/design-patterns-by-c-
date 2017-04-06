#include "Adapter.h"
#include "Adapter2.h"
#include "Adaptee.h"
#include <iostream>

int main(int argc, char **argv)
{
	//Inheritance Adapter Implement
	Adapter *adp = new Adapter();
	adp->request();
	delete adp;

        //Composition Adapter Implement
	Adaptee *adpe = new Adaptee();
	Adapter2 *adpt = new Adapter2(adpe);
	adpt->request();
	delete adpe;
	delete adpt;
	return 0;
}