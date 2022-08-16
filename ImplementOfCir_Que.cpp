#include "ImplementOfCir_Que.h"

void Cir_Que_implementation::ImplementationOfCirQue::enque(int val)
{
	if (front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		cir_que[rear] = val;
	}

	else if ((rear + 1) % 10 == front)
	{
		cout << "Queue Overflow.." << endl;
	}
	else
	{
		rear = (rear + 1) % 10;
		cir_que[rear] = val;
	}
}

void Cir_Que_implementation::ImplementationOfCirQue::deque()
{
	if (front == -1 && rear == -1)
	{
		cout << "Queue Underflow.." << endl;
	}
	else if (front == rear)
	{
		cout << "The dequeued element is" << cir_que[front];
		front = -1;
		rear = -1;
	}
	else
	{
		cout << "The dequeued element is" << cir_que [front];
		front = (front + 1) % 10;
	}
}

void Cir_Que_implementation::ImplementationOfCirQue::display()
{
	int i = front;
	if (front == -1 && rear == -1)
	{
		cout << "Queue is empty..";
	}
	else
	{
		cout << "Elements in a Queue are: "<<endl;
		while (i <= rear)
		{
			cout << cir_que[i] << " ";
			i = (i + 1) % 10;
		}
		cout << endl;
	}
}

void Cir_Que_implementation::PrintCirQueImplementation()
{
	int ch = 1, value;
	ImplementationOfCirQue c;
	while (ch < 4 && ch != 0)
	{
		cout << "1: Insert an element" << endl;
		cout << "2: Delete an element" << endl;
		cout << "3: Display the element" << endl;
		cout << "4: Exit" << endl;
		cout << "Enter your choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "Enter the element which is to be inserted" << endl;
			cin >> value;
			c.enque(value);
			break;
		case 2:
			c.deque();
			break;
		case 3:
			c.display();
			break;
		case 4:
			cout << "Exit" << endl;
			break;
		default:
			cout << "Invalid option!!" << endl;
			break;
		}
	}
}
