/******************************************************************************
2. Faça um programa que peça para o usuário digitar um nome. Em seguida, vamos
imprimir o nome apenas se a primeira letra do nome for “A”.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char palavra[100];
    bool controle = false;
  
  while(controle == false)
  {
    printf("Digite uma palavra:");
    scanf("%s", &palavra[0]);
    
    if(palavra[0] == 'a' || palavra[0] == 'A')
    {
    printf("Seu nome é: %s", palavra);
    controle = true;
    }
    else
    {
        printf("Seu nome não começa com a letra A!\n");
    }
   }  
  } 
