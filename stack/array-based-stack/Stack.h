#pragma once
class Stack
{
public:
	//Constructor
	Stack(int size);
	//Destructor
	~Stack();

	//functions:
	void push(int data);
	bool isFull();
	//i will make pop() and peek() not just pop() cause achive(Single Responsibility Principle)
	void pop();
	bool isEmpty();
	int peek();
	int numberOfElements();

private:
	int* arr;
	int size, top;
};
