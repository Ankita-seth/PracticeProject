#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
using namespace std;
#include "Constructor.h"
#include "Class.h"
#include "Structure.h"
#include "Pointer.h"
#include "Cstring.h"

int main() {

	/*Maths::Number number;

	Maths::Number* ptr = &number;

	cout << "The size of structure is: " << sizeof(number) << endl;

	cout << "Enter an integer value: ";
	cin >> ptr->num;
	cout << "Enter a double value: ";
	cin >> ptr->num1;
	cout << "Enter a Decimal value: ";
	cin >> ptr->num2;
	cout << "Enter a String: ";
	cin >> ptr->nm1;
	cout << "Enter a Character: ";
	cin >> ptr->nm;

	cout << "Integer value is : " << ptr->num << endl;
	cout << "double value is : " << ptr->num1 << endl;
	cout << "Decimal value is : " << ptr->num2 << endl;
	cout << "String value is : " << ptr->nm1 << endl;
	cout << "Character value is : " << ptr->nm << endl;

	double (*PrintSum)(int, double, float) = Maths::Sum;

	cout << "Sum of all three numbers are: " << PrintSum(ptr->num, ptr->num1, ptr->num2) << endl;


	

	Maths::Number::(*ptr)++;
	Maths::Number::(*ptr1)++;
	Maths::Number::(*ptr2)++;

	cout << "After increment integer value is: " << *ptr << endl;
	cout << "After increment double value is: " << *ptr1 << endl;
	cout << "After increment float value is: " << *ptr2 << endl;


	(*ptr)--;
	(*ptr1)--;
	(*ptr2)--;

	cout << "After decrement integer value is: " << *ptr << endl;
	cout << "After decrement double value is: " << *ptr1 << endl;
	cout << "After decrement float value is: " << *ptr2 << endl;

	double sum = *ptr + *ptr1 + *ptr2;


	cout << "Sum of integer, double and float values are: " << sum << endl;

	double sub = *ptr - *ptr1 - *ptr2;

	cout << "Subtraction of integer, double and float values are: " << sub << endl;
	*/


	//Cstring program :


	Strings::PrintStrings();

//
//	//Pointer program :
////
//
//
//
//  int a = 10;
//
//  int* aptr = &a;                     //declare and initialization of pointer at same step we can do it in multiple line too..
//
//  cout << &a << endl;                 //prints the address of a.
//
//  cout << *aptr << endl;              //prints the value of a.
//
//  cout << aptr << endl;               //prints the address of a.
//
//  aptr++;                             //pointer arithmatic (increment operator)
//
//  cout << aptr << endl;               //it increases the address value with respect to int size i.e 4 bytes.
//
//  *aptr = 40;                         //reassigning the value of a.
//
//  cout << a << endl;                  //print new assigned value of a.
//
//
//  int arr[] = { 12, 24, 36, 48 };     //pointer and array 
//
//  int* ptr = arr;
//
//  cout << *ptr << endl;               //it prints the value of o'th position of array i.e 12
//
//  for (int i = 0; i < 4; i++) {
//
//	  cout << *ptr << endl;                  //prints all array elements
//
//	  cout << *(arr + i) << endl;          //Another method of printing all array elements  i.e indexing pointer
//
//	  ptr++;
//
//  }
//
//  int** q = &aptr;                        //pointer to pointer.
//
//  cout << *q << endl;
//
//  cout << **q << endl;                   //de-referencing the pointer value.

 //(Call By Value):



  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "------" << endl << "Before swapping value are: " << a << " " << b << endl;
  swap(a, b);
  cout << "After swapping value are: " << a << " " << b << endl << "------" << endl;


  //(Call by pointer) :

  int* aptr = &a;
  int* bptr = &b;
  cout << "Before swapping value are: " << a << " " << b << endl;
  swapp(&a, &b);
  cout << "After swapping value are: " << a << " " << b << endl << "------" << endl;

  //(Call by reference) :

  cout << "Before swapping value are: " << a << " " << b << endl;
  swapp2(a, b);
  cout << "After swapping value are: " << a << " " << b << endl << "------" << endl;

  int (*PrintMul)(int, int) = Mul;                            //Function Pointer

  cout << Mul(5, 5) << endl;
  cout << PrintMul(2, 5) << endl;
  cout << PrintMul << endl;


}



//	
//
//
//
//
//	//SmartPhone s22("Samsung");
//
//	//SmartPhone s22("Samsung", "s23");
//
//	//Main Function of Constructor.cpp :
//
//	//Parameterized Constructor Calling :
//
//	SmartPhone smartphone, smartphone2("nokia", "F-42", "Black", 55000, "4GB"), smartphone3("Apple", "iPhone-13", "Red", 155000, "4GB");
//
//	//smartphone.setData("Samsung", "s22", "Red", 80000, "8GB");
//
//	//smartphone2.setData("Samsung", "F-42", "Black", 55000, "4GB");
//
//    smartphone.displaySetData();
//	
//	smartphone2.displaySetData();
//
//	smartphone3.displaySetData();
//
//	//SmartPhone smartphone("Samsung", "Galaxy S-22 ultra", "Black", "8GB", 1080000);
//
//	//SmartPhone smartphone2("Samsung", "Galaxy F-42", "Red", "16GB", 16000);
//
//	cout << "Output Of Constructor: " << endl << "---------" << endl;
//	cout << "Brand Name: " << smartphone.Brand << endl;
//	cout << "Model Name: " << smartphone.Model << endl;
//	cout << "Colour: " << smartphone.Colour << endl;
//	cout << "Price: " << smartphone.Price << "Rupees" << endl;
//	cout << "Storage: " << smartphone.StorageSpace << endl << endl;
//
//	cout << "Brand Name: " << smartphone2.Brand << endl;
//	cout << "Model Name: " << smartphone2.Model << endl;
//	cout << "Colour: " << smartphone2.Colour << endl;
//	cout << "Price: " << smartphone2.Price << "Rupees" << endl;
//	cout << "Storage: " << smartphone2.StorageSpace << endl << endl << "---------" << endl;
//
//
//
//	// Main function of Class.cpp
//
//	Detail::Employee emp;
//
//	emp.name = "Ankita Seth";
//	emp.company_name = "Beehives System";
//	emp.emp_id = 20;
//	emp.designation = "Software Developer Trainee";
//
//
//
//	Detail::Employee emp1;
//
//	emp1.name = "Isha Sinha";
//	emp1.company_name = "Beehives System";
//	emp1.emp_id = 21;
//	emp1.designation = "Software Developer Trainee";
//
//	//Printing the values through object :
//
//	cout << "Output of Class : " << endl << "---------" << endl;
//
//
//	cout << "Name: " << emp.name << endl;
//	cout << "Company Name: " << emp.company_name << endl;
//	cout << "Employee ID: " << emp.emp_id << endl;
//	cout << "Designation: " << emp.designation << endl << endl;
//
//
//
//	cout << "Name: " << emp1.name << endl;
//	cout << "Company Name: " << emp1.company_name << endl;
//	cout << "Employee ID: " << emp1.emp_id << endl;
//	cout << "Designation: " << emp1.designation << endl << endl << "---------" << endl;
//
//
//	//Main function of Structure.cpp :
//
//
//	Maths::Laptop laptop;
//	laptop.brand = "Lenovo";
//	laptop.model = "Slim Ideapad";
//	laptop.colour = "Black";
//	laptop.price = 60000;
//	laptop.processsor = "i5";
//
//
//
//	Maths::Laptop laptop2;
//	laptop2.brand = "Dell";
//	laptop2.model = "Vostro3400";
//	laptop2.colour = "Gray";
//	laptop2.price = 80000;
//	laptop2.processsor = "i7";
//
//
//
//	Maths::Person person;
//	person.name = "Ankita";
//	person.age = 25;
//	person.gender = "Female";
//	person.nationality = "Indian";
//	person.laptop = laptop2;
//
//
//	Maths::Person person2;
//	person2.name = "Isha";
//	person2.age = 23;
//	person2.gender = "Female";
//	person2.nationality = "Indian";
//	person2.laptop = laptop;
//
//	cout << "Output of Structure : " << endl << "---------" << endl;
//
//	Maths::printPersonInfo(person);
//
//    Maths::printPersonInfo(person2);
//
//
//
//
