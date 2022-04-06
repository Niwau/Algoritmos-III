#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int day1, month1, year1, day2, month2, year2;

    printf("Digite uma data: (ex: DIA MÊS ANO)\n");
    scanf("%d %d %d", &day1, &month1, &year1 );

    printf("Digite uma outra data: (ex: DIA MÊS ANO)\n");
    scanf("%d %d %d", &day2, &month2, &year2 );

    if(year1 > year2){
        printf("%d/%d/%d é a data mais recente.", day1, month1, year1);
    } else if(year1 < year2){
        printf("%d/%d/%d é a data mais recente.", day2, month2, year2);
    } else if(month1 > month2){
        printf("%d/%d/%d é a data mais recente.", day1, month1, year1);
    } else if(month1 < month2){
        printf("%d/%d/%d é a data mais recente.", day2, month2, year2);
    } else if(day1 > day2){
        printf("%d/%d/%d é a data mais recente.", day1, month1, year1);
    } else {
        printf("%d/%d/%d é a data mais recente.", day2, month2, year2);
    }
}
