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
	float r1,r2,r3,r4,r5,r6;
	float rg,re,rc,rd,rt;
	
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
	
	cout << "Digite o valor de r6: ";
	cin >> r6;
	
	rg = serie(r5,r6);
	re = serie(rg,r4);
	rc = paralelo(re,r3);
	rd = serie(rc,r2);
	rt = serie(rd,r1);
	
	cout << "A resistencia total desse circuito e': " << rt;
	
}
