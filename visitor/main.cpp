#include <iostream>
#include "Element.h"
#include "Visitor.h"
#include "ObjectStructure.h"

using namespace std;

int main(int argc,char* argv[])
{
	Employees *e = new Employees();
	e->Attach( new Employee( "Tom", 25000.0, 14 ) );
	e->Attach( new Employee( "Thomas", 35000.0, 16 ) );
	e->Attach( new Employee( "Roy", 45000.0, 21 ) );

	// Create two visitors
	IncomeVisitor *v1 = new IncomeVisitor();
	VacationVisitor *v2 = new VacationVisitor();

	// Employees are visited
	e->Accept( v1 );
	e->Accept( v2 );
	return 0;
}