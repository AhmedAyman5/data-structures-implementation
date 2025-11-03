#include "Stack.h"
#include "Node.h"
#include <stdexcept>
using namespace std;

//Constructor
Stack::Stack()
{
	this->top = nullptr;
	this->length = 0;
}

//Functions:
//1
void Stack::push(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = this->top;
	this->top = newNode;

	this->increaseLength();
}

//2
bool Stack::isEmpty()
{
	return this->top == nullptr;
}

//3
void Stack::pop()
{
	if (this->isEmpty())
		return;

	Node* temp = this->top;
	this->top = this->top->next;
	delete temp;

	this->decreaseLength();
}

//4
int Stack::peek()
{
	if (this->isEmpty())
	{
		throw std::runtime_error("Stack is empty, cannot get top");
	}
	else
	{
		return (this->top->data);
	}
}

//5
int Stack::numberOfElements()
{
	return (this->length);
}

//Private functions:
void Stack::increaseLength()
{
	this->length++;
}
void Stack::decreaseLength()
{
	this->length--;
}

//Destructor
Stack::~Stack()
{
	while (!this->isEmpty())
	{
		this->pop();
	}
}