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
    srand( (unsigned)time(NULL) );

    for (i=0;i<qtde_sorteios;i++){

        x = 1 +( rand() % len-1 );

        if (frase[x]>64&&frase[x]<91){

            frase[x]+=32;

        }else if (frase[x]>96&&frase[x]<123){

            frase[x]-=32;

        }

    }
    printf("%s\n",frase);
}
