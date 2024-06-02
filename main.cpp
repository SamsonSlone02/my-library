#include <iostream>
#include "stack.h"
#include "linkedList.h"
using namespace std;


int main()
{	
	Stack myStack(20);
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

	cout << "-----------" << endl;
	LinkedList<int> myList;
	myList.push(1);
	myList.push(2);
	myList.push(3);
	myList.push(4);
	myList.push(5);
	myList.push(6);
	myList.printList();
	return 0;
}
