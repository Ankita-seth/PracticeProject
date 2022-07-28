#include "File.h"

void Files::PrintFileWriteEx()
{
	char a[110];
	cout << "Enter your details including your name,age,& address etc..: "<<endl;
	cin.getline(a, 110);
	ofstream myFile("abc.txt");
	myFile << a;
	myFile.close();
	cout << "You Have Successfully entered the details in your file. " << endl;
}

void Files::PrintFileReadEx()
{
	char a[110];
	cout << "Reading from file is started..." << endl;
	ifstream myFile1("abc.txt");
	myFile1.getline(a, 100);
	cout << "Array inputs are: " << a << endl;
	cout << "You Have Successfully read the details from your file" << endl;
	myFile1.close();
}

void Files::PrintFileWriteBinaryEx()
{
	char arr[60];
	cout << "Enter your name: " << endl;
	cin.getline(arr, sizeof(arr));
	ofstream infile("abc.bin", ios::binary);
	infile << arr;
	//infile.close();
	cout << "You Have Successfully entered the details in your file." << endl;
}
