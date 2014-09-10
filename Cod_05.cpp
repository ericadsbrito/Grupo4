#include <iostream>

using namespace std;

int main ()
{
    int mt1 [3][2];
    cout << "Digite a matriz 1:" << endl;
    for(int linha=0; linha < 3; linha++)
        for(int coluna=0; coluna < 2; coluna++)
            cin >> mt1[linha][coluna];


    for (int linha=0; linha < 3; linha++)
    {
        for(int coluna=0; coluna < 2; coluna++)
            cout << mt1[linha][coluna] << " ";
        cout << endl;
    }
    cout << endl;

    int mt2 [2][3];

    cout << "Digite a matriz 2:" << endl;
    for(int linha=0; linha < 2; linha++)
        for(int coluna=0; coluna < 3; coluna++)
            cin >> mt2[linha][coluna];

    for (int linha=0; linha < 2; linha++)
    {
        for(int coluna=0; coluna < 3; coluna++)
            cout << mt2[linha][coluna] << " ";
        cout << endl;
    }
    cout << endl;

    cout << "resultado da matriz Resultante" << endl;

    int mtRES[3][3];

    /*Zera a matriz resultado */
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mtRES[i][j] = 0;

    /*agora a multiplicação das duas*/
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 2; k++)
                mtRES[i][j] += mt1[i][k]*mt2[k][j];

    for(int linha=0; linha < 3; linha++)
    {
        for(int coluna=0;coluna<3;coluna++)
            cout << mtRES[linha][coluna] << " ";
        cout << endl;
    }
    return 0;
}
