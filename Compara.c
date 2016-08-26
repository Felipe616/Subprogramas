#include <stdio.h>
#include <string.h>

int compara(char [], char[]);

int main (){

    char frase1[10000],frase2[10000];

    printf("Digite uma string: \n");
    scanf("%[^\n]s",frase1);
    fflush(stdin);

    printf("Digite outra string: \n");
    scanf("%[^\n]s",frase2);
    fflush(stdin);

    printf("A posicao e': %d",compara(frase1,frase2));

    return 0;
}

int compara(char s1[],char s2[]){

    int posicao,i,j,len1,len2,aux;

    len1=strlen(s1);
    len2=strlen(s2);

    for (i=0;i<len1;i++){
        aux=i;

        if (s1[i]==s2[0]){

            for (j=0;j<len2;j++){


                if (s1[aux]!=s2[j]){
                    break;
                }

                aux++;
            }
            if (j==len2){
                posicao=i;
                break;
            }
        }

    }
    return posicao;
}
