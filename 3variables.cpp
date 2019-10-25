#include <iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;
	float f;

	//a = 10;
	//b = 20;
	//c = a + b;
	cout << c << endl;

	f = 70.0/3.0;
	cout << f << endl;
}