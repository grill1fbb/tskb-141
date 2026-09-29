#include <stdio.h>
#include <math.h>

/**
* @brief вычисляет значение функции по заданной формуле
* @param x - значение переменной х
* @param y - значение переменной y
* @param z - значение переменной z
* @return рассчитанное значение
*/
double A(const double x, const double y, const double z);
/**
* @brief вычисляет значение функции по заданной формуле
* @param x - значение переменной х
* @param y - значение переменной y
* @param z - значение переменной z
* @return рассчитанное значение
*/
double B(const double x, const double y, const double z);
/**
* @brief точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/

int main()
{
    const double x = 2.2;
    const double y = 9.2;
    const double z = 10.2;
    printf("A = %lf\n", A(x, y, z));
    printf("B = %lf\n", B(x, y, z));
    return 0;
}


double A(const double x, const double y, const double z)
{
    return log(z+pow(x,2))+pow(sin(x/y),2);
}

double B(const double x, const double y, const double z)
{
    return exp(-z)*(x+sqrt(x+z))/(x-sqrt(fabs(x-y)));
}
