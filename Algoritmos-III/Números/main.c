#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1;

    printf("Escolha um n�mero no intervalo de 100 a 999\n");
    scanf("%d", &n1);

    if(n1 >= 100 && n1 <= 999){
       /* === C�DIGO === */

    } else {
        printf("N�mero inv�lido.");
    }

}
