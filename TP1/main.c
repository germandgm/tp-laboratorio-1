#include <stdio.h>
#include <stdlib.h>
#include "herramienta.h"

int main()
{ //declaracion de las variables duh!

    char continuar='y';

    int option=0;
    int f1=0;
    int f2=0;

    float numberOne;
    float numberTwo;


    while(continuar=='y')
    {

// se muestran las opciones de la calculadora

        printf("\nHola!! selecciona una de las opciones para realizar una funcion\n\n");
        printf("1- Ingresar el primer numero operando (A=%.2f)\n",numberOne);
        printf("2- Ingresar el segundo numero operando (B=%.2f)\n",numberTwo);
        printf("3- Calcular todas las operaciones\n");
        printf("4- Mostrar resultados de las operaciones\n");
        printf("5- Salir\n");

        scanf("%d",&option);
        system("cls");


//hacemos estos aburridos casos E__E

        switch(option)
        {
            case 1:
                f1=1;
                numberOne=numOne();
                system("pause"),system("cls");
                break;
            case 2:
                f2=1;
                numberTwo=numTwo();
                system("pause"),system("cls");
                break;

            case 3:
                if(f1==1 && f2==1)
                {
                    printf("obteniendo resultado de la suma de %.2f + %.2f (PROCESANDO...)\n",numberOne,numberTwo);
                    printf("obteniendo resultado de la resta de %.2f - %.2f (PROCESANDO...)\n",numberOne,numberTwo);
                    printf("obteniendo resultado de la multiplicacion de %.2f x %.2f (PROCESANDO...)\n",numberOne,numberTwo);
                    if(numberTwo==0)
                    {
                        printf("NOP! no se puede divir entre 0! ('B' debe ser distinto de 0 para realizar la division!)\n");
                    }
                    else
                    {
                        printf("obteniendo resultado de la division de %.2f / %.2f (PROCESANDO...)\n",numberOne,numberTwo);
                    }
                    printf("obteniendo resultado de los factoriales de %.2f y %.2f (PROCESANDO...)\n",numberOne,numberTwo);

                }
                else
                {
                    printf("algo ha salido mal... vuelva a ingresar los numeros\n");
                }
                system("pause"),system("cls");
            break;
            case 4:
                suma(numberOne,numberTwo);
                resta(numberOne,numberTwo);
                multiplicacion(numberOne,numberTwo);
                division(numberOne,numberTwo);
                factoreado(numberOne);
                factoreado(numberTwo);
                system("pause"),system("cls");
                break;

            case 5:
                continuar = 'n';
                printf("Saliendo... (Adios!)\n");
                break;
        }

}
return 0;

}
