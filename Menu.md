#include <stdio.h>
#include <conio.h>

int main(){  //dowhile switch menu

    int menu=-1;

    do{
        printf("\n\nOla, escolha uma opcao de 1 a 9 no menu.\n");
        scanf("%d", &menu);

        switch (menu){
            case 1:
                printf("\nVoce escolheu a opcao 1, Agua molhada.");
                    break;
            case 2:
                printf("\nVoce escolheu a opcao 2, Picole de coca cola.");
                    break;
            case 3:
                printf("\nVoce escolheu a opcao 3, Suco de laranja.");
                    break;
            case 4:
                printf("\nVoce escolheu a opcao 4, Chocolate belga do Brasil.");
            case 5:
                printf("\nVoce escolheu a opcao 5, Pizza sem queijo.");
                    break;
            case 6:
                printf("\nVoce escolheu a opcao 6, Guacamole peruano.");
                    break;
            case 7:
                printf("\nVoce escolheu a opcao 7, Lasanha.");
                    break;
            case 8:
                printf("\nVoce escolheu a opcao 8, Banana.");
                    break;
            case 9:
                printf("\nVoce escolheu a opcao 9, Pao de ontem.");
                    break;
            case 0:
                printf("\nAte a proxima!");
                    break;

            default:
                printf("Opcao inexistente.");
                    break;
        }
    } while(menu !=0);

}
