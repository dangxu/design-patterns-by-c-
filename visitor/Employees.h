#ifndef __EMPLOYEES_H__
#define __EMPLOYEES_H__
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

    ~Employees()
    {
        std::list<Employee*>::iterator it = employees.begin();
        for (; it != employees.end(); ++it)
        {
            if(!*it)
            {
                delete *it;
                *it = 0;
            }
        }
    }

    void attach( Employee *employee )
    {
        employees.push_back(employee);
    }

    void Detach( Employee *employee )
    {
        employees.remove(employee);
    }

    void accept( Visitor *visitor )
    {
        std::list<Employee*>::iterator it = employees.begin();
        for (; it != employees.end(); ++it)
            (*it)->accept(visitor);
    }
};

#endif //~__OBJECTSTRUCTURE_H__