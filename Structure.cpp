#include "Structure.h"

//Function Creation :
double Maths::Sum(int num, double num1, float num2) 
{
	return num + num1 + num2;
}
void Maths::printLaptopInfo(Laptop laptop) 
{
	cout << "Brand Name: " << laptop.brand << endl;
	cout << "Model Name: " << laptop.model << endl;
	cout << "Colour: " << laptop.colour << endl;
	cout << "Price: " << laptop.price << " " << "Rupees" << endl;
	cout << "Processor: " << laptop.processsor << endl <<endl;
}

void Maths::printPersonInfo(Person person) 
{
	cout << "Name: " << person.name << endl;
	cout << "Age: " << person.age << endl;
	cout << "Gender: " << person.gender << endl;
	cout << "Nationality: " << person.nationality << endl;

	printLaptopInfo(person.laptop);
}

void Maths::PrintStructure()
{
		Maths::Laptop laptop;
		laptop.brand = "Lenovo";
		laptop.model = "Slim Ideapad";
		laptop.colour = "Black";
		laptop.price = 60000;
		laptop.processsor = "i5";
	

		Maths::Laptop laptop2;
		laptop2.brand = "Dell";
		laptop2.model = "Vostro3400";
		laptop2.colour = "Gray";
		laptop2.price = 80000;
		laptop2.processsor = "i7";
	
	
		Maths::Person person;
		person.name = "Ankita";
		person.age = 25;
		person.gender = "Female";
		person.nationality = "Indian";
		person.laptop = laptop2;
	
	
		Maths::Person person2;
		person2.name = "Isha";
		person2.age = 23;
		person2.gender = "Female";
		person2.nationality = "Indian";
		person2.laptop = laptop;
	
		cout << "Output of Structure : " << endl << "---------" << endl;
	
		Maths::printPersonInfo(person);
	
	    Maths::printPersonInfo(person2);	
}

void Maths::PrintMathstructure()
{
	Maths::Number number;

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
}

void ArrayStructure::Alloc(int w,int h)
{
	Value** val2d = new Value * [h];
	for (size_t i = 0; i < h; i++)
	{
		val2d[i] = new Value[w];
	}

	Value* val1d = new Value[w * h];
	for (size_t i = 0; i < w*h; i++)
	{
		val1d[i].a = rand() % 10;
		val1d[i].b = rand() % 10;
		cout<< val1d[i].a <<" ";
		cout <<val1d[i].b << endl;
	    val2d[i/h][i%w] = val1d[i];
	}

	//for (size_t i = 0; i < w; i++)
	//{
	//	for (size_t j = 0; j < h;j++)
	//	{
	//		val2d[i / h][i % w] = val1d[i];
	//		cout << val2d[w][;
	//	}
	//}
}

void ArrayStructure::Release()
{

}

void ArrayStructure::Print2D_ArrayStructure()
{
	/*int w = 0;
	int h = 0;
	Value* val = new Value[w * h];
	Value** val2 = nullptr;*/
	Alloc(3, 1);
}




