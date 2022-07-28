#ifndef _CONSTRUCTOR_
#define _CONSTRUCTOR_


#include <iostream>
#include <string>
using namespace std;

//Class Creation :

	class SmartPhone {

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

		SmartPhone() {

			Brand = "Samsung";

		}

		//Parameterized Constructor : 

		SmartPhone(string bname, string m, string c, int p, string s) {

			Brand = bname;
			Model = m;
			Colour = c;
			Price = p;
			StorageSpace = s;

		}


		void setData(string bname, string m, string c, int p, string s);


		void displaySetData();


		//Constructor Calling : 


		//SmartPhone(string brand, string model = "s22", string colour = "Red", string storageSpace = "16", int price = 0);

		//SmartPhone(string brand, string model, string colour, string storageSpace, int price);

		~SmartPhone();

	};




#endif //_CONSTRUCTOR_

