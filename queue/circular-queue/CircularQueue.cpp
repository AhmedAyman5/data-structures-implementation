#include "CircularQueue.h"
#include <stdexcept>
#include <cmath>

CircularQueue::CircularQueue(int size)
{
	this->arr = new int[size];
	this->size = size;
	this->front = -1;
	this->rear = -1;
}

//Functions:

//1
void CircularQueue::Enqueue(int data)
{
	if (this->isFull())
		return;
	else if (this->isEmpty())
		this->front = 0;

	this->rear = (this->rear + 1) % this->size;
	this->arr[this->rear] = data;
}

//2
bool CircularQueue::isEmpty()
{
	return (this->rear == -1);
}

//3
bool CircularQueue::isFull()
{
	return ( ((this->rear + 1) % this->size) == this->front);
}

//4
void CircularQueue::Dequeue()
{
	if (this->isEmpty())
		return;
	else if (this->front == this->rear)
		this->front = this->rear = -1;
	else
		this->front = (this->front + 1) % this->size;
}

//5
int CircularQueue::Front()
{
	if (this->isEmpty())
		throw std::runtime_error("Queue is empty, cannot get Front");

	return (this->arr[this->front]);
}

//6
int CircularQueue::getLength()
{
	if (this->isEmpty())
		return 0;
	else if (this->front > this->rear)
		return ((this->size - this->front) + (this->rear + 1));
	else
		return (this->rear - this->front + 1);
}

CircularQueue::~CircularQueue()
{
	delete[] this->arr;
}
