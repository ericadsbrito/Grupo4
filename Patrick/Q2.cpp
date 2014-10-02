// Capacitancia
// Rc = constante de tempo
// 5Rc = tempo de carga do capacitor
// v=(1-exp(t(r*c)))

#include <iostream>
#include <cmath>

using namespace std;


int main ()

{
double c, r, e, t, vc;
string p1, p2, p3;
// double c=100*pow(10,-6), r=100*pow(10,3), t, v=12, vc;

p1:
cout << "Digite o valor de C: ";
cin >>r;
if (c<=0){
cout << "Digite um valor maior que zero"<< "\n";
goto p1;}

p2:
cout << "Digite o valor de R: ";
cin >>r;
if (r<=0){
cout << "Digite um valor maior que zero"<< "\n";
goto p2;}

p3:
cout << "Digite o valor de E: ";
cin >>r;
if (e<=0){
cout << "Digite um valor maior que zero"<< "\n";
goto p3;}

for (t=0; t<=(5*(r*c)); t+=(1/(r*c)))
{
        vc=e*(1-exp(-t/(r*c)));
        cout << vc << "\n";
}

return 0;

}
