#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inicio, fim, incr;
    float fahr, celsius;
    inicio = 0;
    fim = 300;
    incr = 20;
    fahr = inicio;
    while (fahr <= fim)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
    }
    return 0;
}
