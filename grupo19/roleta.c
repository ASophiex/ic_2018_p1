#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int girar_roleta(void);

int main(void)
{

int modoaposta;
int especifico, adinheiro, parimpar;
int numero;
int credito;

//Mensagens introdut�rias e instru��es
printf("Bem vindo � roleta!\n");
printf("Tens 100� para come�ar a apostar.\n");
printf("1)Aposta num n�mero par ou �mpar (1 para 2).\n");
printf("2)Aposta num n�mero espec�fico (1 para 35).");

printf("\nComo vais jogar? Prime 1 ou 2>");
scanf("%d", &modoaposta);
credito=100;

/*
while (credito<0)
{
    printf("GAME OVER");
}
*/

while(credito>0)
{
    if (modoaposta==1)
    {
        printf("Par ou �mpar? Mete 1 para �mpar e 2 para par.\n");
        scanf("%d", &parimpar);
        printf("Quanto dinheiro queres apostar?(1 para 2)\n");
        scanf("%d", &adinheiro);
              if (parimpar==1)
                printf("Apostaste $%d em �mpares\n", adinheiro);
              else
                printf("Apostaste $%d em pares\n", adinheiro);
            printf("Prime ENTER para girar a roleta!\n");
        getchar();
        getchar();
        girar_roleta();
            if (parimpar==1)
            {
                if (numero%2==1)
                    {credito += adinheiro;
                    printf("Ganhaste! Ficas com $&d", credito);}
                else
                    credito -= adinheiro;
                    printf("Perdeste. Tens menos $%d", adinheiro, credito);
                    }
            else
                if (numero%2==0)
                    {credito += adinheiro;
                    printf("Ganhaste! Ficas com $%d", credito);}
                else
                    credito -= adinheiro;
                    printf("Perdeste. Tens menos $%d", adinheiro, credito);
                    }
        else if (modoaposta==2)
        {

            printf("\nEscolhe um n�mero entre 1 e 36>");
            scanf("%d", &especifico);
            printf("Quanto dinheiro queres apostar?(1 para 35)>");
            scanf("%d", &adinheiro);
            printf("\nApostaste $%d no n�mero %d", adinheiro, especifico);
            printf("\nPrime ENTER para girar a roleta!");
            getchar();
            getchar();

            girar_roleta();
                if (numero==especifico)
                    {credito += (adinheiro*35);
                    printf("Ganhaste! Ficas com $%d", credito);}
                else
                    credito -= adinheiro;
                    printf("Perdeste. Tens menos $%d", adinheiro, credito);
                    }

}

getchar();
getchar();
return (0);
}



int girar_roleta (void)
{
    int numero;
    srand(time(NULL));
    numero=1+(rand()%36);
    printf("A bola parou no n�mero %d\n", numero);
    return numero;
}










