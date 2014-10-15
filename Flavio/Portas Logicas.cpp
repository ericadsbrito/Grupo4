#include <iostream>

using namespace std;
bool Saida;

int End(bool A, bool B ){
    if(A == true && B == true)
        return true;

    else
         return false;
}
int Or(bool A, bool B){
    if(A == true || B == true)
        return true;

    if(A == true && B == true)
        return true;

    else
        return false;
}
int Not(bool A){
    if(A == true)
        return false;

    else
        return true;
}

int OrNot(bool A, bool B){
    if(A == true || B == true)
        return false;

    if(A == true && B == true)
        return false;

    else
        return true;
}


int main()
{
    bool A,B, Saida1= false,Saida2 = false;
    bool  Q1, Q2;

    cout<<"entre com True = 1 ou False = 0 para entradas A e B\n";
    cin>>A;
    cin>>B;
    
    //Flip-Flop RS com Portas Nor =P;
    Saida1 = OrNot(A,Saida2);
    Saida2 = OrNot(B,Saida1);
    Q1 = Saida1;
    Q2 = Saida2;
    cout<<"Saida Q' = "<<Q1<<"\n";
    cout<<"Saida Q'' = "<<Q2<<"\n";

    return 0;
}
