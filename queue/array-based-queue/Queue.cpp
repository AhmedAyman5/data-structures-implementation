#include "Queue.h"
#include <stdexcept>

Queue::Queue(int size)
{
	this->arr = new int[size];
	this->size = size;
	this->front = -1;
	this->rear = -1;
}

//Functions:

//1
void Queue::Enqueue(int data)
{
	if (this->isFull())
		return;
	else if (this->isEmpty())
		this->front = 0;

	this->rear++;
	this->arr[this->rear] = data;
}

//2
bool Queue::isEmpty()
{
	return (this->rear == -1 || this->front > this->rear);
}

//3
bool Queue::isFull()
{
	return (this->rear == (this->size - 1));
}

//4
void Queue::Dequeue()
{
	if (this->isEmpty())
		return;
	else if (this->front == this->rear)
		this->front = this->rear = -1;
	else
		this->front++;
}

//5
int Queue::Front()
{
	if (this->isEmpty())
		throw std::runtime_error("Queue is empty, cannot get Front");

	return (this->arr[this->front]);
}

//6
int Queue::getLength()
{
	if (this->isEmpty())
		return 0;
	else
		return (this->rear - this->front + 1);
}

Queue::~Queue()
{
	delete[] this->arr;
}