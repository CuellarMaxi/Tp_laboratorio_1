
/** \brief recibe los 2 numeros ingresados por el usuario y los suma
 * \param float numeroUno numero ingresado en A
 * \param float numeroDos numero ingresado en B
 * \return la suma de los numeros A y B
 */
float sumar(float numeroUno,float numeroDos)
{
    float sumar;
    sumar=numeroUno+numeroDos;
    return sumar;
}

/** \brief recibe los numeros A y B ingresados por el usuario y los resta
 * \param float numeroUno numero ingresado en A
 * \param float numeroDos numero ingresado en B
 * \return float la resta de los numeros A y B
 */
float restar(float numeroUno,float numeroDos)
{
    float restar;
    restar=numeroUno-numeroDos;
    return restar;
}

/** \brief recibe los numeros A y B ingresados por el usuario y los multiplica
 * \param float numeroUno numero ingresado en A
 * \param float numeroDos numero ingresado en B
 * \return float el resultado de multiplicar A por B
 */
float multiplicar(float numeroUno,float numeroDos)
{
    float multiplicar;
    multiplicar=numeroUno*numeroDos;
    return multiplicar;
}

/** \brief recibe numeros A y B ingresados y los divide
 * \param float numeroUno numero ingresado en A
 * \param float numeroDos numero ingresado en B
 * \return float retorna la division del numero A por B
 */
float division(float numeroUno,float numeroDos)
{
    float division;
    division=numeroUno/numeroDos;
    return division;
}

/** \brief Realiza el factorial de numero A
 * \param float numeroUno numero ingresado en A
 * \return long long retorna el factorial de numero A
 */
long long Factorial(float numeroUno)
{
    long long Factorial=numeroUno;
    int aux;
    for (aux=1;numeroUno>aux;aux++)
    {
        Factorial=Factorial*aux;
    }
    return Factorial;
}
