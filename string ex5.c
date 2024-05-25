/******************************************************************************

5. Faça um programa que conte quantas vezes o numéro 1 aparece em uma string.
Por exemplo: “0011001”, o número 1 aparece três vezes.

*******************************************************************************/
#include <stdio.h>
#include <string.h>     

int main()
{
  char str[100];
  int testando, um;
  printf("Digite numeros entre 1 e 0:");
  scanf("%s", &str[0]);
  
  testando = strlen(str);
  
  for(int i = 0; i < *str; i++)
  {
     if(str[i] == '1')
      {
          um++;
      }
  }
  printf("%i", um);
  
}
