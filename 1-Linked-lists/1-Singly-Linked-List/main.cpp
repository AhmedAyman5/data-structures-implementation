#include<iostream>
#include <algorithm>

#include "SinglyLinkedList.h"
using namespace std;

int main()
{
	//test:

	SinglyLinkedList list1;

	//cout << list1.isEmpty() << '\n';
	//cout << list1.getLength() << '\n';
	//list1.display();

	list1.insertAtBeginning(5);
	list1.insertAtBeginning(8);
	list1.insertAtBeginning(10);
	list1.insertAtBeginning(3);

	//cout << list1.isEmpty() << '\n';
	//cout << list1.getLength() << '\n';
	list1.display();


	list1.append(1);
	list1.append(25);
	list1.append(30);
	list1.append(70);

	//cout << list1.isEmpty() << '\n';
	//cout << list1.getLength() << '\n';
	list1.display();

	//cout << (list1.find(99) ? "Found" : "Not found") << '\n';
	//cout << (list1.find(10) ? "Found" : "Not found") << '\n';
	//cout << (list1.find(5) ? "Found" : "Not found") << '\n';

	list1.insertAfter(10, 11);
	list1.display();

	//list1.deleteFromBeginning();
	list1.deleteFromBeginning();
	list1.display();

	list1.deleteLast();
	list1.deleteLast();
	list1.display();

	return 0;
}