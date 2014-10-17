#include "metodoestatico.h"

using namespace std;

void TPessoa::Entrada ()
{

cout << "Entre com o nome do aluno: ";
getline (cin, nome);

cout << "Entre com a matricula do aluno: ";
getline (cin, matricula);

cout << "Entre com o IAA do aluno: ";
cin >> iaa;

cin.get ();

}
void TPessoa::Saida () const
{
cout << "Nome do aluno: " << nome << endl;
cout << "Matricula : " << matricula << endl;
cout << "iaa : " << iaa << endl;
}
