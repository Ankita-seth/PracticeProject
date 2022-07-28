#pragma once
#ifndef _POINTER_
#define _POINTER_


#include <iostream>
#include <string>
using namespace std;

namespace Pointers 
{

	class Pointerscpp 
	{
	public:

		void PrintPointer();

		void swap(int a, int b);                        //Call By Value

		void swapp(int* a, int* b);                     //Call By Pointer

		void swapp2(int& a, int& b);                    //Call By Reference //TODO

		int Mul(int a, int b);

		void  PrintParaAndCount(const char* str);

		void PrintMultipleValue();

		void compare(int a, int b, int* add_great, int* add_small);


	};

}




#endif