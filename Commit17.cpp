#include <iostream>
#include <conio.h>

using namespace std;
char myword[256];
int i(0);

int main()
{
    while(myword[i-1] != 13)
    {
        myword[i] = getch();
        i++;
    }

    i=0;
    while(myword[i] != 13)
    {
        cout << myword[i];
        break;
    }
}
