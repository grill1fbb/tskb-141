#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double s(const double x,const double k);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите значение х: ");
    double x = getDouble();
    printf("Введите значение k: ");
	double k = getDouble();
    printf("Energy is %lf\n",s(x,k));
    return 0;
}

double s(const double x,const double k)

{
    return k*pow(x/1000.0,2)/2.0;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf",&value);
    return value;
}
