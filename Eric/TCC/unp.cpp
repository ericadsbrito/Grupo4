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
    nome = "";
    horariodisp = 0;
}

Professor::Professor(string nome, int horariodisp){
    this->nome = nome;
    this->horariodisp = horariodisp;
}

void Professor::set_nome(string nome){
    this->nome = nome;
}

void Professor::set_horariodisp(int horariodisp){
    this->horariodisp = horariodisp;
}

string Professor::get_nome(){
    return nome;
}

int Professor::get_horariodisp(){
    return horariodisp;
}
