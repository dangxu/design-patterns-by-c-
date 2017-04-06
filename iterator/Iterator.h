//Iterator.h
#ifndef _ITERATOR_H_
#define _ITERATOR_H_

class Aggregate;
typedef int Object;

class Iterator
{
public:
	virtual ~Iterator();
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool isDone() = 0;
	virtual Object currentItem() = 0;
protected:
	Iterator();
private:
};

class ConcreteIterator:public Iterator
{
public:
	ConcreteIterator(Aggregate* ag , int idx = 0);
	~ConcreteIterator();
	void first();
	void next();
	bool isDone();
	Object currentItem();
protected:
private:
	Aggregate* _ag;
	int _idx;
};

#endif //~_ITERATOR_H_