#include <stdio.h>

int main (){
    int var = 1;
    int con = 1;

    //ES EQUIVALENTE A VAR = VAR+1;
    printf("%d", var++);
    printf("%d", var);

    //ES EQUIVALENTE A CON = CON-1;
    printf("%d", con--);
    printf("%d", con);

    return 0;
}// FIN MAIN