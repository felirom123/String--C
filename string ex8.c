/******************************************************************************
8. Faça um programa que receba uma palavra e a imprima de trás para frente
*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char c[10];
    char invertida[10];
    int j = 0;
    
    printf("Digite uma palavra: \n");
    scanf("%s", c);
    
    for(int i = strlen(c)-1; i >= 0;i--)
    {
        invertida[j] = c[i];
        j += 1;
    }
    printf("%s", invertida); 
    
}
