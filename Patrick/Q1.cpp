// Malha de Resitores

#include <iostream>

using namespace std;

int serie (int a, int b, int c)
{ return (a+b+c);}

int paralelo (int a, int b)
{ return (a*b)/(a+b);}


int main ()

{

int r1,r2,r3,r4,r5,r6,ra,rb,rt;
string p1,p2,p3,p4,p5,p6;

p1:
cout << "Digite o valor de R1: ";
cin >> r1;
if (r1<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p1;}

p2:
cout << "Digite o valor de R2: ";
cin >> r2;
if (r2<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p2;}

p3:
cout << "Digite o valor de R3: ";
cin >> r3;
if (r3<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p3;}

p4:
cout << "Digite o valor de R4: ";
cin >> r4;
if (r4<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p4;}

p5:
cout << "Digite o valor de R5: ";
cin >> r5;
if (r5<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p5;}

p6:
cout << "Digite o valor de R6: ";
cin >> r6;
if (r6<=0){
cout << "Digite um valor maio que zero"<< "\n";
goto p6;}

ra = serie(r4,r5,r6);
rb = paralelo(r2,ra);
rt = serie(r1,r2,rb);


cout << "Rt= "<< rt << "\n";
return 0;

}
