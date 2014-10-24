#include "Pessoa.h"
#include <iostream>
#include<string>
using namespace std;

int cadastrarPessoa(){
	cout << "\n\nvoce acessou a opcao de cadastro." << endl;
	return 0;
}

void buscarPessoa(){
}

void deletarPessoa(){
}

int main(){
    Pessoa pessoa[150];
    string nome;
    double telefone;
    int idade, num = 1;
    char sexo;
    cout << "LISTA TELEFONICA" << endl << endl;
    cout << "1 - Cadastrar contato;" << endl << "2 - Buscar contato;" << endl << "3 - Deletar contato" << endl << "4 - Sair" << endl << endl;
    cout << "Entre com a opcao desejada: ";
    while (num >= 1 && num <=4 ){
    cin >> num;
    switch (num) {
            case 1:
                cadastrarPessoa();
                break;
            case 2:
                buscarPessoa();
                break;
            case 3:
                deletarPessoa();
                break;
            case 4:
                break;
            default:
                cout << "Numero invalido.";
    }
	}
    getline(cin, nome);
    return 0;
}

