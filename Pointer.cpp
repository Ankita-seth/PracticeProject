#include "Pointer.h"


void Pointers::Pointerscpp::swap(int a, int b)                                  //Call By Value
{             
	int temp = a;
	a = b;
	b = temp;
}

void Pointers::Pointerscpp::swapp(int* first, int* second)                    //Call By pointer
{            
	int temp = *first;
	*first = *second;
	*second = temp;
}

void Pointers::Pointerscpp::swapp2(int& first, int& second)                  //Call By Reference
{           
	int temp = first;
	first = second;
	second = temp;
}

int Pointers::Pointerscpp::Mul(int a, int b) 
{
	return a * b;
}

void Pointers::Pointerscpp::PrintParaAndCount(const char* str)
{
	int count = 0,len;
	len = strlen(str);
	cout << len << endl;

	char words[1000][128];
	int count1 = 0,count2=0;

	for (int i = 0; i < len; i++)
	{
		char c = str[i];

		if (c == ' ')
		{
			count++;
			words[count1][count2] = '\0';
			count1++;
			count2 = 0;
		}
		else
		{
			words[count1][count2] = c;
			count2++;
			
		}
	}

	//For print only one word in a single line:
	for (int i = 0; i < count1; i++) 
	{
		cout << &words[i][0]  << endl;
	}

	//For print four word in a single line:
	for (int i = 0; i < count1; i++) 
	{
		if (i % 4 == 0)
		{
			cout << endl;
			cout << &words[i][0]<< " ";
		}
		else 
		{
			cout << &words[i][0] << " ";

		}

	}

	
	
	cout << "Total number of words: "<< count1 << endl;
}



void Pointers::Pointerscpp::PrintMultipleValue()
{

}

void Pointers::Pointerscpp::compare(int a, int b, int* add_great, int* add_small)
{
	
	{
		if (a > b) {

			// a is stored in the address pointed
			// by the pointer variable *add_great
			*add_great = a;
			*add_small = b;
		}
		else {
			*add_great = b;
			*add_small = a;
		}
	}
}


void Pointers::Pointerscpp::PrintPointer()

{
    //Pointers::Pointerscpp pointerscpp;

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

	//int (*PrintMul)(int, int)=Mul;                            //Function Pointer

	cout << Mul(5, 5) << endl;
	/*cout << PrintMul(2, 5) << endl;
	cout << PrintMul << endl;*/
}
