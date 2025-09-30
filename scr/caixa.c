#include <stdio.h>

void mostrarMenu(){
    printf("Escolha uma opcao:\n");
    printf("1. Ver saldo\n");
    printf("2. Sacar\n");
    printf("3. Depositar\n");
    printf("4. Sair\n");
}

int main(void) {

    float saldo = 1000.0;
    float valorSaque;
    float valorDeposito;
    int opcao;

    mostrarMenu();
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Seu saldo e: %.2f\n", saldo);
    } else if  (opcao == 2){
        scanf("%f", &valorSaque);

        if (valorSaque <= saldo){
            saldo = saldo - valorSaque;
        printf("Saque realizado com sucesso!\n");
        } else {
           printf("Saldo insuficiente.\n");
        }

    } else if (opcao == 3){
        scanf("%f", &valorDeposito);
        if (valorDeposito > 0 ){
            saldo = valorDeposito + saldo;
            printf("Deposito realizado com sucesso!\n");
            } else {
                printf("Deposito invalido, tente novamente!\n");
            }
    } else if (opcao == 4){
        printf("Encerrando.");
    } else {
        printf("Opcao invalida.\n");
    }

printf("Saldo atual: %.2f\n", saldo);

    return 0;
    
}