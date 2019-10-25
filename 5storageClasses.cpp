#include <iostream>
using namespace std;

static int counter = 10; //a static global variable means the scope of the global variable is limited to the only the file in which it is declared
void staticShowOff(void);

int main()
{
	while(counter--)
	{
		staticShowOff();
	}

	return 0;
}

void staticShowOff(void)
{
	static int i = 0; //declaring a varible to be static within a function means it will not be deleted when that function is not longer being called
	int j = 0; //so i will increment to 10 while j will only be added up to 1 where it is deleted and reinitialized later. 
	j++;
	i++;
	cout << "i is equal to: " << i << " while j is equal to: " << j << " and counter is equal to: " << counter << endl;
}