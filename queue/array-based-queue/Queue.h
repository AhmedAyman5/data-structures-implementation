#pragma once
class Queue
{
public:
	Queue(int size);
	~Queue();

	//Functions:
	void Enqueue(int data);
	void Dequeue();
	bool isEmpty();
	bool isFull();
	int Front();
	int getLength();

private:
	int* arr;
	int size, front, rear;
};