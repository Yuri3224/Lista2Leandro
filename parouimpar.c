//Par ou impar

#include <stdio.h>
#include <conio.h>

int main() 
{
    int a = -1; 

    while (a!=0){
        printf("\nEscolha um numero para saber se eh impar ou par(digite 0 para sair do progama): \n");
        scanf("\n%d", &a);

        if (a==0)
            {
                return 0;
            }
     
        (a%2 == 0 )?(printf("O numero digitado eh par\n")):(printf("O numero digitado eh impar\n"));
        }


}