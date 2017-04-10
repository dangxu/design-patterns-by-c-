#include <iostream>
#include "Element.h"
#include "Visitor.h"
#include "Employees.h"

using namespace std;

int main(int argc, char* argv[])
{
    Employees *e = new Employees();
    e->attach( new Employee( "Tom", 25000.0, 14 ) );
    e->attach( new Employee( "Thomas", 35000.0, 16 ) );
    e->attach( new Employee( "Roy", 45000.0, 21 ) );

    // Create two visitors
    IncomeVisitor *v1 = new IncomeVisitor();
    VacationVisitor *v2 = new VacationVisitor();

    // Employees are visited
    e->accept( v1 );
    e->accept( v2 );

    delete e;
    delete v1;
    delete v2;
    return 0;
}