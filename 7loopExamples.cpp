#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	while(a < 20)
	{
		cout << "The value of a is " << a << endl;
		a++;
	}

	for(int counter = 0; counter < 50; counter++)
	{
		cout << "The value of counter is " << counter << endl;
	}

	for(int integer = 0; integer < 10; integer++) 
	{
		for(int decimal = 0; decimal < 10; decimal++)
		{
			cout << "The manual float is " << integer << "." << decimal << endl;
		}
	}

	return 0;
}