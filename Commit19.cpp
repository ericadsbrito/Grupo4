#include <iostream>
#include <cmath>

using namespace std;

int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main()
{
    for( n=0 ; n<5 ; ++n )
    {
        result += pow(foo[n],2);
    }

    cout << sqrt(result) << endl;

    return 0;
}
