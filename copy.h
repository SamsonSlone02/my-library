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
		LinkedList();
		~LinkedList();
		void push(T);
		void printList();
		bool search(T);


		LinkedList::LinkedList()
		{
			head = NULL;
		}
		LinkedList::~LinkedList()
		{
			//delete functions
		}
		void LinkedList::push(T value)
		{
			Node * temp = new Node;
			temp->data = value;
			temp->next = head;
			head = temp;


		}
		void LinkedList::printList()
		{
			Node * temp = head;
			while(temp->next)
			{
				cout << temp->data << ", ";
				temp = temp->next;
			}
			cout << temp->data <<  endl;
		}
		bool LinkedList::search(T value)
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
