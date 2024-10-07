#include "main.hpp"

//Тип для функции f(x)
typedef double (*Func)(double);

//Пример уравнения x=sqrt(x)
double f_sqrt(double x)
{
    x = sqrt(x);
    return x;
}

//Пример уравнения x=cos(x)
double f_cos(double x)
{
    x = cos(x);
    return x;
}

//Функция для вычисления решения уравнения с заданной точностью
double Solution(Func func,double x, double eps)
{
    x = func(x);
    while(abs(x - func(x)) > eps)
    {
        x = func(x);
    }
    return x;
}