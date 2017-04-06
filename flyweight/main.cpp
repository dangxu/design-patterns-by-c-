//main.cpp
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	FlyweightFactory* fc = new FlyweightFactory();
	Flyweight* fly = fc->GetFlyweight("hello");//inner state hello
	Flyweight* fly1 = fc->GetFlyweight("hello");
	fly->Operation("world");//out state world
	fly1->Operation("dennis");//out state dennis
	fc->GetFlyweightCount();//inner state just one object
	delete fc;
	return 0;
}