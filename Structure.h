//In this program, I have created structure with thier object and function...
#pragma once
#ifndef _STRUCTURE_
#define _STRUCTURE_

#include <iostream>
using namespace std;

//Structure Creation :

namespace Maths
{

	struct Number 
	{

		int num;
		double num1;
		float num2;
		char nm;
		char nm1[128];

	};



	struct Laptop 
	{
		string brand;
		string model;
		string colour;
		int price = 0;
		string processsor;

	};


	struct Person 
	{
		string name;
		int age = 0;
		string gender;
		string nationality;
		Laptop laptop;

	};



	//Function Calling: 

	double Sum(int num, double num1, float num2);

	void printLaptopInfo(Laptop laptop);

	void printPersonInfo(Person person);

	void PrintStructure();

	void PrintMathstructure();

}

namespace ArrayStructure{

struct Value
{
	int a=0;
	int b=0;
};

void Alloc(int w, int h);

void Release();

void Print2D_ArrayStructure();

}
#endif





