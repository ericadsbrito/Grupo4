#include <iostream>

using namespace std;

int main()
{
   char myword[100];

   cout << "\nDigite um texto: ";
   cin.getline(myword, 100);

   cout << "\nO texto digitado: " << myword << " , " << endl;

}
