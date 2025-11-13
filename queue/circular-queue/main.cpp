#include<iostream>
#include <stdexcept>
#include "CircularQueue.h"
using namespace std;

int main()
{

	//Test

	CircularQueue queue(5);

	/*
	try
	{
		cout << queue.Front() << '\n';
	}
	catch(const exception& e)
	{
		cout << e.what() << '\n';
	}
	*/

	queue.Enqueue(3);
	queue.Enqueue(5);
	queue.Enqueue(7);

	while (queue.getLength())
	{
		cout << queue.Front() << '\n';
		queue.Dequeue();
	}

	queue.Enqueue(10);
	queue.Enqueue(12);
	queue.Enqueue(88);

	queue.Dequeue(); //10
	queue.Dequeue(); //12

	queue.Enqueue(57);
	queue.Enqueue(100);

	while (queue.getLength())
	{
		cout << queue.Front() << '\n';
		queue.Dequeue();
	}

	return 0;
}