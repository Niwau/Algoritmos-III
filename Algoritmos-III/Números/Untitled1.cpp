#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int number, n1, n2, n3;
	
	printf("Insira um número no intervalo de 100 a 999.\n");
	scanf("%d", &number);
	
	if(number >= 100 && number <= 999){
		n1 = number/100;
		n2 = (number - n1 * 100)/10;
		n3 = number - n1 * 100 - n2 * 10;
		
		if(n1 < n2 && n2 < n3){
			printf("%d%d%d", n1, n2, n3);
			
		} else if(n3 < n1 && n1 < n2){
			printf("%d%d%d", n3, n1, n2);
			
		} else if(n2 < n3 && n3 < n1){
			printf("%d%d%d", n2, n3, n1);

		} else if(n1 < n3 && n3 < n2){
			printf("%d%d%d", n1, n3, n2);

		} else if(n2 < n1 && n1 < n3){
			printf("%d%d%d", n2, n1, n3);

		} else {
			printf("%d%d%d", n3, n2, n1);

		}
		
		
	} else {
		printf("Número inválido!\n");
	}
	
}
