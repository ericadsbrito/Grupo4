#include "metodoestatico.h"
//---------------------------------------------------------Arquivo main.cpp
int main ()
{
string linha = "--------------------------------------------------------------\n";
 cout << "Entre com o numero de alunos da disciplina (ex =3):";
int numeroAlunos;
 cin >> numeroAlunos;
cin.get ();
//Cria um objeto do tipo TPessoa com nome professor
TPessoa professor;
//Cria um vetor de objetos alunos do tipo TPessoa
vector < TPessoa > aluno ( numeroAlunos);
cout << "Entre com o nome do professor: ";
getline (cin, professor.nome);
cout << "Entre com a matricula do professor: ";
getline (cin, professor.matricula);
for (int contador = 0; contador < aluno.size (); contador++)
{
cout << "Aluno " << contador << endl;
aluno[contador].Entrada ();
}

cout << linha;
cout << "RELACAO DE PROFESSORES E ALUNOS : " << endl;
cout << linha;
cout << "Nome do professor: " << professor.nome << "\n";
cout << "Matricula : " << professor.matricula << "\n";
for (int contador = 0; contador < aluno.size (); contador++)
{
cout << linha;
cout << "Aluno " << contador << endl;
aluno[contador].Saida ();
}
cin.get ();
return 0;
}
