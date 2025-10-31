//Interface file:

#pragma once
#include "Node.h"

class SinglyLinkedList
{
public:
	//Constructor
	SinglyLinkedList();
	//Destructor
	~SinglyLinkedList();

	//Functions:
	bool isEmpty();
	void insertAtBeginning(int data);
	int getLength();
	void display();
	void append(int data);
	Node* getLastNode();
	bool find(int data);
	void insertAfter(int after, int data);
	void deleteFromBeginning();
	void deleteLast();


private:
	Node* head;
	int length;
};
