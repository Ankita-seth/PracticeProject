#include "Cstring.h"

void Strings::PrintStrings() {


	char greeting[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };
	cout << greeting << endl;
	char str1[40] = "Hello";
	char str2[40] = "Everyone";
	char str3[40] = "Welcome";
	char str4[10];
	int len;
	char msg[100] = " Good Morning everyone, welcome to Beehive System pvt ltd.";
	char* p; 

	strcpy_s(str4, str1);
	cout << "strcpy_s: " << str4 << endl;

	strcat_s(str1, str2);
	cout << "strcat_s: " << str1 << endl;

	len = strlen(str2);
	cout << "strlen: " << len << endl;


	int res = strcmp(str1, str2);

	if (res == 0)

		cout << "Strings are equal" << endl;

	else

		cout << "Strings are unequal" << endl;

	cout << "Value returned by strcmp() is: " << res << endl;


	p = strchr(msg, 'i');
	cout << "strchr: " << p << endl;

	p = strrchr(msg, 'i');
	cout << "strrchr: " << p << endl;

}
