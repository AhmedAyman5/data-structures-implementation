#include<iostream>
#include <stdexcept>
#include "Queue.h"

using namespace std;

int main()
{
	//Test

	Queue queue(5);

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
	queue.Enqueue(10);
	queue.Enqueue(12);

	while (queue.getLength())
	{
		cout << queue.Front() << '\n';
		queue.Dequeue();
	}

	return 0;
}
