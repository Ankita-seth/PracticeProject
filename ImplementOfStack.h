#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace STACK_implementation
{
	class ImplementOfStack
	{
	public:
		int array[90]={0}, value, top = -1, n=90;

		void push(int val);

		void pop();

		void display();
	};

	    void PrintStackImplementation();
}