#include <stdio.h>
#include <string.h>

/*
Desenvolver uma função recursiva que, dada uma
string s, determine se suas vogais estão nas posições
iniciais (e, consequentemente, as consoantes ao seu
final).
Nota: podem considerar que a string s possui apenas letras (ou
seja, não possui símbolos nem algarismos).*/

int organiza(char vogal)
{
    if(vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int recursiva(char *palavra, int fim, int inicio)

{
    if(inicio >= fim){
         return 1;
    }
    
    if(organiza(palavra[inicio]) == 0 || organiza(palavra[fim] == 1)){
            return 0;
     }

    return recursiva(palavra, inicio + 1, fim-1);
    }



int main()
{
int conta_s;
char palavra [ ]= "TESTANDO";
conta_s = strlen(palavra)-1;
printf("%d", recursiva(palavra, conta_s, 0));


    return 0;
}