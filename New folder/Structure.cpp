#include "Structure.h"

//Function Creation :
double Maths::Sum(int num, double num1, float num2) {

	return num + num1 + num2;

}
void Maths::printLaptopInfo(Laptop laptop) {

	cout << "Brand Name: " << laptop.brand << endl;
	cout << "Model Name: " << laptop.model << endl;
	cout << "Colour: " << laptop.colour << endl;
	cout << "Price: " << laptop.price << " " << "Rupees" << endl;
	cout << "Processor: " << laptop.processsor << endl <<endl;
}

void Maths::printPersonInfo(Person person) {

	cout << "Name: " << person.name << endl;
	cout << "Age: " << person.age << endl;
	cout << "Gender: " << person.gender << endl;
	cout << "Nationality: " << person.nationality << endl;

	printLaptopInfo(person.laptop);
}




