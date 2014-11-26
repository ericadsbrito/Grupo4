#ifndef UNP_H
#define UNP_H
#include <iostream>
#include <string>
using namespace std;

class Disciplina{
private:
    string nome;
    int ch;
    int tipoaula;
    int periodo;
public:
    Disciplina();
    Disciplina(string nome, int ch, int tipoaula);
    void set_nome(string nome);
    void set_ch(int ch);
    void set_tipoaula(int tipoaula);
    void set_periodo(int periodo);
    string get_nome();
    int get_ch();
    int get_tipoaula();
    int get_periodo();
};

class Professor{
private:
    string nome;
    int horariodisp;
public:
    Professor();
    Professor(string nome, int horariodisp);
    void set_nome(string nome);
    void set_horariodisp(int horariodisp);
    string get_nome();
    int get_horariodisp();
};

#endif // UNP_H
