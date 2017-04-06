//Visitor.h
#ifndef _VISITOR_H_
#define _VISITOR_H_
#include <iostream>


using namespace std;
class Element;

// Friend of Element
class Visitor
{
public:
	virtual void Visit( Element *element ){};
};

class IncomeVisitor : public Visitor
{
public:
	virtual void Visit( Element *element );
};

class VacationVisitor : public Visitor
{
public:
	virtual void Visit( Element *element );
};

#endif //~_VISITOR_H_