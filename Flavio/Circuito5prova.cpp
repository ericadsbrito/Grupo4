#include <iostream>

using namespace std;

float serie(float a, float b)
{
	return (a+b);
}

float paralelo(float a, float b)
{
	return (a*b)/(a+b);
}

int main()
{
	float r1,r2,r3,r4,r5;
	float rg,re,rc,rt;
	
	cout << "Digite o valor de r1: ";
	cin >> r1;
	
	cout << "Digite o valor de r2: ";
	cin >> r2;
	
	cout << "Digite o valor de r3: ";
	cin >> r3;
	
	cout << "Digite o valor de r4: ";
	cin >> r4;
	
	cout << "Digite o valor de r5: ";
	cin >> r5;
	
	
	rg = paralelo(r1,r2);
	re = serie(rg,r3);
	rc = paralelo(r4,r5);
	rt = serie(re,rc);
	
	cout << "A resistencia total desse circuito e': " << rt;
	
}
