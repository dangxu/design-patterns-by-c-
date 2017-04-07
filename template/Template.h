#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

class TemplateClass
{
public:
	virtual ~TemplateClass();
	//algorithm interface
	void algrithmInterface();
protected:
	TemplateClass();
	//algorithm details
	virtual void algrithmOperation1() = 0;
	virtual void algrithmOperation2() = 0;
private:
};

class ConcreteTemplateA : public TemplateClass
{
public:
	ConcreteTemplateA();
	~ConcreteTemplateA();
protected:
	// algorithm implement details
	void algrithmOperation1();
	void algrithmOperation2();
private:
};

class ConcreteTemplateB : public TemplateClass
{
public:
	ConcreteTemplateB();
	~ConcreteTemplateB();
protected:
	// algorithm implement details
	void algrithmOperation1();
	void algrithmOperation2();
private:
};

#endif