#include <stdio.h>
#include <conio.h>

int main()
{   
    
    int element, razao;
    int contador; 
    int prog = 0;

    
    printf("digite a quantidade de elementos da progressao: ");
    scanf("%d", &element);
    printf("digite a razao da progressao: ");
    scanf("%d", &razao);
    printf("0\n");

    for(contador = 2; contador <= element; contador++)
    {
        prog = prog + razao;
        printf("%d\n", prog);
    }
}