#pragma once
#include "Node.h"
class Stack
{
public:
	Stack();
	~Stack();

	//Functions:
	void push(int data);
	bool isEmpty();
	void pop();
	int peek();
	int numberOfElements();

private:
	Node* top;
	int length;

	//private functions:
	void increaseLength();
	void decreaseLength();
};

