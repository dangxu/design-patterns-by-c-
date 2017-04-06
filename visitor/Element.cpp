#include "Element.h"
#include "Visitor.h"

Employee::Employee( string name, double income, int vacationDays )
{
	this->name = name;
	this->income = income;
	this->vacationDays = vacationDays;
}

void Employee::Accept( Visitor *visitor )
{
	visitor->Visit(this);
}