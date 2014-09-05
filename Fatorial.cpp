#include <cstdlib>
#include <iostream>

using namespace std;

//! Função que calcula o fatorial de um dado número.

/*!
    Esta função recebe como parâmetro um número e retorna o seu fatorial.
    \param num Numero a ser calculado o fatorial.
*/ 

double factorial (int num)
{
	if (num < 1)
	    return 1;
	else
	    return num * factorial(num - 1);    
}

/*!
    Recebe nenhum parametro e imprimo o fatorial do numero digitado.
    \sa factorial (int num)
*/  

int main()
{
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	cout << "O fatorial de " << num << " e' " << factorial(num) << endl;
	
	return 0;
	system ("pause");
}
