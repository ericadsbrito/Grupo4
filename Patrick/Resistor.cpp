// Malha de Resitores

#include <iostream>

using namespace std;

int serie (int a, int b)
{ return (a+b);}

int paralelo (int a, int b)
{ return (a*b)/(a+b);}


int main ()

{

int r1,r2,r3,r4,r5;

r1 = paralelo(80, 80);
r2 = serie(r1, 60);
r3 = paralelo(r2,100);
r4 = serie(r3,150);
r5 = paralelo(r4,200);

cout << "Rt= "<< r5 << "\n";
return 0;

}
