#include <iostream>
#include "stack.h"
using namespace std;


int main()
{	
	int input;
	cin >> input;
	Stack myStack(input);
	myStack.push(2);
	myStack.push(3);
	myStack.push(4);
	myStack.push(5);
	myStack.push(8);
	myStack.push(2);
	myStack.push(3);
	myStack.push(5);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	cout << myStack.getSize() << endl;
	myStack.printStack();
	return 0;
}
