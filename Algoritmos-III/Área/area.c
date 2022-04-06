#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char i;
    float raio, base, altura, lado;
    float pi = 3.14159;

    printf("Escolha uma figura [c] Círculo, [r] Retângulo, [q] Quadrado, [t] Triângulo\n");
    scanf("%c", &i);

    switch(i){
        case 'c' :
            printf("Informe o raio do círculo.\n");
            scanf("%f", &raio );
            printf("A área do círculo é: %.2f", pi * raio * raio );
            break;

        case 'r' :
            printf("Informe a base e a altura do retângulo. (ex: base altura)\n");
            scanf("%f %f", &base, &altura );
            printf("A área do retângulo é: %.2f", base * altura );
            break;

        case 'q' :
            printf("Informe o lado do quadrado.\n");
            scanf("%f", &lado );
            printf("A área do quadrado é: %.2f", lado * lado );
            break;

        case 't' :
            printf("Informe a base e a altura do triângulo. (ex: base altura)\n");
            scanf("%f %f", &base, &altura );
            printf("A área do retângulo é: %.2f", (base * altura)/2 );
            break;

        default : printf("Escolha inválida :(");

    }
}
