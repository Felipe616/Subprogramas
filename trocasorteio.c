#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>


void transforma(char [], int );

int main (){

    char s[1000];
    int q;

    printf("Digite a string e a quantidade de sorteios: \n");
    scanf("%[^\n]s",s);
    scanf("%d",&q);

    transforma(s,q);


    return 0;
}

void transforma(char frase[] , int qtde_sorteios){

    int len,i,x;
    len=strlen(frase);

    for (i=0;i<qtde_sorteios;i++){

        x = ( rand() % len );
        printf("%d\t%c\n",x,frase[x]);

        if (frase[x]>64&&frase[x]<91){

            tolower(frase[x]);

        }else if (frase[x]>96&&frase[x]<123){

            toupper(frase[x]);

        }

    }
    printf("%s\n",frase);
}
