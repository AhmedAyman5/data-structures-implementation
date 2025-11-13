#pragma once
class CircularQueue
{
public:
	CircularQueue(int size);
	~CircularQueue();

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

