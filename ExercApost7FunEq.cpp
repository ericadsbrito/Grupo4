#include <iostream>
#include <cmath>
using namespace std;

float ZeroX1(float a, float b, float c, float D)    // Cria e declara uma função ZeroX1 com parametros.
{
        float x1;                                   // Cria e declara a variavel x1.
        x1 = (pow (-b,2) + sqrt(D))/2*a;            //Calcula x1.

        return (x1);
}
float ZeroX2(float a, float b, float c, float D)    // Cria e declara uma função ZeroX2 com parametros.
{
        float x2;                                   // Cria e declara a variavel x2.
        x2 = (pow (-b,2) - sqrt (D))/2*a;           // Calcula x2.

        return (x2);
 }
float Delta(float a, float b, float c)              // Cria e declara a função Delta com parametros.
{
    float D;                                        // Cria e declara a variavel que recebe o falor de Delta.

    D = pow(b, 2) - (4 * a * c);                    // Calcula Delta.

    return(D);

}

int main()
{
   cout << "Estamos em main()\n";                   // Mostra que nesse momento o programa está em main.
   float a, b, c, D, x1, x2;                        // Declara as variaveis que serão utilizada em main
                                                    // nas funções que serão chamadas.

                                                    // Recebe os valores das variaveis a, b e c.
   cout << "\n digite o valor a = ";
   cin >> a;
   cout << "\n digito o valor b = ";
   cin >> b;
   cout << "\n digite o valor c = ";
   cin >> c;

   D = Delta(a, b, c);                              // Chama a função Delta.

                                                    // Condiciona o programa so calcular raizes reais.
   if (D < 0)
       {
       cout << "As raizes nao sao reais";
        }

   else
        {
        cout << "\n de volta ao main";
        cout << "Delta = " << D;

        x1 = ZeroX1(a,b,c,D);                       // Chama a função ZeroX1 e mostra o seu valor na tela.
        cout << "Valor de x1 = \n" << x1;

        x2 = ZeroX2(a,b,c,D);                       // Chama a função Zero2 e mostra o seu valor na tela.
        cout << "Valor de x2 = \n" << x2;
         }




    return 0;
}
