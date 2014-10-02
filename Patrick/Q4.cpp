// Malha de Resitores

#include <iostream>
#include <string>

using namespace std;


int main ()

{

int a,b,c,sa,sb,sc;

cout << "Entrada A: ";
cin >> a;
cout << "Entrada B: ";
cin >> b;
cout << "Entrada C: ";
cin >> c;

if (a==0 && b==0 && c==0){
    sa=0;
    sb=0;
    sc=0;}

if (a==0 && b==0 && c==1){
    sa=0;
    sb=1;
    sc=0;}

if (a==0 && b==1 && c==0){
    sa=0;
    sb=1;
    sc=0;}

if (a==0 && b==1 && c==1){
    sa=0;
    sb=1;
    sc=0;}

if (a==1 && b==0 && c==0){
    sa=1;
    sb=0;
    sc=0;}

if (a==1 && b==0 && c==1){
    sa=1;
    sb=0;
    sc=0;}

if (a==1 && b==1 && c==0){
    sa=1;
    sb=0;
    sc=0;}

if (a==1 && b==1 && c==1){
    sa=1;
    sb=0;
    sc=0;}

cout << "\n" <<sa;
cout << "\n" <<sb;
cout << "\n" <<sc <<"\n";

return 0;

}
