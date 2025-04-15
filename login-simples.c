#include <stdio.h>

int main()
{
    int senha;
    int tentativas = 0;           // Contador de tentativas
    const int MAX_TENTATIVAS = 3; // Limite máximo de tentativas permitidas

    printf("=== SISTEMA DE AUTENTICAÇÃO ===\n");
    printf("Digite a senha numérica de 4 dígitos.\n");

    while (tentativas < MAX_TENTATIVAS)
    { // Loop para controlar as tentativas
        printf("\nDigite a senha: ");
        scanf("%d", &senha);

        if (senha == 4321)
        {
            printf("Senha correta! Acesso concedido.\n");
            return 0; // Encerra o programa se a senha estiver correta
        }
        else
        {
            tentativas++;
            if (tentativas < MAX_TENTATIVAS)
            {
                printf("Senha incorreta! Você ainda tem %d tentativa(s).\n", MAX_TENTATIVAS - tentativas);
            }
            else
            {
                printf("Número máximo de tentativas excedido. Sistema bloqueado.\n");
            }
        }
    }

    return 0;
}