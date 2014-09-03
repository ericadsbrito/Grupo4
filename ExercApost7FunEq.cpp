#include <iostream>
#include <cmath>
using namespace std;

float ZeroX1(float a, float b, float c, float D)
{
        float x1;
        x1 = (pow(-b,2)+sqrtD)/2*a;

        return (x1);
}
float ZeroX2(float a, float b, float c, float D)
{
        float x2;
        x2 = (pow(-b,2)-sqrtD)/2*a;

        return (x2);
 }
float Delta(float a, float b, float c)
{
    float D;

    D = pow(b, 2) - (4 * a * c);

    return(D);

}

int main()
{
   cout << "Estamos em main()\n";
   float a, b, c, D, x1, x2;
   cout << "\n digite o valor a = ";
   cin >> a;
   cout << "\n digito o valor b = ";
   cin >> b;
   cout << "\n digite o valor c = ";
   cin >> c;

   D = Delta(a, b, c);
   if (D <= 0)
       {
       cout << "As raizes nao sao reais";
        }
   else
        {
        cout << "\n de volta ao main";
        cout << "Delta = " << D;
        x1 = zerox1(a,b,c,D);
        cout << "Valor de x1 = " << x1;
        x2 = zerox2(a,b,c D);
        cout << "Valor de x2 = " << x2;
         }




    return 0;
}
