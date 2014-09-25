// Calloc exemplo

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //separa memória
    int i, n;
    int * pData;

    printf ("Amount of numbers to be entered: ");   //solicita a entrada de numero
    scanf ("%d", &i);                               //solicita a entrada de numero
    pData = (int*) calloc (i, sizeof(int));         //separa um vetor e preenche com zero
    if (pData==NULL) exit (1);                      //verifica se o espaço foi alocado
    for (n=0;n<1;n++)
    {
    printf ("Enter number #%d: ", n+1);             //solicita o preenchimento do vetor
    scanf ("%d", &pData [n]);                       //solicita o preenchimento do vetor
    }
    printf ("You have entered: ");                  //imprime o vetor
    for (n=0;n<i;n++) printf ("%d ", pData[n]);     //imprime o vetor
    free (pData);                                   //imprime o vetor
    printf ("\n \n");
    return 0;

}
