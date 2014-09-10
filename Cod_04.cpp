#include <cstdlib>
#include <iostream>
using namespace std;
int dobrar_numero(int numero)
{
        return numero*2;
}
int main(void)
{
    int vetor[5];
    for (int x=1; x<=5; x++){
        cout << "Valor para a posicao " << x << " da matriz: ";
        cin >> vetor[x];
    }

    for (int x=1; x<=5; x++)
        vetor[x]=dobrar_numero(vetor[x]);

    for (int x=1; x<=5; x++)
        cout << "vetor["<<x<<"]:" << vetor[x] << endl;

    system("pause");
    return 0;
}
