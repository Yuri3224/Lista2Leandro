//progessao geometrica
#include <stdio.h>
#include <conio.h>

int main(){
    
    int quant, razao;
    int contador;
    int prog = 1;

    
    printf("digite a quantidade de elementos da progressao: ");
    scanf("%d", &quant);

    printf("digite a razao da progressao: ");
    scanf("%d", &razao);

    printf("1\n");

    
    for(contador = 2; contador <= quant; contador++)
    {
        prog = prog * razao;

        printf("%d\n", prog);
    }

}
