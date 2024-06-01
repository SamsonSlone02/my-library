class Stack
{
	private:
		int * data;
		int topIndex;
		int capacity;
	public:
		Stack(int inputCapacity)
		{
			capacity = inputCapacity;
			data = new int[capacity];
			topIndex = 0;


		}
		~Stack()
		{
			delete[] data;
		}

		int getCapacity()
		{
			return capacity;
		}
		int getSize()
		{
		
			return topIndex;
		}
		bool isFull()
		{
			if(topIndex == capacity)
			{
				return true;
			}
			return false;
		}
		bool isEmpty()
		{
			if(topIndex == 0)
			{
				return true;
			}
			return false;

		}
		bool push(int input)
		{
			if(!isFull())
			{
				data[topIndex] = value;
				topIndex++;
				return true;
			}
			else return false;
		}
		bool pop()
		{
		 	if(!empty())
			{
				data[topIndex] = 0;
				topIndex--;
				return true;
			}
			else return false;
		}

};
