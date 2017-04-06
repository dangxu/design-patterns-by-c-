//Singleton.cpp
#include "Singleton.h"
#include <iostream>
using namespace std;
//Singleton* Singleton::_instance = 0;

Singleton::Singleton()
{
	cout<<"Singleton...."<<endl;
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
//implement 2
Singleton* Singleton::Instance()
{
	static Singleton instance = Singleton();
	return &instance;
}