#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char i;
    float raio, base, altura, lado;
    float pi = 3.14159;

    printf("Escolha uma figura [c] C�rculo, [r] Ret�ngulo, [q] Quadrado, [t] Tri�ngulo\n");
    scanf("%c", &i);

    switch(i){
        case 'c' :
            printf("Informe o raio do c�rculo.\n");
            scanf("%f", &raio );
            printf("A �rea do c�rculo �: %.2f", pi * raio * raio );
            break;

        case 'r' :
            printf("Informe a base e a altura do ret�ngulo. (ex: base altura)\n");
            scanf("%f %f", &base, &altura );
            printf("A �rea do ret�ngulo �: %.2f", base * altura );
            break;

        case 'q' :
            printf("Informe o lado do quadrado.\n");
            scanf("%f", &lado );
            printf("A �rea do quadrado �: %.2f", lado * lado );
            break;

        case 't' :
            printf("Informe a base e a altura do tri�ngulo. (ex: base altura)\n");
            scanf("%f %f", &base, &altura );
            printf("A �rea do ret�ngulo �: %.2f", (base * altura)/2 );
            break;

        default : printf("Escolha inv�lida :(");

    }
}
