#include <stdio.h>
#include <ctype.h>
#include "herramienta.h"


//funcion de la primera opcion ingresar el primer numero 'x'

float numOne()
{
    float answer;
    printf("ingrese el primer numero que va a operar:\n");
 /* intento de validar ingreso de solo numeros fallido
     while(isalpha(numOne)){
    {
    printf("Ingrese una opcion valida!\n");
    } */
    scanf("%f",&answer);
    return answer;
}

//funcion de la segunda opcion ingresar el segundo numero 'y'

float numTwo()
{
    float answer;
    printf("ingrese el segundo numero que va a operar:\n");
    scanf("%f",&answer);
    return answer;
}

//funcion opcion suma 'x+y'

float suma(float x,float y)
{
    float result;
    result=x+y;
    printf("la operacion suma de %.2f y %.2f es: %.2f\n",x,y,result);
    return result;
}

//funcion resta 'x-y'

float resta(float x,float y)
{
    float result;
    result=x-y;
    printf("la operacion resta de %.2f y %.2f es: %.2f\n",x,y,result);
    return result;
}

//funcion producto 'x*y'

float multiplicacion(float x,float y)
{
    float result;
    result=x*y;
    printf("la operacion multiplicacion de %.2f y %.2f es: %.2f\n",x,y,result);
    return result;
}

//funcion division 'x/y'

float division(float x,float y)
{
    float result;
    if(y==0)
    {
        printf("es imposible dividir por cero, tonto!\n");
    }
    else
    {
        result=x/y;
        printf("la operacion de la division de %.2f y %.2f es: %.2f\n",x,y,result);
    }
    return result;
}

//esto si que me frustro...
//pero se logro la funcion factoreado o como se escriba
// factoreado de 'x' y factoreado de 'y'

int factoreado(int x)
{
    int factoreado=1;
    int factor=x;

    if(x<0)
    {
        printf("Imposible obtener factor numero negativo\n");
    }

    else
    {
        for(int c=1; c<=x; c++)
        {
            factoreado *= c;
        }
        printf("El factoreado de %d es: %d \n",x,factoreado);
    }
    return factoreado;
}


