#include <stdio.h>
#include <stdlib.h>

// Autor: Jo�o

int main()
{
   int x = 0;
   int valDigitado = 0;

   // Pedimos a usu�rios quantas vezes ele quer executar esta a��o
   // Essa quantidade � guardada dentro da variavel valDigitado
   printf("Informe a quantidade de X que vc deseja repetir a instrucao:\n ");
   scanf("%i", &valDigitado);

   //Enquanto x for menor que o valor digitado
   //Execute o que est� dentro das chaves,dentro da instru��o
   // E imprimir o valor da multi de x por 10, o x vai entrar como zero
   // E vai fazer 0 * 10 depois ele vai passar e ser 1 entao 1 * 10 � 10
   while(x < valDigitado){
    printf("%i\n", x * 10);
    x = x + 1;
   }


    return 0;
}
