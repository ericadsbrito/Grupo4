#include <unp.h>
#include <iostream>
#include <string>
using namespace std;

Disciplina::Disciplina(){
    nome = "";
    ch = 0;
    tipoaula = 0;
}

Disciplina::Disciplina(string nome, int ch, int tipoaula){
    this->nome = nome;
    this->ch = ch;
    this->tipoaula = tipoaula;
}

void Disciplina::set_nome(string nome){
    this->nome = nome;
}

void Disciplina::set_ch(int ch){
    this->ch = ch;
}

void Disciplina::set_tipoaula(int tipoaula){
    this->tipoaula = tipoaula;
}

void Disciplina::set_periodo(int periodo){
    this->periodo = periodo;
}

string Disciplina::get_nome(){
    return nome;
}

int Disciplina::get_ch(){
    return ch;
}

int Disciplina::get_tipoaula(){
    return tipoaula;
}

int Disciplina::get_periodo(){
    return periodo;
}

Professor::Professor(){
    nome = " ";
    horariomanha = false;
    horariotarde = false;
    horarionoite = false;
}

Professor::Professor(string nome, bool horariomanha, bool horariotarde, bool horarionoite){
    this->nome = nome;
    this->horariomanha = horariomanha;
    this->horariotarde = horariotarde;
    this->horarionoite = horarionoite;

}

void Professor::set_nome(string nome){
    this->nome = nome;
}

void Professor::set_horariomanha(bool horariomanha){
    this->horariomanha = horariomanha;
}

void Professor::set_horariotarde(bool horariotarde){
    this->horariotarde = horariotarde;
}

void Professor::set_horarionoite(bool horarionoite){
    this->horarionoite = horarionoite;
}

string Professor::get_nome(){
    return nome;
}

bool Professor::get_horariomanha(){
    return horariomanha;
}

bool Professor::get_horariotarde(){
    return horariotarde;
}

bool Professor::get_horarionoite(){
    return horarionoite;
}
