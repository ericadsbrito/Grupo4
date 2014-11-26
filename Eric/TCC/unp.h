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
    bool horariomanha;
    bool horariotarde;
    bool horarionoite;
public:
    Professor();
    Professor(string nome, bool horariomanha, bool horariotarde, bool horarionoite);
    void set_nome(string nome);
    void set_horariomanha(bool horariomanha);
    void set_horariotarde(bool horariotarde);
    void set_horarionoite(bool horarionoite);
    string get_nome();
    bool get_horariomanha();
    bool get_horariotarde();
    bool get_horarionoite();
};

#endif // UNP_H
