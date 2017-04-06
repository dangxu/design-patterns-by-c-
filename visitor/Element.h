//Element.h
#ifndef _ELEMENT_H_
#define _ELEMENT_H_
#include <string>

using namespace std;
class Visitor;

// Element of ObjectStructure
class Element
{
public:
	virtual void Accept( Visitor *visitor ){};
};

class Employee : public Element
{
public:
 	Employee( string name, double income, int vacationDays );
 	void Accept( Visitor *visitor );
private:
	friend class IncomeVisitor;// let Visitor to be my friend
	friend class VacationVisitor;// let Visitor to be my friend
	string name;
	double income;
	int vacationDays;
};

#endif