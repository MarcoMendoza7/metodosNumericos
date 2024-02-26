# include <stdio.h>

int main (){
    // 1 min = 60 s
    // 1 hora = 60 min
    // 1 dia = 24 horas
    // 1 año = 365 dias
    //segundos = años * 365 * 24 * 60 * 60;
    // 19 años * 

    double a = 19 * 365;
    double b = a * 24;
    double c = b * 60;
    double d = c * 60;

    printf("%d", d);

    printf ("\n");
    return 0;
}