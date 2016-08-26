#include <stdio.h>
#include <string.h>

void removeRepeticao(char[]);

int main (){

    char s[10000],c;


    printf("Digite uma string: \n");
    scanf("%[^\n]s",s);

    removeRepeticao(s);

    return 0;
}

void removeRepeticao(char palavra[]){

    int i,j,len;

    len=strlen(palavra);


    for (i=0;i<len;i++){
        if (palavra[i]==palavra[i+1]){

            for (j=i+1;j<len+1;j++){
                palavra[j-1]=palavra[j];

            }
        }

    }

    printf("%s\n",palavra);


}
