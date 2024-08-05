#include <stdio.h>

int my_getchar() {
    int c;
    // Use fgetc to read a single character from stdin
    c = fgetc(stdin);
    return c;
}

int main() {
    int c;
    
    printf("Digite algo (Ctrl+Z seguido de Enter para terminar no Windows, Ctrl+D no Unix/Linux/Mac):\n");
    
    c = my_getchar();
    while (c != EOF) {
        putchar(c);
        c = my_getchar();
    }
    
    return 0;
}


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    c = getchar();
    while (c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
    
    return 0;
}
