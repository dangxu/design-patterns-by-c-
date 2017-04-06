#include "Visitor.h"
#include "Element.h"

void IncomeVisitor::Visit( Element *element )
{
	Employee *employee = ((Employee*)element);
	employee->income *= 1.10;
	cout<<employee->name<<" 's new income: " <<employee->income<<endl;
}

void VacationVisitor::Visit( Element *element )
{
	Employee *employee = ((Employee*)element);
	employee->vacationDays += 3;		
	cout<<employee->name<<" 's new vacation days: " <<employee->income<<endl;
}