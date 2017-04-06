#include "Composite.h"
#include "Leaf.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	//root
    Composite* pRoot = new Composite();
    // first child of root
    pRoot->add(new Leaf());

    Leaf* pLeaf1 = new Leaf();
    Leaf* pLeaf2 = new Leaf();
    // second child of root
    Composite* pCom = new Composite();
    pCom->add(pLeaf1);
    pCom->add(pLeaf2);
    pRoot->add(pCom);

	// recursive call all sub-nod's operation
    pRoot->operation();
	delete pRoot;
    return 0;
}