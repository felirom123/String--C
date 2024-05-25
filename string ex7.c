/******************************************************************************

6. Crie um programa que compara duas strings. Utilize a função strcm

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int comparacao1, comparacao2, resultado;
    
    printf("Digite uma palavra:");
    scanf("%s", &str1[0]);
    
    printf("Digite uma palavra:");
    scanf("%s", &str2[0]);
    
    for(int i = 0; i <*str1; i++)
    {
        comparacao1 += str1[i];
    }
    for(int i = 0; i <*str2; i++)
    {
        comparacao2 += str2[i];
    }
    
    resultado = comparacao1 - comparacao2;
    
    if(resultado < 0)
    {
        printf(" A palavra %s é menor que a palavra %s!",str1, str2);
    }
    else if(resultado > 0)
    {
         printf(" A palavra %s é maior que a palavra %s!",str1, str2);
    }
    else
    {
         printf(" A palavra %s e %s tem o mesmo valor!",str1, str2);
    }
}
