#include <iostream>

using namespace std;

int main()
{
	bool a,b,c;
	bool Sa,Sb,Sc;
	
	cout << "\n\tDigite as variaveis de entrada\n";
	
	cout << "\ndigite A: ";
	cin >> a;
	
	cout << "\ndigite B: ";
	cin >> b;
	
	cout << "\ndigite C: ";
	cin >> c;
	 
	if(a==0 && b==0 && c==0)
	   cout << "\nAparelho desligado \n";
	else
	   cout << "\nAparelho ligado \n";   
	   
	cout << "\n\tDigite as variaveis de saida\n";
	
	cout << "\ndigite Sa: ";
	cin >> Sa;
	
	cout << "\ndigite Sb: ";
	cin >> Sb;
	
	cout << "\ndigite Sc: ";
	cin >> Sc;
	 
	if(Sa==0 && Sb==0 && Sc==0)
	   cout << "\nChave desligado \n";
	else
	   cout << "\nChave ligado \n"; 
	   
}
