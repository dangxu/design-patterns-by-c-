#include "FlyweightFactory.h"
#include <iostream>
#include <string>

using namespace std;

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
	if(!_pool.empty()) {
		vector<Flyweight*>::iterator it = _pool.begin();
		for (; it != _pool.end();) {
			delete *it;
			it = _pool.erase(it);
		}
	}
}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
	vector<Flyweight*>::iterator it = _pool.begin();
	for (; it != _pool.end();it++) {
		if ((*it)->GetIntrinsicState() == key) {
			cout<< "\"" << key << "\" already created!"<<endl;
			return *it;
		}
	}
	Flyweight* fn = new ConcreteFlyweight(key);
	_pool.push_back(fn);
	return fn;
}

void FlyweightFactory::GetFlyweightCount()
{
	cout << this->_pool.size() << endl;
}