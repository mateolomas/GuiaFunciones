#include<stdio.h>

/*Implementar una función recursiva que reciba un entero N y retorne la suma 1 + 2 + 3 + … + N. 
El tipo de recursión a utilizar debe ser recursión de cola (tail recursión).*/ 

int sumaN(int N, int total);

int main(void){
    int numeroN;
    puts("Ingresa un numero N: ");
    scanf("%d", &numeroN);
    printf("%d",sumaN(numeroN,0));

}

int sumaN(int N, int total){
    
    if(N<=0){
        return total;
    }
    else
    {
        return sumaN(N-1, total + N);
    }
    
    
}