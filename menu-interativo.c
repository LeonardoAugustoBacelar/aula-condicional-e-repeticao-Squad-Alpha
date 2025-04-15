#include <stdio.h>

int main()
{
    int opcao, numero;

    while (1)
    { // Loop infinito para manter o menu ativo
        // Exibe o menu
        printf("\nMENU:\n");
        printf("1. Par ou Ímpar\n");
        printf("2. Contar até 10\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Controle de fluxo com switch
        switch (opcao)
        {
        case 1:
            printf("Digite um número: ");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                printf("Par!\n");
            }
            else
            {
                printf("Ímpar!\n");
            }
            break;

        case 2:
            printf("Contando: ");
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", i);
            }
            printf("\n");
            break;

        case 3:
            printf("Tchau!\n");
            return 0; // Encerra o programa

        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    return 0;
}