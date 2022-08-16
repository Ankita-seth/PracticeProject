#pragma once
#include <iostream>
#include <string>
using namespace std;
 
namespace Cir_Que_implementation
{
	class ImplementationOfCirQue
	{
	public:
		int cir_que[10], front = -1, rear = -1;
		void enque(int val);
		void deque();
		void display();
	};
	void  PrintCirQueImplementation();
}
