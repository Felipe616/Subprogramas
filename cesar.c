#include <stdio.h>
#include <string.h>


void code_cesar(char[], int);

void decode_cesar (char[],int);


int main (){

    int n,p;
    char msg[10000];

    printf("\n\t\t\tMENU\n1 - CODIFICAR\n2 - DECODIFICAR\n3 - SAIR\n");

    scanf ("%d",&n);
    fflush(stdin);

    switch (n){
        case 1:

            printf("Digite a mensagem a ser codificada e o numero de posicoes: \n");
            scanf("%[^\n]s",msg);
            scanf("%d",&p);

            //printf("%s\t%d",msg,p);

            code_cesar(msg,p);


            break;
        case 2:

            printf("Digite a mensagem a ser decodificada e o numero de posicoes: \n");
            scanf("%[^\n]s",msg);
            scanf("%d",&p);

            decode_cesar(msg,p);

            break;
        case 3:

            return 1;
    }


    return 0;
}


void code_cesar(char mensagem[], int posicoes){

    int j,len;

    len=strlen(mensagem);


    for (j=0;j<len;j++){
        if (mensagem[j]!=90&&mensagem[j]!=122&&mensagem[j]!=32){
            mensagem[j]+=posicoes;
        }else if (mensagem[j]==90){
            mensagem[j]=64;
            mensagem[j]+=posicoes;

        }else if (mensagem[j]==122){
            mensagem[j]=96;
            mensagem[j]+=posicoes;
        }
    }
    printf("%s\n",mensagem);

}


void decode_cesar(char mensagem[], int posicoes){

    int j,len;

    len=strlen(mensagem);


    for (j=0;j<len;j++){
        if (mensagem[j]!=90&&mensagem[j]!=122&&mensagem[j]!=32){
            mensagem[j]-=posicoes;
        }else if (mensagem[j]==90){
            mensagem[j]=64;
            mensagem[j]-=posicoes;

        }else if (mensagem[j]==122){
            mensagem[j]=96;
            mensagem[j]-=posicoes;
        }
    }
    printf("%s\n",mensagem);

}
