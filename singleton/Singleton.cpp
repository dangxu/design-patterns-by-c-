//Singleton.cpp
#include "Singleton.h"
#include <iostream>
using namespace std;
//Singleton* Singleton::_instance = 0;

template<class T>
Singleton<T>::Singleton()
{
}

/*
//implement 1
Singleton* Singleton::Instance()
{
	if (_instance == 0)
	{
		_instance = new Singleton();
	}
	return _instance;
}
*/