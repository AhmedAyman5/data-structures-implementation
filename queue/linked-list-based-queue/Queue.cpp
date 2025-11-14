#include "Queue.h"
#include "Node.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Queue::Queue()
{
	this->front = this->rear = nullptr;
}

//Functions:

//1
void Queue::Enqueue(int data)
{
	Node* newNode = new Node();
	newNode->data = data;

	if (this->isEmpty())
	{
		this->front = this->rear = newNode;
		newNode->next = nullptr;
	}
	else
	{
		this->rear->next = newNode;
		newNode->next = nullptr;
		this->rear = newNode;
	}
}

//2
bool Queue::isEmpty()
{
	return (this->front == nullptr);
}

//3
void Queue::Dequeue()
{
	if (this->isEmpty())
		return;

	Node* delNode = this->front;

	if(this->front == this->rear)
	{
		this->front = this->rear = nullptr;
	}
	else
	{
		this->front = this->front->next;
	}

	delete delNode;
}

//4
int Queue::Front()
{
	if (this->isEmpty())
	{
		throw std::runtime_error("Queue is empty!!!!!!!!!");
	}
	else
	{
		return (this->front->data);
	}
}

//
void Queue::Display()
{
	if (this->isEmpty())
	{
		cout << "Queue is empty\n";
	}
	else
	{
		Node* currentNode = this->front;
		while (currentNode != nullptr)
		{
			cout << currentNode->data << '\n';
			currentNode = currentNode->next;
		}
	}
}

//6
int Queue::getLength()
{
	int count = 0;
	if (this->isEmpty())
	{
		count = 0;
	}
	else
	{
		Node* currentNode = this->front;
		while (currentNode != nullptr)
		{
			count++;
			currentNode = currentNode->next;
		}
	}
	return count;
}

//7
void Queue::clear()
{
	while (!this->isEmpty())
	{
		this->Dequeue();
	}
}

Queue::~Queue()
{
	this->clear();
}
