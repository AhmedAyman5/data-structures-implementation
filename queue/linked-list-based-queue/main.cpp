#include <iostream>
#include <stdexcept>
#include "Queue.h"
using namespace std;

int main()
{

	//Test
	Queue queue;

	/*
	try
	{
		cout << queue.Front() << '\n';
	}
	catch (const exception& e)
	{
		cout << e.what() << '\n';
	}
	*/

	queue.Enqueue(20);
	queue.Enqueue(76);
	queue.Enqueue(45);
	queue.Enqueue(8);
	queue.Enqueue(89);

	queue.Display();

	cout << "-----\n";

	queue.Dequeue();
	queue.Dequeue();

	queue.Display();

	cout << "-----\n";

	queue.Enqueue(186);
	queue.Enqueue(190);

	cout << "Length: " << queue.getLength() << "\n";

	queue.Display();

	return 0;
}