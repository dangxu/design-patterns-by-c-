//Memento.cpp
#include "Memento.h"
#include <iostream>

Memento::Memento(const string& state)
{
	this->_state = state;
}

Memento::~Memento()
{}

string Memento::GetState()
{
	return this->_state;
}

void Memento::SetState(const string& state)
{
	this->_state = state;
}