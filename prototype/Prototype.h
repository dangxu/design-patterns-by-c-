#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

class Prototype
{
protected:
    Prototype();
public:
    virtual Prototype* Clone() const=0;
    virtual ~Prototype();
};


class ConcretePrototype1:public Prototype
{
public:
    ConcretePrototype1();
    ~ConcretePrototype1();
    ConcretePrototype1(const ConcretePrototype1&);
    virtual Prototype* Clone() const;
};

class ConcretePrototype2:public Prototype
{
public:
    ConcretePrototype2();
    ~ConcretePrototype2();
    ConcretePrototype2(const ConcretePrototype2&);
    virtual Prototype* Clone() const;
};

#endif