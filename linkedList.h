#include<iostream>

using namespace std;
template<class T>
class LinkedList
{
	private:

		struct Node
		{
			T data;
			Node * next = NULL;
		};

		Node * head;
	public:
		LinkedList()
		{
			head = NULL;
		}
		~LinkedList()
		{
			//delete functions
		}
		void push(T value)
		{
			Node * temp = new Node;
			temp->data = value;
			temp->next = head;
			head = temp;


		}
		void printList()
		{
			Node * temp = head;
			while(temp->next)
			{
				cout << temp->data << ", ";
				temp = temp->next;
			}
			cout << temp->data <<  endl;
		}
		bool search(T value)
		{
			Node * temp = head;
			while(temp != NULL)
			{
				if(temp->data == value)
				{
					return true;
				}
				temp=temp->next;
			}
			return false;

		}

};
