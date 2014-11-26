#include<unp.h>
#include<iostream>
#include<string>
using namespace std;

    Disciplina disciplina[150];
    Professor professor[100];

void CadastroDisciplinas(){
    string nome;
    int ch=1;
    int tipo;
    int pos;
    int ok = 1;
    string end = "y";
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nCADASTRAMENTO DE DISCIPLINAS\n\n";
    do {
        for (int i = 0; ch != 0; i++){
            ch = disciplina[i].get_ch();
            if (ch == 0){
                pos = i;
            }
        }
        do{
            cout << "Digite o nome da disciplina: ";
            cin.ignore();
            getline(cin, nome);
            for (int i = 0; i <= pos; i++){
                if (nome == disciplina[i].get_nome()){
                    cout << "\nDisciplina ja cadastrada.";
                    ok = 0;
                } else{
                    ok = 1;
                }
            }
        } while (ok != 1);
        disciplina[pos].set_nome(nome);
        cout << "Digite a carga horaria da disciplina: ";
        cin >> ch;
        disciplina[pos].set_ch(ch);
        if (ch == 80){
            do{
                cout << "Digite o tipo de disciplina: 1 para TEORICA ou 2 para TEORICA + PRATICA: ";
                cin >> tipo;
                if (tipo == 1 || tipo == 2){
                    disciplina[pos].set_tipoaula(tipo);
                } else {
                    cout << "Entrada invalida.\n";
                }
            } while (tipo != 1 && tipo != 2);
        }
        do{
        cout << "Deseja cadastrar mais alguma disciplina? [S/N]: ";
        cin >> end;
        if (end != "s" && end != "n" && end != "S" && end != "N"){
            cout << "Opcao invalida.\n";
        } else {
            cout << "\n";
        }
        } while (end != "s" && end != "n" && end != "S" && end != "N");
    } while (end == "S" || end == "s");
    system("cls");
}

void ListarDisciplinas(){
    char qc;
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nLISTA DE DISCIPLINAS CADASTRADAS\n\n";
    for (int i = 0; i < 150; i++){
        if (disciplina[i].get_nome() != ""){
            cout << i+1 << " - " << disciplina[i].get_nome() << " - Carga Horaria: " << disciplina[i].get_ch() << "hrs";
            if (disciplina[i].get_ch()==80){
                if (disciplina[i].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else if (disciplina[i].get_tipoaula() == 2){
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
        } else {
            break;
        }
    }
    cout << "\n\nTecle [ENTER] para voltar ao menu de disciplinas.\n\n";
    cin >> qc;
    cin.ignore();
    system("cls");
    }

void AlterarDisciplinas(){
    string nome;
    int opcao, ch, tipo;
    int ok;
    int cont = 0;
    int pos = -1;
    system("cls");
    do {
        pos = -1;
        cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE DISCIPLINAS\n";
        cout << "\nDigite o nome da disciplina que quer alterar: ";
        cin.ignore();
        getline(cin, nome);
        for (int i=0; disciplina[i].get_nome() != ""; i++){
            if (nome == disciplina[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDisciplina nao encontrada. Cadastre-a na opcao 1 do menu de disciplinas.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                cont = 1;
                system("cls");
                break;
            case 2:
                cont = 0;
                break;
            default:
                do{
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
                    cout << "\n\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 2){
                        break;
                    } else {
                        cont = 1;
                    }
                } while (cont == 1);
            }
        } else {
            cout << "\nDisciplina encontrada.\n";
            cout << pos+1 << " - " << disciplina[pos].get_nome() << " - Carga Horaria: " << disciplina[pos].get_ch() << "hrs";
            if (disciplina[pos].get_ch()==80){
                if (disciplina[pos].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else {
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
            cout << "\nDeseja alterar os dados dessa disciplina?\n1 - Sim;\n2 - Nao. Buscar nova disciplina;\n3 - Nao. Voltar ao menu de disciplinas.";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                do{
                    ok = -1;
                    cout << "\nDigite o novo nome da disciplina: ";
                    cin.ignore();
                    getline(cin, nome);
                    cout << nome << " " << ok << endl;
                    for (int i = 0; i < 150; i++){
                        if (nome == disciplina[i].get_nome()){
                            ok = ok+1;
                            cout << nome << " " << disciplina[i].get_nome() << " " << ok << endl;
                        }
                    }
                    if (ok > -1){
                        cout << "\nDisciplina ja cadastrada.";
                        cin.ignore();
                    }
                } while (ok >= 0);
                disciplina[pos].set_nome(nome);
                cout << "Digite a carga horaria da disciplina: ";
                cin >> ch;
                disciplina[pos].set_ch(ch);
                if (ch == 80){
                    do{
                        cout << "Digite o tipo de disciplina: 1 para TEORICA ou 2 para TEORICA + PRATICA: ";
                        cin >> tipo;
                        if (tipo == 1 || tipo == 2){
                            disciplina[pos].set_tipoaula(tipo);
                        } else {
                            cout << "Entrada invalida.\n";
                        }
                    } while (tipo != 1 && tipo != 2);
                }
                system("cls");
                cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE DISCIPLINAS\n";
                cout << "\nDisciplina alterada com sucesso. ";
                do{
                    cout << "\n\nEscolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 2){
                        break;
                    } else {
                        if (opcao == 1){
                            cont = 0;
                        } else {
                            cont = 1;
                        }
                    }
                } while (cont == 1);
            case 2:
                system("cls");
                cont = 1;
                break;
            case 3:
                cont = 0;
                break;
            }
        }
    }while (cont == 1);
}

void ExcluirDisciplinas(){
    string nome;
    int opcao;
    int cont = 0;
    int pos = -1;
    system("cls");
    do {
        pos = -1;
        cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE DISCIPLINAS\n";
        cout << "\nDigite o nome da disciplina que quer excluir: ";
        cin.ignore();
        getline(cin, nome);
        for (int i=0; i <= 149; i++){
            if (nome == disciplina[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDisciplina nao encontrada.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                cont = 1;
                system("cls");
                break;
            case 2:
                cont = 0;
                break;
            default:
                do{
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
                    cout << "\n\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 2){
                        break;
                    } else {
                        cont = 1;
                    }
                } while (cont == 1);
            }
        } else {
            cout << "\nDisciplina encontrada.\n";
            cout << pos+1 << " - " << disciplina[pos].get_nome() << " - Carga Horaria: " << disciplina[pos].get_ch() << "hrs";
            if (disciplina[pos].get_ch()==80){
                if (disciplina[pos].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else {
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
            cout << "\nDeseja excluir esta disciplina?\n1 - Sim;\n2 - Nao. Buscar nova disciplina;\n3 - Nao. Voltar ao menu de disciplinas.";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                disciplina[pos].set_nome("");
                disciplina[pos].set_ch(0);
                disciplina[pos].set_tipoaula(0);
                system("cls");
                cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE DISCIPLINAS\n";
                cout << "\nDisciplina excluida com sucesso. ";
                do{
                    cout << "\n\nEscolha a opcao desejada: \n1 - Buscar nova disciplina;\n2 - Voltar ao menu de disciplinas.\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 2){
                        break;
                    } else {
                        if (opcao == 1){
                            cont = 0;
                        } else {
                            cont = 1;
                        }
                    }
                } while (cont == 1);
            case 2:
                system("cls");
                cont = 1;
                break;
            case 3:
                cont = 0;
                break;
            }
        }
    }while (cont == 1);
}

int menudiscip(){
    int opcao;
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nMENU DE DISCIPLINAS\n\n";
    cout << "1 - Cadastrar disciplina;\n2 - Listar disciplinas;\n3 - Alterar cadastro de disciplina;\n4 - Excluir disciplina;\n5 - Voltar ao menu anterior.\n\n";
    cout << "Entre com a opcao desejada: ";
    cin >> opcao;
    return opcao;
}

int menuinit(){
    int opcao;
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nMENU INICIAL\n\n";
    cout << "Escolha qual informacao deseja manipular: \n\n1 - Disciplinas\n2 - Professores\n3 - Sair do programa\n\n";
    cout << "Entre com a opcao desejada: ";
    cin >> opcao;
    return opcao;
}

int main(){

    char opcaodiscip, opcaoinit;

    do{
        opcaoinit = menuinit();
        switch (opcaoinit){
        case 1:
            do {
                opcaodiscip = menudiscip();
                switch (opcaodiscip){
                case 1:
                    CadastroDisciplinas();
                    break;
                case 2:
                    ListarDisciplinas();
                    break;
                case 3:
                    AlterarDisciplinas();
                    break;
                case 4:
                    ExcluirDisciplinas();
                    break;
                case 5:
                    system("cls");
                    break;
                default:
                    system("cls");
                    break;
                }
            } while (opcaodiscip != 5);
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cls");
            cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nPROGRAMA FINALIZADO\n\n";
            cout << "Adams Technology Corporation, 2014. Todos os direitos reservados.\n\n\n\n";
            break;
        default:
            system("cls");
        }
    } while (opcaoinit != 3);
    return 0;
}
