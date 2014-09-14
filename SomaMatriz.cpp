#include <stdlib.h>
#include <iostream>
#include <typeinfo>

using namespace std;


int SomaMatriz(int W[3][3], int Z[3][3])
{
	int RESULTADO[3][3];
	int i,j;
	
	for(i=0;i<=2;i++)
    {
		for(j=0;j<=2;j++)
		{
			RESULTADO[i][j] = W[i][j] + Z[i][j];
		}
	cout<<"\n\n";
	}
	return RESULTADO[i][j];
}




int main() {
	int i,j;
	int A[3][3] = {{1,4,7},{2,5,8},{3,6,9}};
	int B[3][3] = {{1,5,1},{2,0,1},{3,1,1}};
	
	cout<<"Sua matriz A: \n\n";
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<A[i][j]<<" ";
			}
	cout<<"\n\n";
	}
	
	cout<<"Sua matriz B: \n\n";
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<B[i][j]<<" ";
			}
	cout<<"\n\n";
	}
	
	cout<<"\n\nA matriz A+B: \n\n";
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<A[i][j]+B[i][j]<<" ";
			}
	cout<<"\n\n";
	}
	
	
	
	
	return 0;
	
	
	
}
