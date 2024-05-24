/******************************************************************************
3. Faça um programa que peça para o usuário digitar um nome. Em seguida, imprima as
4 primeiras letras do nome. Utilizar laço de repetição

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[10];
   
  
    printf("Digite uma palavra:");
    scanf("%s", &palavra[0]);
    
    for(int cont = 0; cont < 4; cont++)
    {
        printf("%c", palavra[cont]);
    }
    
}  
 
