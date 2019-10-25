#include <iostream>
using namespace std;

const int MAX = 5;

int main()
{
	int array[MAX] = {5, 10, 20, 40, 80};
	int *pointer;

	pointer = array;

	for(int counter = 0; counter < MAX; counter++)
	{
		cout << "The location of array[" << counter << "] is: ";
		cout << pointer << endl;

		cout << "The value of array[" << counter << "] is: ";
		cout << *pointer << endl;

		pointer++;
	}

	return 0;
}