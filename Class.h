//In this program, I have created a class with  multiple objects...

#include<iostream>
using namespace std;

//Creation of class :

namespace Detail 
{

	class Employee 
	{
	public:
		string name;
		string company_name;
		int emp_id = 0;
		string designation;
	};

	void PrintClass();

}