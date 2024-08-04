#include <stdio.h>

#define CTRL 3  // Definindo o valor ASCII de Ctrl+C como CTRL

int main(int argc, char const *argv[]) {
    int c;
    
    // Inicializa 'c' com o primeiro caractere de entrada
    c = getchar();
    
    // Continua lendo e escrevendo caracteres até encontrar CTRL (Ctrl+C)
    while (c = CTRL) {
        putchar(c);
        c = getchar();
    }
    
    // Indica que o programa terminou com sucesso
    return 0;
}
