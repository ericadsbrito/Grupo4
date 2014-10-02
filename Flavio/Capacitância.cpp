#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double t,v=12,r=100*pow(10,3),c=100*pow(10,-6),vc;
	
	
	for(int t = 0; t <= 5*(r*c); t+=(r*c/10))
	{
		vc = v*(1-exp(-t/(r*c)));
		cout << vc << " \n ";
	}
	
	return 0;
	
}
