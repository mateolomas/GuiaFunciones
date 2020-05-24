
/*Crear una función que reciba un arreglo de enteros D y retorne, como parámetro de salida, 
la matriz diag(D) al programa principal desde donde deberá imprimirse en pantalla. El tamaño del arreglo D, 
así como sus elementos, deben ser ingresados por el usuario de forma interactiva.*/


#include<stdio.h>
int diag(int tamano, int a[tamano]);


int main(void){
    int tamano1;
    puts("Ingrese tamano del arreglo");
    scanf("%d", &tamano1);
    int A[tamano1];
    for(int i=0; i<tamano1; i++){
        printf("Ingrese el elemento %d \n", i+1);
        scanf("%d", &A[i]);   
    }
    diag(tamano1, A);
    
   

    
}


int diag(int tamano, int a[tamano]){
    
    int D[tamano][tamano];

    for(int i= 0; i<tamano; i++){
        for(int j = 0; j<tamano; j++){
                if(i==j){
                D[i][j] = a[i];
                }
                else{
                    D[i][j] = 0; 
                }            
        }
    }
         
     //Imprime la matriz
    for (int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            if (j == 0)
                printf ("%d ", D[i][0]);
            else
                printf("%d " ,D[i][j]);
                }
            printf("\n");

    
} 
        

    
}



