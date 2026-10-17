#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double s(const double cm);

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
    double cm = getDouble();
    printf("Length in inches is %lf\n",s(cm));
    return 0;
}

double s(const double cm)
{
    return cm/2.5;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf",&value);
    return value;
}
