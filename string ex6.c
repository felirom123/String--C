/******************************************************************************

6. Crie um programa que compara duas strings. Utilize a função strcm

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int comparacao;
    
    printf("Digite uma palavra:");
    scanf("%s", &str1[0]);
    
    printf("Digite uma palavra:");
    scanf("%s", &str2[0]);
    
    comparacao = strcmp(str1,str2);
    
    if(comparacao < 0)
    {
        printf("A palavra %s tem um valor menor que a palavra %s", str1,str2);
    }
    else if(comparacao > 0)
    {
        printf("A palavra %s tem um valor maior que a palavra %s", str1,str2);
    }
    else
    {
        printf("As palavras %s, e %s tem o mesmo valor!", str1, str2);
    }
}
