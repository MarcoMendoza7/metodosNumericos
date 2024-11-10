// Realiza un programa, que te diga si persona es 
// sujeto a un credito hipotecario
// Las condiciones que debe de cumplir son:
// * Tener minimo 5 años de antiguedad en el trabajo
// * El 10% de su sueldo mensual debe ser mayor 1000 pesos

#include <stdio.h>
#include <stdlib.h>
int main (){
    int antiguedad;
    int sueldo;
    float res;
    printf("CREDITO HIPOTECARIO\n");
    puts("¿Cuantos años de antiguedad tiene en el trabajo?");
    scanf("%d", &antiguedad);
    puts("Ingresa tu sueldo mensual");
    scanf("%d", &sueldo);
    res = sueldo*0.10;
    if(antiguedad >= 5){
        if(res>1000){
            printf("FELICIDADES TU CRDITO AH SIDO APROBADO");
        }
    }
}