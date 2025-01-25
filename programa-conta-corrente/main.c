#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char nome[30];
    int numero_conta, opcao = 0;
    float saldo = 0.0, valor;

    printf("Bem-vindo(a)! \n\n");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o numero da conta: ");
    scanf("%d", &numero_conta);
    printf("Digite um valor para deposito: R$ ");
    scanf("%f", &saldo);

    while (opcao != 4) {
       
        system("cls"); 
        printf("Menu\n\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("\nEscolha uma opcao: \n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                printf("Consulta de Saldo\n\n");
                printf("Nome: %s", nome);
                printf("Numero da conta: %d\n", numero_conta);
                printf("Saldo disponível: R$ %.2f\n", saldo);
                printf("\nPressione qualquer tecla para continuar...");
                getch();
                break;

            case 2: 
                system("cls");
                printf("Deposito\n\n");
                printf("Digite um valor para deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido para deposito.\n");
                }
                printf("\nPressione qualquer tecla para continuar...");
                getch();
                break;

            case 3:
                system("cls");
                printf("Saque\n\n");
                printf("Digite um valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
                } else if (valor > saldo) {
                    printf("Saldo insuficiente para saque.\n");
                    printf("\a"); 
                } else {
                    printf("Valor invalido para saque.\n");
                }
                printf("\nPressione qualquer tecla para continuar...");
                getch();
                break;

            case 4: 
            	system("cls");
                printf("Encerrando o sistema...\n\n");
                printf("Sistema encerrado!\n\n");
                exit(0);

            default:
                printf("Opcao invalida. Tente novamente.\n\n");
                printf("\nPressione qualquer tecla para continuar...");
                getch();
                break;
        }
    }

    return 0;
}

