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
    for (int x=1; x<=5; x++)
    {
        for (int y=1; y<=4; y++)
        {
            cout << "Popule o matriz na posicao "<< x <<"|"<< y <<" da matriz: ";
            cin >> matriz[x][y];
        }
    }

    for (int x=1; x<=5; x++)
    {
        for (int y=1; y<=4; y++)
        {
            matriz[x][y]=dobrar_numero(matriz[x][y]);
        }
    }

    for (int x=1; x<=5; x++)
    {
        for (int y=1; y<=4; y++)
        {
            cout << "Matriz[ "<< x <<"|"<< y <<"]= "<<matriz[x][y]<<endl;
        }
    system("pause");
    return 0;
    }
}
