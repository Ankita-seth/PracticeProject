#include "ImplementOfStack.h"

void STACK_implementation::ImplementOfStack::push(int val)
{
	if (top >= n - 1)
	{
		cout << "Stack overflow" << endl;
	}
	else
	{
		top++;
		array[top] = val;
	}
}

void STACK_implementation::ImplementOfStack::pop()
{
	if (top <= -1)
	{
		cout << "Stack underflow" << endl;
	}
	else
	{
		cout << "Popped element is: " << array[top] << endl;
		top--;
	}
}

void STACK_implementation::ImplementOfStack::display()
{
	if (top>=0)
	{
		cout << "Stack elements are: " << endl;
		for (int i = top; i >= 0; i--)
		cout << array[i] << " ";
		cout << endl;

	}
	else 
	{
		cout << "Stack is empty" << endl;
	}
}

void STACK_implementation::PrintStackImplementation()
{
	int ch, val;
	ImplementOfStack s;
	cout << "1) Want to push the element in stack." << endl;
	cout << "2) Want to pop the element from the stack." << endl;
	cout << "3) Want to display the stack." << endl;
	cout << "4) Exit" << endl;

	do
	{
		cout << "Please Enter your choice: " << endl;
		cin >> ch;
		
		switch (ch)
		{
			case 1:
			{
				cout << "Enter the value to be pushed in the stack: " << endl;
				cin >> val;
				s.push(val);
				break;
			}
			case 2:
			{
				s.pop();
				break;
			}
			case 3:
			{
				s.display();
				break;
			}
			case 4:
			{
				cout << "Exit" << endl;
				break;
			}
			default:
			{
				cout << "Invalid Choice You have entered.Kindly enter correct number of choice" << endl;
			}
		}
	} while (ch != 4);
}
