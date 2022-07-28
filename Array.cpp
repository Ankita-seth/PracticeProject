#include "Array.h"

void Array::PrintArraySum()
{
	int a[3] = {0}, b[3]={0}, c[3] = {0}, * p1 = nullptr, * p2 = nullptr, * p3 = nullptr, i = 0;

		cout << "Enter the elements of first array: " << endl;
		for (i = 0; i < 3; i++) 
		{
			cin >> a[i];
		}

		cout << "Enter the elements of second array: " << endl;
		for (i = 0; i < 3; i++) 
		{
			cin >> b[i];
		}
							
		p1 = a;
		p2 = b;
		p3 = c;
		for (i = 0; i < 3; i++) 
		{
			*p3 = *p1 + *p2;

			p1++;
			p2++;
			p3++;
		}

		cout << "Addition of the array are: " << endl;
		for (i = 0; i < 3; i++) 
		{
			cout << c[i] << endl;
		}
	}

void Array::PrintDynamicAllocationExample()
{
	int* ptr = NULL,size;

	cout << "Enter the number of values you want(Size of Array): " << endl;
	cin >> size;

	//Use of New keyword for DMA :
	ptr = new int[size];
	if (!ptr)
	{
		cout << "allocation of memory failed\n";
	}
	else
	{
		cout << "Enter the elements of Array: " << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> ptr[i];
		}
		cout << "The values are: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] <<" and the address is: "<<&ptr[i] << endl;
			
		}
	}

	//Use of Delete keyword for deleting the DMA :
	delete[] ptr;
}

void Array::PrintArraySumDynamic()
{
	int* arr1 = new int[3];
	int* arr2 = new int[3];
	int* arr = new int[3];
	int i;

	memset(arr1, 0, sizeof(int) * 3);

	memcpy(arr2, arr1, sizeof(int) * 3);

	cout << "Enter the elements of first array: " << endl;
	for (i = 0; i < 3; ++i) 
	{
		cin >> arr1[i];
	}
	cout << "The numbers are: " << endl;
	for (i = 0; i < 3; ++i) 
	{
		cout << arr1[i] << endl;
	}

	cout << "Enter the elements of second array: " << endl;
	for (i = 0; i < 3; ++i) 
	{
		cin >> arr2[i];
	}
	cout << "The numbers are: " << endl;
	for (i = 0; i < 3; ++i) 
	{
		cout << arr2[i] << endl;
	}

	for (i = 0; i < 3; ++i)
	{
		arr[i] = arr1[i] + arr2[i];
	}
	cout << "The sum of 2 array are: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cout << arr[i] << endl;
	}
}

void Array::PrintMallocExample()
{
	int* ptr;
	ptr = (int*) malloc(10 * sizeof(int));          //Allocation of heap memory using malloc function

    if(ptr)
	{
		cout << "Let's initialize some even values: " << endl <<endl;

		for (int i = 0; i < 10; i++) 
		{
			ptr[i] = (i * 2) + 2;
		}
		cout << "The values are: " << endl << endl;
		for (int i=0; i < 10; i++) 
		{
		cout << "Value at position "<< i << " is: " << * (ptr + i) << endl;
		}
	}
	free(ptr);                                       //De-allocation of malloc function.
}



void Array::memCpy(char* dest, char* src, size_t n) 
{
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	for (int i = 0; i < n; i++) 
	{
		cdest[i] = csrc[i];
	}
}
void Array::PrintMemoryCopyFunc()
{
	/*
	int a[] = {1,2,3,4,5,6};
	int b[6];
	memcpy(b, a, sizeof(a));
	for (int i = 0; i < 6; i++) 
	{
		cout << b[i] << " ";
	}
	cout << endl;*/

	int x[100]={0};
	int y[100]={0};

	for (int i = 0; i < 100; i++)
	{
		x[i]=rand()%100;
		cout << x[i]<<endl;
	}
	memcpy(y, x, sizeof(x));
	for (int i = 0; i < 100; i++)
	{
	cout << y[i] <<" ";
	}
	
	
}

void Array::PrintMemorySetFunc()
{

	int n;
	cout << "Enter the number of blocks: " << endl;
	cin >> n;
	int* a =new int[n];
	memset(a, 10, sizeof(a));
	cout << a[4] << endl;

	int num[6];
	memset(num, 0, sizeof(num));              //memset is used to fill a block of memory with a particular value that is 0 or -1.
	for (int i = 0; i < 6; i++)
	{
		cout << num[i] << endl;
	}
}

void Array::Print2D_Array()
{

	int** p = new int* [10];
	for (int i = 0; i < 10; i++)
	{
		p[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<p[i][j]<<endl;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		delete[] p[i];
	}


	int** arr;
	int row, col,i,j;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;

	arr = new int* [row];
	for (int i = 0; i < row; i++) 
	{
		arr[i] = new int[col];
	}
	cout << "Enter " << (row * col) << " numbers to the Array: "<< endl;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			cout << "Enter the elements at Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> arr[i][j];
		}
	}
	
	cout << "Here is Our 2D Array: " << endl;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	for (i = 0; i < row; i++) 
	{
		delete[] arr[i];
	}
	delete[] arr;
}

	




