/******************************************************************************
4. Faça um programa que leia as seguintes informações: nome, sexo e idade.
Se o sexo for masculino e a idade menor que 18, imprime o nome da pessoa e a palavra
“Não aceito”, caso contrario imprima “Aceito”.


*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char nome[100], sexo[20];
    int idade;
   
  
    printf("Digite seu primeiro nome:");
    scanf("%s", &nome[0]);
    
    printf("Qual o seu sexo M ou F:");
    scanf("%s", &sexo[0]);
    
    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    if(sexo[0] == 'M' || sexo[0] == 'm' && idade < 18)
    {
      printf("%s não aceito.", nome);  
    }
    else
    {
        printf("Aceito!");
    }
    
}  
 
