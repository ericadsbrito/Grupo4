// ---------------------------------------------------------Arquivo TAluno.h
// ---------------------------------------------------------Bibliotecas C/C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ---------------------------------------------------------Classe
/*
A classe TPessoa representa uma pessoa (um aluno ou um professor)
de uma universidade.
Tem um nome, uma matricula e um IAA.
E métodos básicos para entrada e saída de dados.
*/
class TPessoa
{
// ---------------------------------------------------------Atributos
public:
std::string nome;
std::string matricula;
float iaa;
private:
static int numeroAlunos;
public:
// ---------------------------------------------------------Métodos
//Método do objeto , altera as propriedades do objeto
//Leitura dos atributos (nome, matricula)
void Entrada ();
//Saida dos atributos ( nome, matricula, iaa)
void Saida () const;
//Um método estático só pode alterar atributos estáticos
static int GetnumeroAlunos ()
{
return numeroAlunos;
}
};
