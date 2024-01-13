#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int a;

    system("title Firewall");
    printf("Voce deseja ativar ou desativar seu Firewall ?\n");
    printf(" 1 - Ativar \n");
    printf(" 2 - Desativar \n");
    printf("> ");
    scanf("%d", &a);

    if (a == 1) {
        system("netsh advfirewall set allprofiles state on");
    } else if (a == 2) {
        system("netsh advfirewall set allprofiles state off");
    } else {
        printf("Opcao invalida.\n");
    }

    system("\npause");

    return 0;
}
