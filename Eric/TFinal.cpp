#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Disciplina
{
	private:
		string nome;
		int ch;
		int tipoaula;
	public:
		void set_nome(string nome);
		void set_ch (int ch);
		void set_tipoaula(int tipoaula);
		
		string get_nome(){
			return nome;
		};
		int get_ch(){
			return ch;
		};
		int get_tipoaula(){
			return tipoaula;
		};
};

/*class Professor
{
	public:
		string nome;
		enum hordisponivel{manha, tarde, noite};
};*/

int CadastroDisciplinas(int x)
{
	string nome;
	int ch;
	int tipoaula;
	
	Disciplina disciplina[2];
	cout << "Digite o nome da disciplina: ";
	getline(cin, nome);
	disciplina[x].set_nome(nome);
	cout << "Digite a carga horaria da disciplina: ";
	cin >> ch;
	disciplina[x].set_ch(ch);
	if (ch == 80){ 
		cout << "Digite 1 para disciplina teorica ou 2 para essencialmente pratica: ";
		cin >> tipoaula;
		disciplina[x].set_tipoaula(tipoaula);
	}
	return 0;
}

int main()
{
	Disciplina disciplina[2];
//	TipoProfessor professor[2];
	int i;
	
	for (i=0; i<2; i++){
		CadastroDisciplinas(i);
	}
	
	cout << "\n\nLista de Disciplinas Cadastradas: \n\n";
	for (i=0; i<2; i++){
		cout << i+1 << " - " << disciplina[i].get_nome() << " - " << "Carga horaria: " << disciplina[i].get_ch() << ".\n";
	}	
	
	return 0;
}
