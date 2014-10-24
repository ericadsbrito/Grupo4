#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
using namespace std;

class Pessoa{
private:
    string nome;
    double telefone;
    int idade;
    char sexo;

public:
    Pessoa();
    Pessoa(string nome, double telefone, int idade, char sexo);
    void set_nome(string x);
    void set_telefone(double telefone);
    void set_idade(int idade);
    void set_sexo(char sexo);

    string get_nome();
    double get_telefone();
    int get_idade();
    char get_sexo();
};

#endif // PESSOA_H

