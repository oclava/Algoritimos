#include <stdio.h>

int main() {
    float salario, porcentagem;
    char exp;
    scanf(" %c", &exp);
    scanf("%f", &salario);
    porcentagem = 0;
    if (exp == 'a')
    {
        porcentagem = salario * 0.05;
    }
    else if (exp == 'b')
    {
        porcentagem = salario * 0.07;
    }
    else if (exp == 'c')
    {
        porcentagem = salario * 0.08;
    }
    salario += porcentagem;
    printf("R$ %.2f\n", salario);

    return 0;
}