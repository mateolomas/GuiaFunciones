   /* 4) Implementar una función recursiva que reciba: 
    (a) un entero N, (b) un entero b (1<b<10) e imprima el número N en base b*/

#include<stdio.h>
int cambiodebase( int N,  int b);

void cambia_base(  int N, int b )
 {
 static char digitos[] = "0123456789abcdef";
 if( N >= b )
    cambia_base( N / b, b );
    putchar( digitos[ N % b] );
 } 



int main(void){
    int entero;
    int base;
    puts("Ingresa entero\n");
    scanf("%d", &entero);
    puts("Ingresa base\n");
    scanf("%d", &base);
    cambia_base(entero,base);
    

}



