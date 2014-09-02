#include <iostream>
#include <cmath>
using namespace std;

/* float Zeros(float x1, float x2)
{
        x1 = ((-b^2)+sqrtD)/2*a;
        x2 = ((-b^2)-sqrtD)/2*a;

        return (x1, x2);
}*/

float Delta(float a, float b, float c)
{
    float D;

    D = pow(b, 2) - (4 * a * c);

    return(D);

}

int main()
{
   cout << "Estamos em main()\n";
   float a, b, c, D;
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
         }




    return 0;
}
