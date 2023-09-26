#include <stdio.h>

int main(){
    int N=0, soma=0, n=0;
    scanf("%d", &N);
    n=N;

    if (N % 2 == 0)
    {
        printf("%d eh par\n", N);

    }
    else
    {
        printf("%d eh impar\n", N);
    }

    for (; n != 0; n /= 10) {
        soma += n % 10;
    }
    
    printf("A soma dos algarismos de %d eh %d\n", N, soma);    

    return 0;
}