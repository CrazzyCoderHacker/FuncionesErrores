#include <stdio.h>

float perimetrofigura(float numero);
float areafigura(float numero);

int main() 
{
    float num;
    printf("Lado de un cuadrado: ");
    scanf("%f", &num);
    
    printf("Perimetro: %f\n", perimetrofigura(num));
    printf("Area: %f\n", areafigura(num));
    
    return 0;
}

float perimetrofigura(float numero) 
{
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}

float areafigura(float numero) 
{
    float area;
    area = numero * numero;
    return area;
}

