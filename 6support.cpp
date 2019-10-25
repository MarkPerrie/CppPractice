#include <iostream>

extern int count;

void write_extern(void)
{
	std::cout << "Counter is " << count << std::endl;
}