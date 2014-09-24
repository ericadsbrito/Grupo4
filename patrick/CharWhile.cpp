#include <iostream>
using namespace std;

int main()
{
   char ch [100];
   while (ch != '\0')
   {
       cout << "Digita alguma coisa:\n";
       cin >> ch;
       cout << "\n" << ch << "\n";
   }


   return 0;
}
