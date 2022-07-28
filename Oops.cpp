#include "Oops.h"

void OopsConcept::A::Disp()
{
	cout << num << num2 << endl;
	
}

void OopsConcept::A::Display()
{
	cout << "Base class is called...";
}

void OopsConcept::B::Show()
{

	cout << "count: " << value << endl;
}

void OopsConcept::B::Display()
{
	cout << "Derived class is called.." << endl;
}

void OopsConcept::A::AFunc()
{
	cout << "function A called." << endl;
}

void OopsConcept::A::AFunc(int x)                                         //Function Overloading. (Same function name but different parameter)
{
	cout << "Function is called with an integer argument." << endl;
}

void OopsConcept::A::AFunc(double x)                                      //Function Overloading.
{
	cout << "Function is called with a double argument." << endl;
}

void OopsConcept::A::AFunc(int x, float y)                                //Function Overloading.
{
	cout << x* y << endl;

}

void OopsConcept::B::BFunc()
{
	cout << "function B called."<<endl;
}

void OopsConcept::C::func()
{
	cout << "Virtual method called" << endl;
}

void OopsConcept::C::func1()
{
	func();
}

void OopsConcept::C::CFunc()
{
	cout << "function C called." << endl;
}

void OopsConcept::C::displayDistance() 
{
	cout << "F: " << feet << " I:" << inches << endl;
}

void OopsConcept::D::func()
{
	cout << "Derived class Virtual method called" << endl;
}

void OopsConcept::D::DFunc()
{
	cout << "function D called." << endl;
}

void OopsConcept::E::PrintMarks()
{

	cout << "Hey you got " << marks <<" " << "marks in your test paper." << endl;
}

void OopsConcept::E::EFunc()
{
	cout << "function E called." << endl;
}

void OopsConcept::F::FFunc()
{
	cout << "function F called." << endl;
}

void OopsConcept::G::GFunc()
{
	cout << "function G called." << endl;
}


void OopsConcept::PrintInheritance()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	G g;

	a.AFunc();	

	b.AFunc();
	b.BFunc();

	c.AFunc();
	c.CFunc();

	d.DFunc();
	//d.AFunc();
	d.BFunc();

	e.BFunc();
	e.AFunc();
	e.EFunc();

	f.CFunc();
	f.AFunc();
	f.FFunc();

	g.CFunc();
	g.AFunc();
	g.GFunc();
}

void OopsConcept::PrintPolymorphism()
{
	A a;
	a.AFunc();
	a.AFunc(4);                                                  //Function Overloading.
	a.AFunc(12.66);                                              //Function Overloading.
	a.AFunc(4, 12.66);                                           //Function Overloading.
	A a1(12, 4), a2(9, 3);
	A a3 = a1 + a2;
	a3.Disp();

	B b;
	++b;
	b.Show();

	// overloaded minus (-) operator
	C C1(-100, 10), C2(5, -71);

	-C1;                     // apply negation
	C1.displayDistance();    // display D1

	-C2;                     // apply negation
	C2.displayDistance();    // display D2

	// overloaded subscripting[] operator
	E e;
	cout << "Value of e[3] = " << e[3]<<endl;

	cout << "Value of e[5] = " << e[5] << endl;

	cout << "Value of e[20] = " << e[20] << endl;

	// overloaded arrow(->) operator

	E e1(89);
	e1.PrintMarks();
	e1->PrintMarks();

}

void OopsConcept::PrintVirtualFunc()
{
	B derived;
	A* base = &derived;
	base->Display();
	derived.Display();

	D d;
	d.func1();
	
	//Virtual Destructor Called:
	C* c = new D;     // Upcasting
	delete c;
}

void OopsConcept::PrintAbstract()
{
	//Abstract class and pure virtual function
	B b;
	A1* abstract = &b;
	abstract->disp();
}
