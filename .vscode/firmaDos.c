
//ESCRIBE UN PROGRAMA QUE RECIBA DE TECLADO LA CALIFICACION DEL EXAMEN DE UN ALUMNO 
//E IMPRIMA EL SIGUIENTE TEXTO UNICAMENTE SI LA CALIFICACION FUE APROBATORIA.

#include <stdio.h>

int main (){
    int calificacion;
    puts("INTRODUCE UNA CLIFICACION");
    scanf("%d", calificacion)
    if(calificacion >= 70){
        printf("¡FELICIDADES APROBASTE EL CURSO!");
    }
    printf ("LA CALIFICACION MINIMA APROBATORIA ES 70");
} //Fin main 