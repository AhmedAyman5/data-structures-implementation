//Implementation file:

#include "SinglyLinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;

//Constructor
SinglyLinkedList::SinglyLinkedList()
{
	this->head = nullptr;
	this->length = 0;
}

//Functions:

//1
//is empty?
bool SinglyLinkedList::isEmpty()
{
	return (this->head == nullptr);
}

//2
//insert element at beginning
void SinglyLinkedList::insertAtBeginning(int data)
{
	Node* newNode = new Node();
	newNode->data = data; // == (*newNode).data = data;

	if (isEmpty())
	{
		this->head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = this->head;
		this->head = newNode;
	}
	length++;
}

//3
//obtain Linkedlist length:
int SinglyLinkedList::getLength()
{
	return this->length;
}

//4
//Display Linkedlist element in visual way
void SinglyLinkedList::display()
{
	if (this->isEmpty())
	{
		cout << "Linkedlist is empty\n";
	}
	else
	{
		Node* currentNode = this->head;
		while (currentNode != nullptr)
		{
			cout << currentNode->data << " -> ";
			currentNode = currentNode->next;
		}
		cout << "null\n";
	}
}

//5
//add to the end:
void SinglyLinkedList::append(int data)
{
	if (this->isEmpty())
	{
		this->insertAtBeginning(data);
		return;
	}

	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;

	Node* lastNode = this->getLastNode();
	lastNode->next = newNode;
	length++;
}

//6
//get last Node
Node* SinglyLinkedList::getLastNode()
{
	Node* currentNode = this->head;
	while (currentNode->next != nullptr)
	{
		currentNode = currentNode->next;
	}
	Node* lastNode = currentNode;

	return lastNode;
}

//7
//found and return bool:
bool SinglyLinkedList::find(int data)
{
	if (this->isEmpty())
	{
		return false;
	}

	Node* currentNode = this->head;
	while (currentNode != nullptr)
	{
		if (currentNode->data == data)
		{
			return true;
		}
		currentNode = currentNode->next;
	}

	return false;
}

//8
//insert after spcefic item
void SinglyLinkedList::insertAfter(int after, int data)
{
	Node* currentNode = this->head;
	while (currentNode != nullptr)
	{
		if (currentNode->data == after)
		{
			Node* newNode = new Node();
			newNode->data = data;
			newNode->next = currentNode->next;
			currentNode->next = newNode;
			length++;
			return;
		}
		currentNode = currentNode->next;
	}
	cout << "Item not found\n";
}

//9
//Delete first element:
void SinglyLinkedList::deleteFromBeginning()
{
	if (!this->isEmpty())
	{
		Node* firstElement = this->head;
		this->head = firstElement->next;
		delete firstElement;
		this->length--;
	}
}

//10
//Delete last element
void SinglyLinkedList::deleteLast()
{
	if (this->length == 1)
	{
		deleteFromBeginning();
	}
	if (!this->isEmpty())
	{
		Node* currentNode = this->head;
		while (currentNode->next->next != nullptr)
		{
			currentNode = currentNode->next;
		}
		Node* lastNode = currentNode->next;
		currentNode->next = nullptr;
		delete lastNode;
		this->length--;
	}
}

//////////////////////////////////////////////////////////////

//Destructor
SinglyLinkedList::~SinglyLinkedList()
{
	Node* currentNode = this->head;
	Node* temp = currentNode;
	while (currentNode != nullptr)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		delete temp;
	}
}