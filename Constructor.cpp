
#include "Constructor.h"

//Default Constructor :

void Construct::SmartPhone::setData(string bname, string m, string c, int p, string s) 
{
	Brand = bname;
	Model = m;
	Colour = c;
    Price = p;
    StorageSpace = s;

}

void Construct::SmartPhone::displaySetData() 
{

	cout << "Brand Name: " << Brand << endl;
	cout << "Model Name: " << Model << endl;
	cout << "Colour: " << Colour << endl;
	cout << "Price: " << Price << " " << "Rupees" << endl;
	cout << "Storage: " << StorageSpace << endl << endl;

}


//Parameterized Constructor :
Construct::SmartPhone::SmartPhone(string brand, string model, string colour, int price, string storageSpace) 
{

	Brand = brand;
	Model = model;
	Colour = colour;
	Price = price;
	StorageSpace = storageSpace;

}


Construct::SmartPhone::SmartPhone() 
{
Brand:"Samsung";
}

// Destructor :
Construct::SmartPhone::~SmartPhone() 
{

	cout << "Destructor is called" << endl << "---------" << endl;
	
}


void Construct::SmartPhone::PrintConstruct()
{
	//Construct::SmartPhone smartphone, smartphone2("nokia", "F-42", "Black", 55000, "4GB"), smartphone3("Apple", "iPhone-13", "Red", 155000, "4GB");

	Construct::SmartPhone smartphone, smartphone2, smartphone3;

	smartphone2.setData("Samsung", "s22", "Red", 80000, "8GB");

	smartphone3.setData("Samsung", "F-42", "Black", 55000, "4GB");

	smartphone.displaySetData();

	smartphone2.displaySetData();

	smartphone3.displaySetData();

	//SmartPhone smartphone("Samsung", "Galaxy S-22 ultra", "Black", 1080000, "8GB");

	//SmartPhone smartphone2("Samsung", "Galaxy F-42", "Red", 16000, "16GB");

	cout << "Output Of Constructor: " << endl << "---------" << endl;
	cout << "Brand Name: " << smartphone.Brand << endl;
	cout << "Model Name: " << smartphone.Model << endl;
	cout << "Colour: " << smartphone.Colour << endl;
	cout << "Price: " << smartphone.Price << "Rupees" << endl;
	cout << "Storage: " << smartphone.StorageSpace << endl << endl;

	cout << "Brand Name: " << smartphone2.Brand << endl;
	cout << "Model Name: " << smartphone2.Model << endl;
	cout << "Colour: " << smartphone2.Colour << endl;
	cout << "Price: " << smartphone2.Price << "Rupees" << endl;
	cout << "Storage: " << smartphone2.StorageSpace << endl << endl << "---------" << endl;

}








