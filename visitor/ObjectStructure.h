#ifndef __OBJECTSTRUCTURE_H__
#define __OBJECTSTRUCTURE_H__
#include <list>
#include "Visitor.h"
#include "Element.h"

using namespace std;

// Composite by Element
class Employees
{	
private :
	list< Employee*> employees;

public :

	void Attach( Employee *employee )
	{		
		employees.push_back(employee);		
	}

	void Detach( Employee *employee )
	{
		employees.remove(employee);		
	}

	void Accept( Visitor *visitor )
	{
		std::list<Employee*>::iterator it=employees.begin();
		for (; it != employees.end(); ++it)
			(*it)->Accept(visitor);
	}
};

#endif //~__OBJECTSTRUCTURE_H__