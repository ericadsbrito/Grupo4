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
            for (int i = 0; i < 150; i++){
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
            cout << " * " << disciplina[i].get_nome() << " - Carga Horaria: " << disciplina[i].get_ch() << "hrs";
            if (disciplina[i].get_ch()==80){
                if (disciplina[i].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else if (disciplina[i].get_tipoaula() == 2){
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
        }
    }
    cout << "\n\nDigite qualquer caractere e aperte [ENTER] para voltar ao menu de disciplinas.\n\n";
    cin >> qc;
    cin.ignore();
    system("cls");
    }

void AlterarDisciplinas(){
    string nome, novonome;
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
        for (int i=0; i < 150; i++){
            if (nome == disciplina[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDisciplina nao encontrada. Cadastre-a na opcao 1 do menu de disciplinas.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
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
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
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
            cout << " * " << disciplina[pos].get_nome() << " - Carga Horaria: " << disciplina[pos].get_ch() << "hrs";
            if (disciplina[pos].get_ch()==80){
                if (disciplina[pos].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else {
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
            cout << "\nDeseja alterar os dados dessa disciplina?\n1 - Sim\n2 - Nao. Buscar nova disciplina\n3 - Nao. Voltar ao menu de disciplinas";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                ok = -1;
                cout << "\nDigite o novo nome da disciplina: ";
                cin.ignore();
                getline(cin, novonome);
                for (int i = 0; i < 150; i++){
                    if (novonome == disciplina[i].get_nome() && novonome != nome){
                        ok = ok+1;
                    }
                }
                if (ok == -1){
                    disciplina[pos].set_nome(novonome);
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
                    cout << "\nDisciplina alterada com sucesso.\n\n";
                } else {
                    system("cls");
                    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE DISCIPLINAS\n";
                    cout << "\nDisciplina ja cadastrada, nome em uso.\n\n";
                }
                do{
                    cout << "Escolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 1){
                        cont = 1;
                        system("cls");
                    } else {
                        if (opcao == 2){
                            cont = 0;
                        } else {
                            cout << "\nOpcao invalida. ";
                            cont = 3;
                        }
                    }
                } while (cont == 3);
                break;
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
        cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nEXCLUSAO DE DISCIPLINAS\n";
        cout << "\nDigite o nome da disciplina que quer excluir: ";
        cin.ignore();
        getline(cin, nome);
        for (int i=0; i < 150; i++){
            if (nome == disciplina[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDisciplina nao encontrada.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
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
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
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
            cout << " * " << disciplina[pos].get_nome() << " - Carga Horaria: " << disciplina[pos].get_ch() << "hrs";
            if (disciplina[pos].get_ch()==80){
                if (disciplina[pos].get_tipoaula() == 1){
                    cout << ". Disciplina somente teorica.\n";
                } else {
                    cout << ". Disciplina teorica e pratica.\n";
                }
            } else {
                cout << ".\n";
            }
            cout << "\nDeseja excluir esta disciplina?\n1 - Sim\n2 - Nao. Buscar nova disciplina\n3 - Nao. Voltar ao menu de disciplinas";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                disciplina[pos].set_nome("");
                disciplina[pos].set_ch(0);
                disciplina[pos].set_tipoaula(0);
                system("cls");
                cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nEXCLUSAO DE DISCIPLINAS\n";
                cout << "\nDisciplina excluida com sucesso.\n\n";
                do{
                    cout << "Escolha a opcao desejada: \n1 - Buscar nova disciplina\n2 - Voltar ao menu de disciplinas\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 1){
                        cont = 1;
                        system("cls");
                    } else {
                        if (opcao == 2){
                            cont = 0;
                        } else {
                            cout << "\nOpcao invalida. ";
                            cont = 3;
                        }
                    }
                } while (cont == 3);
                break;
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

void CadastroProfessores(){
    string nome;
    int hora=0;
    int pos = 0;
    int ok = 1;
    string end = "y";
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nCADASTRAMENTO DE DOCENTES\n\n";
    do {
        for (int i = 0; nome != " "; i++){
            nome = professor[i].get_nome();
            if (nome != ""){
                pos = i;
            }
        }
        do{
            cout << "Digite o nome do docente: ";
            cin.ignore();
            getline(cin, nome);
            for (int i = 0; i < 100; i++){
                if (nome == professor[i].get_nome()){
                    cout << "\nDocente ja cadastrado.";
                    ok = 0;
                } else{
                    ok = 1;
                }
            }
        } while (ok != 1);
        professor[pos].set_nome(nome);
        cout << "\nDigite 1 para SIM e 0 para NAO:" << endl;
        cout << "Tem disponibilidade no turno da manha? ";
        cin >> hora;
        if (hora == 1){
            professor[pos].set_horariomanha(true);
        }
        cout << "Ha disponibilidade no turno da tarde? ";
        cin >> hora;
        if (hora == 1){
            professor[pos].set_horariotarde(true);
        }
        cout << "Ha disponibilidade no turno da noite? ";
        cin >> hora;
        if (hora == 1){
            professor[pos].set_horarionoite(true);
        }
        do{
        cout << "Deseja cadastrar mais algum professor? [S/N]: ";
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

void ListarProfessores(){
    char qc;
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nLISTA DE DOCENTES CADASTRADOS\n\n";
    for (int i = 0; i < 100; i++){
        if (professor[i].get_nome() != " "){
            cout << " * Docente: " << professor[i].get_nome() << "\nHorarios disponiveis:";
            if (professor[i].get_horariomanha() == true){
                cout << " - MANHA";
            }
            if (professor[i].get_horariotarde() == true){
                cout << " - TARDE";
            }
            if (professor[i].get_horarionoite() == true){
                cout << " - NOITE";
            }
            cout << ".\n\n";
        }
    }
    cout << "\n\nDigite qualquer caractere e aperte [ENTER] para voltar ao menu de docentes.\n\n";
    cin >> qc;
    cin.ignore();
    system("cls");
}

void AlterarProfessores(){
    string nome, novonome;
    int opcao, hora, ok;
    int cont = 0;
    int pos;
    system("cls");
    do {
        pos = -1;
        cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE PROFESSORES\n";
        cout << "\nDigite o nome do docente que deseja fazer alteracao de dados: ";
        cin.ignore();
        getline(cin, nome);
        for (int i=0; i < 100; i++){
            if (nome == professor[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDocente nao encontrado. Cadastre-o na opcao 1 do menu de professores.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar novo docente\n2 - Voltar ao menu de docentes\n";
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
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar novo docente\n2 - Voltar ao menu de docentes\n";
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
            cout << "\nDocente encontrado.\n";
            cout << " * Docente: " << professor[pos].get_nome() << "\nHorarios disponiveis:";
            if (professor[pos].get_horariomanha() == true){
                cout << " - MANHA";
            }
            if (professor[pos].get_horariotarde() == true){
                cout << " - TARDE";
            }
            if (professor[pos].get_horarionoite() == true){
                cout << " - NOITE";
            }
            cout << ".\n";
            cout << "\nDeseja alterar esses dados?\n1 - Sim\n2 - Nao. Buscar novo docente\n3 - Nao. Voltar ao menu de docentes";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                ok = -1;
                cout << "\nDigite o novo nome: ";
                cin.ignore();
                getline(cin, novonome);
                for (int i = 0; i < 100; i++){
                    if (novonome == professor[i].get_nome() && novonome != nome){
                        ok = ok+1;
                    }
                }
                if (ok == -1){
                    professor[pos].set_nome(novonome);
                    cout << "\nDigite 1 para SIM e 0 para NAO:" << endl;
                    cout << "Tem disponibilidade no turno da manha? ";
                    cin >> hora;
                    if (hora == 1){
                        professor[pos].set_horariomanha(true);
                    }
                    cout << "Ha disponibilidade no turno da tarde? ";
                    cin >> hora;
                    if (hora == 1){
                        professor[pos].set_horariotarde(true);
                    }
                    cout << "Ha disponibilidade no turno da noite? ";
                    cin >> hora;
                    if (hora == 1){
                        professor[pos].set_horarionoite(true);
                    }
                    system("cls");
                    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE PROFESSORES\n";
                    cout << "\nDados alterados com sucesso.\n\n";
                } else {
                    system("cls");
                    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nALTERACAO DE CADASTRO DE PROFESSORES\n";
                    cout << "\nDocente ja cadastrado, nome em uso.\n\n";
                }
                do{
                    cout << "Escolha a opcao desejada: \n1 - Buscar novo docente\n2 - Voltar ao menu de docentes\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 1){
                        cont = 1;
                        system("cls");
                    } else {
                        if (opcao == 2){
                            cont = 0;
                        } else {
                            cout << "\nOpcao invalida. ";
                            cont = 3;
                        }
                    }
                } while (cont == 3);
                break;
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

void ExcluirProfessores(){
    string nome;
    int opcao;
    int cont = 0;
    int pos = -1;
    system("cls");
    do {
        pos = -1;
        cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nEXCLUSAO DE DADOS DE DOCENTES\n";
        cout << "\nDigite o nome do docente que quer excluir: ";
        cin.ignore();
        getline(cin, nome);
        for (int i=0; i < 100; i++){
            if (nome == professor[i].get_nome()){
                pos = i;
            }
        }
        if (pos == -1){
            cout << "\nDocente nao encontrado.\n";
            cout << "\nEscolha a opcao desejada: \n1 - Buscar novo professor\n2 - Voltar ao menu de docentes\n";
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
                    cout << "\nOpcao invalida. Escolha a opcao desejada: \n1 - Buscar novo professor\n2 - Voltar ao menu de docentes\n";
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
            cout << "\nDocente encontrado.\n";
            cout << " * Docente: " << professor[pos].get_nome() << "\nHorarios disponiveis:";
            if (professor[pos].get_horariomanha() == true){
                cout << " - MANHA";
            }
            if (professor[pos].get_horariotarde() == true){
                cout << " - TARDE";
            }
            if (professor[pos].get_horarionoite() == true){
                cout << " - NOITE";
            }
            cout << ".\n";
            cout << "\nDeseja excluir os dados deste docente?\n1 - Sim\n2 - Nao. Buscar novo professor\n3 - Nao. Voltar ao menu de docentes";
            cout << "\n\nEntre com a opcao desejada: ";
            cin >> opcao;
            switch(opcao){
            case 1:
                professor[pos].set_nome(" ");
                professor[pos].set_horariomanha(false);
                professor[pos].set_horariotarde(false);
                professor[pos].set_horarionoite(false);
                system("cls");
                cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nEXCLUSAO DE DADOS DE DOCENTES\n";
                cout << "\nDados excluidos com sucesso.\n\n";
                do{
                    cout << "Escolha a opcao desejada: \n1 - Buscar novo professor\n2 - Voltar ao menu de docentes\n";
                    cout << "\nEntre com a opcao desejada: ";
                    cin >> opcao;
                    if (opcao == 1){
                        cont = 1;
                        system("cls");
                    } else {
                        if (opcao == 2){
                            cont = 0;
                        } else {
                            cout << "\nOpcao invalida. ";
                            cont = 3;
                        }
                    }
                } while (cont == 3);
                break;
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

int menuprof(){
    int opcao;
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nMENU DE DOCENTES\n\n";
    cout << "1 - Cadastrar professor\n2 - Listar professores cadastrados\n3 - Alterar cadastro de professor\n4 - Excluir professor\n5 - Voltar ao menu anterior\n\n";
    cout << "Entre com a opcao desejada: ";
    cin >> opcao;
    return opcao;
}

int menudiscip(){
    int opcao;
    system("cls");
    cout << "UNP - UNIVERSIDADE POTIGUAR\nLAUREATE INTERNATIONAL UNIVERSITIES\n\nSISTEMA DE ORGANIZACAO DE HORARIOS\n\n\nMENU DE DISCIPLINAS\n\n";
    cout << "1 - Cadastrar disciplina\n2 - Listar disciplinas cadastradas\n3 - Alterar cadastro de disciplina\n4 - Excluir disciplina\n5 - Voltar ao menu anterior\n\n";
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

    char opcaoinit, opcaodiscip, opcaoprof;

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
            do {
                opcaoprof = menuprof();
                switch (opcaoprof){
                case 1:
                    CadastroProfessores();
                    break;
                case 2:
                    ListarProfessores();
                    break;
                case 3:
                    AlterarProfessores();
                    break;
                case 4:
                    ExcluirProfessores();
                    break;
                case 5:
                    system("cls");
                    break;
                default:
                    system("cls");
                    break;
                }
            } while (opcaoprof != 5);
            break;
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
