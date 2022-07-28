#include "Pointer.h"



void swap(int a, int b) {               //Call By Value
	int temp = a;
	a = b;
	b = temp;
}
void swapp(int* first, int* second) {            //Call By pointer
	int temp = *first;
	*first = *second;
	*second = temp;
}

void swapp2(int& first, int& second) {            //Call By Reference
	int temp = first;
	first = second;
	second = temp;
}

int Mul(int a, int b) {
	return a * b;
}


