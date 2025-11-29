#include<iostream>
using namespace std;
#include "Tree.h"

int main()
{
	//Test

	Tree tree;

	tree.add(50);
	tree.add(30);
	tree.add(70);
	tree.add(25);
	tree.add(40);
	tree.add(60);
	tree.add(80);
	tree.add(23);
	tree.add(26);
	tree.add(35);
	tree.add(45);

	tree.traverse();

	return 0;
}