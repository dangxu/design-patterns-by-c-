#include "Originator.h"
#include "Memento.h"
#include <iostream>

Originator::Originator()
{}

Originator::Originator(const string& state)
{
	this->_state = state;
}

Originator::~Originator()
{}

void Originator::restoreToMemento(Memento* pMemento)
{
	this->_state = pMemento->GetState();
}

Memento* Originator::createMemento()
{
	return new Memento(this->_state);
}

void Originator::setState(const string& state)
{
	this->_state = state;
}

string Originator::getState()
{
	return this->_state;
}

void Originator::show()
{
	cout << this->_state << endl;
}