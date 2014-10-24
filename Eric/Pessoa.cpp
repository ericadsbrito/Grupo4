#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa(){
    nome = "";
    telefone = 0;
    idade = 0;
}

Pessoa::Pessoa(string nome, double telefone, int idade, char sexo){
    this->nome = nome;
    this->telefone = telefone;
    this->idade = idade;
    this->sexo = sexo;
}

void Pessoa::set_nome(string nome){
    this->nome = nome;
}
void Pessoa::set_telefone(double telefone){
    this->telefone = telefone;
}
void Pessoa::set_idade(int idade){
    this->idade = idade;
}
void Pessoa::set_sexo(char sexo){
    this->sexo = sexo;
}


string Pessoa::get_nome(){
    return nome;
}
double Pessoa::get_telefone(){
    return telefone;
}
int Pessoa::get_idade(){
    return idade;
}
char Pessoa::get_sexo(){
    return sexo;
}

