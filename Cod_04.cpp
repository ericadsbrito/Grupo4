#include <cstdlib>
#include <iostream>
using namespace std;
int dobrar_numero(int numero)
{
        return numero*2;
}
int main(void)
{
    int matriz[5][4];
    for (int x=1; x<=5; x++){
        for (int y=1; y<=4; y++){
            cout << "Popule o matriz na posição "<< x <<"|"<< y <<" da matriz: ";
            cin >> matriz[x][y];
    }

    for (int x=1; x<=5; x++)
        vetor[x]=dobrar_numero(vetor[x]);

    for (int x=1; x<=5; x++)
        cout << "vetor["<<x<<"]:" << vetor[x] << endl;

    system("pause");
    return 0;
}
