#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

// Manipulador de sinal para SIGINT
void handle_sigint(int sig) {
    printf("\nPrograma encerrado com Ctrl+C\n");
    exit(0);
}

int main(void) {
    int c;

    // Configura o manipulador de sinal para SIGINT
    signal(SIGINT, handle_sigint);

    // Lê um caractere da entrada padrão
    c = getchar();
    if (c == EOF && ferror(stdin)) {
        perror("Erro ao ler caractere");
        return 1;
    }

    // Continua lendo e escrevendo caracteres até encontrar EOF
    while (c != EOF) {
        if (putchar(c) == EOF) {
            perror("Erro ao escrever caractere");
            return 1;
        }
        c = getchar();
        if (c == EOF && ferror(stdin)) {
            perror("Erro ao ler caractere");
            return 1;
        }
    }

    return 0;
}