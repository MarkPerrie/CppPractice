#include <iostream>
using namespace std;

int main()
{
	int i; 
	double d;

	int& r = i; //a reference contains the same data and points to the same data location as the varaible it references 
	double& a = d;

	i = 5;
	cout << "The value of i is: " << i << endl;
	cout << "The location of i is: " << &i << endl;
	cout << "The value of r, the i reference, is: " << r << endl;
	cout << "The location of r, the i reference, is: " << &r << endl;

	i++;
	cout << "The value of i is: " << i << endl;
	cout << "The location of i is: " << &i << endl;
	cout << "The value of r, the i reference, is: " << r << endl;
	cout << "The location of r, the i reference, is: " << &r << endl;
		

	d = 11.2;
	cout << "The value of d is: " << d << endl;
	cout << "The location of d is: " << &d << endl;
	cout << "The value of a, the d reference, is: " << a << endl;
	cout << "The location of a, the d reference, is: " << &a << endl;
	
	return 0;
}