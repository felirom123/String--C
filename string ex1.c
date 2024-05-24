/******************************************************************************
1. Faça um programa que peça para o usuário digitar uma palavra. Em seguida imprima
a palavra digitada.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[100];
  
    
    printf("Digite uma palavra:");
    scanf("%s", &palavra[0]);
    
    
    printf("A palavra escrita é: %s", palavra);
}
