//increaser

#include <iostream>
using namespace std;

void increase (void* data, int psize)
{
	if (psize == sizeof(char))
	{char* pchar; pchar=(char*)data; ++(*pchar);}
	else if (psize == sizeof(int))
	{int* pint; pint=(int*)data; ++(*pint);}
}
