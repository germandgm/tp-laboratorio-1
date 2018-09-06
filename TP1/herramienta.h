#ifndef HERRAMIENTA_H_INCLUDED
#define HERRAMIENTA_H_INCLUDED




/** \brief solicito el primer numero operando
 * \return retorno el primer numero operando
 */
float numOne();

/** \brief le pido el segundo numero operando
 * \return retorno el segundo numero operando
 */
float numTwo();

/** \brief realizo la suma de los 2 numeros
 * \param numOne float el primer numero operando
 * \param numTwo float el segundo numero operando
 * \return retorno el resultado
 */
float suma(float numOne,float numTwo);

/** \brief realizo la resta de los 2 numeros
 * \param numOne float el primer numero operando
 * \param numTwo float el segundo numero operando
 * \return retorno el resultado
 */

float resta(float numOne,float numTwo);

/** \brief multiplico los 2 numeros
 * \param numOne float el primer numero operando
 * \param numTwo float segundo numero operando
 * \return retorno el resultado
 */

float multiplicacion(float numOne,float numTwo);

/** \brief division y no se puede dividir por cero
 * \param numOne float del primer numero dividendo
 * \param numTwo float del segundo numero divisor
 * \return retorno el resultado
 */

float division(float numUno,float numDos);

/** \brief obtengo el factorial de los 2 numeros
 * \param x int numero a factorear
 * \param y int numero a factorear
 * \return retorno el resultado
 */
int factoreado(int x);

#endif // HERRAMIENTA_H_INCLUDED

