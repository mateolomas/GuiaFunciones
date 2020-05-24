

/*Implemente una función que reciba las longitudes de los dos catetos de un triángulo rectángulo y retorne,
 como parámetros de salida, sus dos ángulos agudos (en grados sexagesimales) al programa principal. 
Los catetos deben ser ingresados por el usuario de manera interactiva.*/


#include<stdio.h>
#include<math.h>
float angle(float a, float b);
float RadToDeg(float angleInRad);

int main(void){
    float cateto1;
    float cateto2;
    puts("Ingrese la longitud de un cateto");
    scanf("%f", &cateto1);
    puts("Ingrese la longitud de otro cateto");
    scanf("%f", &cateto2);
    
    float angle1;
    float angle2;

    angle1 = angle(cateto1,cateto2);
    angle2 = 180 - 90 - angle1;
    printf("El primer angulo agudo es: %.2f°\nMientras que el otro es: %.2f°\n", angle1, angle2);

}


float angle(float a, float b){
    float angulo1;

    angulo1 = atan(a/b);
    

    return RadToDeg(angulo1); 


}

float RadToDeg(float angleInRad)
{
    float degrees; 
    degrees = angleInRad / 0.0174532925;
 
 return degrees;
}