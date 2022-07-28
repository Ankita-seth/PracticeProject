#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace OopsConcept 
{
	const int size = 15;

	class A1
	{
	public:
		virtual void disp() = 0;	
	};

    class A:public A1
	{
	private:
		int num;
		int num2;
	
	public:
		void disp()
		{
			cout << "Display function is called." << endl;
		}

		A(int n = 0, int m= 0)
		{
			num = n;
			num2 = m;
		}
		A operator + (A const &obj)
		{
			A result;
			
			result.num = num + obj.num;

			result.num = num2 + obj.num2;
			return result;
		}

		void Disp();

	//virtual function (Run time polymorphism) 
		virtual void Display();    

	//function overloading ( it is type of compile time polymorphism)
		void AFunc();
		void AFunc(int x);
		void AFunc(double x);
		void AFunc(int x, float y);
	};

	class B:public A
	{
	private:
		int value;
	public:
		B() : value(5)
		{

		}
	//Operator overloading
		void operator ++()
		{
			++value;
		}
		void Show();
	//virtual function (Run time polymorphism) 
		void Display();

	public:
		void BFunc();
	};

	class C : public A
	{
	private:
	private:

		int feet;             // 0 to infinite
		int inches;           // 0 to 12

	public:
		C()
		{
			cout << "Constructor called" << endl;
			func();
		}
		//Virtual Destructor Called:(constructor are never virtual only destructors can be virtual) 
		virtual ~C()
		{
			cout << "Destructor called" << endl;
			func();
		}

		virtual void func();

		void func1();
		void CFunc();

		// overloaded minus (-) operator(unary)
		C(int f, int i) 
		{
			feet = f;
			inches = i;
		}

		void displayDistance();

		// overloaded minus (-) operator
		C operator- () 
		{
			feet = -feet;
			inches = -inches;
			return C (feet, inches);
		}
	};
	
	class D : public B,public C
	{
	public:
		D()
		{
			cout << "Derived class Constructor called" << endl;
		}
		~D()
		{
			cout << "Derived class Destructor called" << endl;
		}
		void func();
		void DFunc();
	};

	class E : public B
	{
		
	private:
		int arr[size];

		int marks;

	public:
		E()
		{
			register int i;
			for (i = 0; i < size; i++)
			{
				arr[i] = i;
			}
		}

		E(int m)
		{
			marks = m;
		}

		void PrintMarks();
		// overloaded arrow(->) operator
		E *operator ->()
		{
			return this;
		}
		// overloaded subscripting[] operator
		int &operator [](int i)
		{
			if (i > size)
			{
				cout << "Value of index is out of bound.\n";
				return arr[0];
			}
			return arr[i];
		}

		void EFunc();
	};

	class F :public C
	{
	public:
		void FFunc();
	};

	class G : public C
	{
	public:
		void GFunc();
	};
	
	
	void PrintInheritance();
	void PrintPolymorphism();
	void PrintVirtualFunc();
	void PrintAbstract();
};
