#include "Class.h"

void Detail::PrintClass()
{
	Detail::Employee emp;

	emp.name = "Ankita Seth";
	emp.company_name = "Beehives System";
	emp.emp_id = 20;
	emp.designation = "Software Developer Trainee";


	Detail::Employee emp1;

	emp1.name = "Isha Sinha";
	emp1.company_name = "Beehives System";
	emp1.emp_id = 21;
	emp1.designation = "Software Developer Trainee";

	//Printing the values through object :

	cout << "Output of Class : " << endl << "---------" << endl;

	cout << "Name: " << emp.name << endl;
	cout << "Company Name: " << emp.company_name << endl;
	cout << "Employee ID: " << emp.emp_id << endl;
	cout << "Designation: " << emp.designation << endl << endl;


	cout << "Name: " << emp1.name << endl;
	cout << "Company Name: " << emp1.company_name << endl;
	cout << "Employee ID: " << emp1.emp_id << endl;
	cout << "Designation: " << emp1.designation << endl << endl << "---------" << endl;
}
