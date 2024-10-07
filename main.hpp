#include <iostream>
#include <cmath>

//Тип для функции f(x)
typedef double (*Func)(double);

//Пример уравнения x=sqrt(x)
double f_sqrt(double x);

//Пример уравнения x=cos(x)
double f_cos(double x);

//Функция для вычисления решения уравнения с заданной точностью
double Solution(Func func,double x, double eps);