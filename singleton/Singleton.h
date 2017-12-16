//Singleton.h
#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
using namespace std;

/*
//implement 1
class Singleton
{
public:
	static Singleton* Instance();
protected:
	Singleton();
private:
	static Singleton* _instance;
};
*/

//implement 2
template <class T>
class Singleton
{
public:
	static T& instance()
    {
        static T inst;
	    return inst;
    }   
protected:
	Singleton();
};

#endif //~_SINGLETON_H_