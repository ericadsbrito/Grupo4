#include <iostream>

using namespace std;

long int fibo(int n)
{
    if((n==1) || (n==2))
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    int m;

    cout << "Digite o termo da sequencia de fibonacci: ";

    cin >> m;

    cout << "\nO " << m << "o " << "termo da sequencia de fibonacci e': " << fibo(m) << endl;

    return 0;
}
