#include <stdio.h>
#include <string.h>

int apagaCaractere(char[], char);

int main (){

    char s[10000],c;


    printf("Digite uma string e um caractere: \n");
    scanf("%[^\n]s",s);
    fflush(stdin);
    scanf("%c",&c);


    printf("Numero de letras apagadas: %d\n",apagaCaractere(s,c));



    return 0;
}

int apagaCaractere(char palavra[], char letra){

    int i=0,j,len;
    len=strlen(palavra);
    for (j=0;j<len;j++){
        if (palavra[j]==letra){
            palavra[j]=' ';
            i++;
        }

    }
    return i;
}
