//main.cpp
#include "Singleton.h"
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
	Singleton<int>::instance();
	Singleton<char>::instance();
	return 0;
}