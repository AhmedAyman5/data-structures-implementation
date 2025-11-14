#pragma once
#include "Node.h"
class Queue
{
public:
	Queue();
	~Queue();

	//Functions:
	void Enqueue(int data);
	void Dequeue();
	bool isEmpty();
	int Front();
	void Display();
	int getLength();
	void clear();

private:
	Node* front;
	Node* rear;
};

