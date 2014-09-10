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
