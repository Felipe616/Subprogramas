#include <stdio.h>
#include <string.h>


void code_cesar(char[], int);

void decode_cesar (char[],int);

int uppercase (char);


int main (){

    int n=2,p;
    char msg[10000];

    while (n!=3){
        printf("\n\t\t\tMENU\n1 - CODIFICAR\n2 - DECODIFICAR\n3 - SAIR\n");

        scanf ("%d",&n);
        fflush(stdin);

        switch (n){
            case 1:

                printf("Digite a mensagem a ser codificada e o numero de posicoes: \n");
                scanf("%[^\n]s",msg);
                scanf("%d",&p);



                code_cesar(msg,p);


                break;
            case 2:

                printf("Digite a mensagem a ser decodificada e o numero de posicoes: \n");
                scanf("%[^\n]s",msg);
                scanf("%d",&p);

                decode_cesar(msg,p);

                break;
            case 3:

                return 0;
        }
    }




    return 0;
}


void code_cesar(char mensagem[], int posicoes){
    int i,len,d;
    len=strlen(mensagem);

    for (i=0; i<len; i++){

        if (uppercase(mensagem[i]) >= 0){

            d = posicoes;

            if (uppercase(mensagem[i]) == 0){

                if (mensagem[i] + d > 122){
                    d = d - (123 - mensagem[i]);
                    mensagem[i]='a';
                }

            }else if (uppercase(mensagem[i]) == 1){
                if (mensagem[i] + d > 90)
                    d = d - (91 - mensagem[i]);
                    mensagem[i]='A';
            }

            mensagem[i] = mensagem[i] + d;

        }

    }

    printf("Codificado: %s\n", mensagem);

}


void decode_cesar(char mensagem[], int posicoes){
    int i,len,d;
    len=strlen(mensagem);

    for (i=0; i<len; i++){

        if (uppercase(mensagem[i]) >= 0){

            d = posicoes;

            if (uppercase(mensagem[i]) == 0){

                if (mensagem[i] - d < 97){
                    d = d - (mensagem[i] - 96);
                    mensagem[i]='z';
                }

            }else if (uppercase(mensagem[i]) == 1){
                if (mensagem[i] - d < 65)
                    d = d - (mensagem[i] - 64);
                    mensagem[i]='Z';
            }

            mensagem[i] = mensagem[i] - d;

        }

    }

    printf("Decodificado: %s\n", mensagem);


}

int uppercase(char ch){
    if (ch>64&&ch<91){
        return 1;

    }else if (ch>96&&ch<123){
        return 0;
    }else {

    return -1;
    }
}
