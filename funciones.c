/** \brief Suma 2 numeros previamente ingresados.
 *
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return la suma de ambos numeros.
 *
 */
float sumar(float x, float y)
{
    float suma;

   suma = x + y;

    return suma;
}


/** \brief Resta 2 numeros previamente ingresados.
 *
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return la resta del primer numero menos el segundo numero.
 *
 */

float restar(float x, float y)
{
    float resta;

   resta = x - y;

    return resta;
}

/** \brief Multiplica 2 numeros previamente ingresados.
 *
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return el producto proveniente de la multiplicacion de ambos numeros.
 *
 */

float multiplicar(float x, float y)
{
    float producto;

    producto = x * y;

    return producto;
}

/** \brief Divide 2 numeros previamente ingresados.
 *
 * \param primer numero ingresado, dividendo.
 * \param  segundo numero ingresado, divisor
 * \return el resultado de la division entre el dividendo y el divisor.
 *
 */

float dividir(float x, float y)
{
    float division;

    division = x / y;

    return division;
}

/** \brief funcion recursiva para calcular factoriales
 *
 * \param el primero numero ingresado.
 * \return 1 cuando el numero es 0 o vuelve a llamarse a si misma hasta alcanzar 1!.
 *
 */
float factorial (float x)
{
    if (x<=1)
    {
        return 1;
    }
    else if(x>1)
    {
        return x*factorial(x-1);
    }
    else
    {
        return 1;
    }
}
