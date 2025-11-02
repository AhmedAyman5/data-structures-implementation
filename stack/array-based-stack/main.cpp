#include<iostream>
#include <stdexcept>
#include "Stack.h";

using namespace std;

int main()
{
	//Test

	Stack stack(5);

	/*
	try{
		cout << stack.peek() << '\n';
	}
	catch(const exception& e){
		cout << e.what() << '\n';
	}
	*/

	stack.push(8);
	stack.push(76);
	stack.push(17);
	stack.push(63);
	stack.push(100);

	while (stack.numberOfElements())
	{
		cout << stack.peek() << '\n';
		stack.pop();
	}

	return 0;
}