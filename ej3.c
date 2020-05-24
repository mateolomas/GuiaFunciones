/*Implementar una función que reciba una cadena representando un número hexadecimal y 
retorne el valor decimal de la misma. 
La función debe invocarse desde un programa interactivo.*/


#include <stdio.h>
#include <math.h>
#include <string.h>

int HexToDeg(char hex[17]){

    
    long long decimal;
    int i = 0, value, len;
    decimal = 0;
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            value = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            value = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            value = hex[i] - 65 + 10;
        }

        decimal += value * pow(16, len);
        len--;
    }

    
    return decimal;

}

int main()
{
    char hex[17];
    puts("Ingresa un numero hexadecimal");
    scanf("%s", hex);
    printf("Tu numero en decimal es = %d\n", HexToDeg(hex));
    

}

