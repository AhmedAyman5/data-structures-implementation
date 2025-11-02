#include "Stack.h"
#include <iostream>
using namespace std;

//Constructor
Stack::Stack(int size)
{
	this->arr = new int[size];
	this->size = size;
	this->top = -1;
}

//functions:
//1
void Stack::push(int data)
{
	if (this->isFull())
	{
		cout << "Stack overflow!";
		return;
	}
	top++;
	arr[top] = data;
}

//2
bool Stack::isFull()
{
	return (this->top == size - 1);
}

//i will make pop() and peek() not just pop() cause achive(Single Responsibility Principle)
//3
void Stack::pop()
{
	if (this->isEmpty())
		return;

	this->top--;
}

//4
bool Stack::isEmpty()
{
	return (top == -1);
}

//5
int Stack::peek()
{
	if (this->isEmpty())
		throw std::runtime_error("Stack is empty, cannot get top");

	return this->arr[top];
}

//6
int Stack::numberOfElements()
{
	return (this->top + 1);
}

//Destructor
Stack::~Stack()
{
	delete[] this->arr;
}