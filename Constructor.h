#ifndef _CONSTRUCTOR_
#define _CONSTRUCTOR_


#include <iostream>
#include <string>
using namespace std;

namespace Construct 
{
//Class Creation :

	class SmartPhone 
	{
	//Data Members :
	private:

		string Brand;
		string Model;
		string Colour;
		int Price = 0;
		string StorageSpace;

	//Member Function :
	public:
		//Default constructor :
		SmartPhone();

		//Parameterized Constructor : 
		SmartPhone(string brand, string model, string colour, int price, string storageSpace);

		~SmartPhone();

		void setData(string bname, string m, string c, int p, string s);

		void displaySetData();
		void PrintConstruct();



		//SmartPhone(string brand, string model = "s22", string colour = "Red", string storageSpace = "16", int price = 0);

		//Construct::SmartPhone(string brand, string model, string colour, string storageSpace, int price);


	};
	//Class for Shallow Copy Constructor and Assignment Operator
	class box
	{
	private:
		int length = 14;
		int breadth = 12;
		int height = 16;

	public:
		
		void setDimentions(int len, int bred, int hei);
		void DispDimentions();
		
	};
	//Class For Deep Copy Constructor Example:

	class Box
	{
	private:
		int *length;
		int breadth;
		int height;
	public:
		Box()
		{
			length = new int;
		}

		void setDimen(int leng, int bre, int hei);
		void showData();

		Box(Box& obj)
		{
			length = new int;
			*length = *(obj.length);
			breadth = obj.breadth;
			height = obj.height;
		}
		~Box()
		{
			delete length;
		};

	};
	void PrintCopyConstructor();


	
}


#endif //_CONSTRUCTOR_

