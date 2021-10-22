
#include <stdio.h>

int main()
{
    // declaracao das variaveis
    int x, y;
    //informa o que sera feito e solicita o preenchimento das variaveis
    printf("Trocaremos os valores entre as variaveis x e y sem usar uma varivael auxiliar.\n");

    // Le e exibe o valor do X
    printf("Digite um valor inteiro para x: ");
    scanf("%d",&x);
    printf("\nO valor de x = %d",x);
    printf("\n");

    //Le e exibe o valor de Y
    printf("Digite um valor inteiro para y: ");
    scanf("%d",&y);
    printf("\nO valor de y = %d",y);
    printf("\n");

    //Operacao para troca dos valores das variaveis sem uso de variavael auxiliar

    printf("x = %d | y = %d",x,y);
    printf("\n");
    x = x + y;
    printf("x = x + y");
    printf("\n");
    printf("x = %d | y = %d",x,y);
    printf("\n");
    y = x - y;
    printf("y = x - y");
    printf("\n");
    printf("x = %d | y = %d",x,y);
    printf("\n");
    x = x - y;
    printf("x = x - y");
    printf("\n");
    printf("x = %d | y = %d",x,y);
    printf("\n");



    return 0;
}
