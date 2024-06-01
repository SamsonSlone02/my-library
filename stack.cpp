#include <iostream>
#include "stack.h"
using namespace std;
Stack::Stack(int inputCapacity)
{
	capacity = inputCapacity;
	data = new int[capacity];
	topIndex = 0;


}
Stack::~Stack()
{
	delete[] data;
}

int Stack::getCapacity()
{
	return capacity;
}
int Stack::getSize()
{

	return topIndex;
}
bool Stack::isFull()
{
	if(topIndex == capacity)
	{
		return true;
	}
	return false;
}
bool Stack::isEmpty()
{
	if(topIndex == 0)
	{
		return true;
	}
	return false;

}
bool Stack::push(int input)
{
	if(!isFull())
	{
		data[topIndex] = input;
		topIndex++;
		return true;
	}
	else return false;
}
bool Stack::pop()
{
	if(!isEmpty())
	{
		data[topIndex] = 0;
		topIndex--;
		return true;
	}
	else return false;
}

int Stack::getTop()
{
	return data[topIndex - 1];


}
void Stack::printStack()
{
	if(!isEmpty())
	{
		for(int i = 0; i < getSize();i++)
		{
			cout << data[i] << ", ";
		}
		cout << endl;
	}
};
