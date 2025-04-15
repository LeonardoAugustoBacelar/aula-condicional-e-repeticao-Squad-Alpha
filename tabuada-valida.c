#include <stdio.h>

int main()
{
    int numero;

    printf("=== TABUADA VALIDADA ===\n");

    // Loop para garantir que o número esteja no intervalo válido
    while (1)
    {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);

        // Verifica se o número está no intervalo válido
        if (numero >= 1 && numero <= 10)
        {
            break; // Sai do loop quando o número for válido
        }
        else
        {
            printf("Número inválido! Tente novamente.\n");
            continue; // Volta ao início do loop para nova tentativa
        }
    }

    // Imprime a tabuada do número válido
    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}