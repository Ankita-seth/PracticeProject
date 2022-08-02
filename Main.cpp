#define _CRT_SECURE_NO_WARNINGS

#include "Constructor.h"
#include "Pointer.h"
#include "Structure.h"
#include "Class.h"
#include "C_string.h"
#include "Array.h"
#include "Count.h"
#include "File.h"
#include "BitmapImporter.h"
#include "Oops.h"
#include "DesignPattern.h"

int main()
{

	// Main function of Pointer program :

	//Pointers::Pointerscpp printspointer;

	//printspointer.PrintPointer();
	
	/*const char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."

		;
	

	Pointers::Pointerscpp p;


	p.PrintParaAndCount( str );
*/


	//// Main function of Class program :

	//Detail::PrintClass();

	//// Main function of Structure program :

 //   Maths::PrintStructure();

 //   Maths::PrintMathstructure();

//ArrayStructure::Print2D_ArrayStructure();

 //   // Main Function of Cstring program :

	//Strings::PrintStrings();

	//// Main function of Constructor program :

	//Construct::SmartPhone smartphone;

	//smartphone.PrintConstruct();
	
	Construct::PrintCopyConstructor();

	//// Main function of ArraySum Program :

	//Array::PrintArraySum();

	//Array::PrintDynamicAllocationExample();

	//Array::PrintMallocExample();

	//Array::PrintMemoryCopyFunc();

	//Array::PrintMemorySetFunc();

	//Array::PrintArraySumDynamic();

	//Array::Print2D_Array();

//Main function of FileHandling Program :
	//Files::PrintFileWriteEx();
	//Files::PrintFileReadEx();
	//Files::PrintFileWriteBinaryEx();

	//BitmapImporter bitmap;
	//bitmap.ReadBitmap("a.bmp");
	//
	//for (int i = 10; i < 100; i++)
	//{
	//	for (int j = 10; j < 100; j++)
	//	{
	//		bitmap.SetPixel(j,i,160,180,155);
	//	}
	//}
	//bitmap.WriteBitmap("b.bmp");

	//BitmapImporter bit;
	//try {
	//	bit.CreateImage(100, 150, 260, 20, 00);

	//	bit.WriteBitmap("BeeS.bmp");
	//}
	//catch (...) {
	//	cout << "Exception occured: Please enter the value which is lesser than 255." << endl;

	//}

		//bit.ReadBitmap("siz.bmp");
		//int poseX=50, poseY=50;

		//for (int i = 0; i < 100; i++)
		//{
		//	for (int j = 0; j < 100; j++)
		//	{
		//		if (sqrt((i - 50) * (i - 50) + (j - 50) * (j - 50)) < 50)
		//		{
		//			bit.SetPixel(j+poseX, i+poseY,220, 100, 78);
		//		}
		//		
		//	}
		//}
		
//main of Oops Class:
		//OopsConcept::PrintInheritance();
		//OopsConcept::PrintPolymorphism();
		//OopsConcept::PrintAbstract();
		//OopsConcept::PrintVirtualFunc();

//main of DesignPattern Class:
		//DesignPattern::PrintSingleton();
		//DesignPattern2::PrintFactoryMethod();
		//DesignPattern3::PrintAbstractMethod();
		
		system("pause");
		return 0;
}