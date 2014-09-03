#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "\nDigite um numero: ";
    cin >> numero;
    cout << endl;

    cout << "\nOs divisores de "<< numero << " sao : \n\n";

    for(int i = numero; i != 0; i--)
    {
        if(numero % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;

}
