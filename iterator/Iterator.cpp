//Iterator.cpp
#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>
using namespace std;

Iterator::Iterator()
{
}

Iterator::~Iterator()
{
}

ConcreteIterator::ConcreteIterator(Aggregate*ag , int idx)
{
	this->_ag = ag;
	this->_idx= idx;
}

ConcreteIterator::~ConcreteIterator()
{
}

Object ConcreteIterator::currentItem()
{
	return _ag->getItem(_idx);
}

void ConcreteIterator::first()
{
	_idx = 0;
}

void ConcreteIterator::next()
{
	if (_idx < _ag->getSize())
		_idx++;
}

bool ConcreteIterator::isDone()
{
	return (_idx == _ag->getSize());
}