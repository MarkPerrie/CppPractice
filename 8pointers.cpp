#include <iostream>
using namespace std;

int main()
{
	int var1; 
	int var2[10];

	cout << "Address of var1 is: " << &var1 << endl; //prints the location of the int varaible 
	cout << "Address of var2 is: " << &var2 << endl << endl; //prints the location of the first element in the array

	int testVaraible = 20;
	int *testPointer;

	testPointer = &testVaraible;

	cout << "Content of test varaible is: " << testVaraible << endl; //this will simply print what's stored in testVaraible 
	cout << "Storage location of test varaible is " << &testVaraible << endl << endl; //this will print the location testVaraible is stored

	cout << "Content of test pointer is: " << testPointer << endl; //this will print the contents of testPoint which is testVariable's location
	cout << "Content stored in the location stored in test pointer is: " << *testPointer << endl; //finally this prints the contents stored in the location stored in the pointer varaible

	return 0;
}