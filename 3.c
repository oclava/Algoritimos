#include <stdio.h>

int main() {
    int senha, entrada;
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    while (1)
    {
        scanf("%d", &entrada);
        if (entrada==senha)
        {
            printf("senha valida!\n");
            break;
        }   else{
            printf("senha invalida!\n");
        }
        
    }
    return 0;
}