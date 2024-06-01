using namespace std;
class Stack
{
	private:
		int * data;
		int topIndex;
		int capacity;
	public:
		Stack(int inputCapacity);
		~Stack();
		int getCapacity();
		int getSize();
		bool isFull();
		bool isEmpty();
		bool push(int input);
		bool pop();
		int getTop();
		void printStack();

};
