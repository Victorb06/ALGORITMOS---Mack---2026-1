#include <stdio.h>

int main(){
    float salario_min,salario_bru;
    salario_min = 1.621;
    printf("Digite o seu salário:");
    scanf("%f",salario_bru);
    float resultado = salario_bru/salario_min;
    printf("Você recebe esse número de salários mínimos:",resultado);
    return 0;
}
