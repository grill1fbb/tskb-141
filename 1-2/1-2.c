#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define INCH 2.5

/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double CmToInch(const double cm);

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
    printf("Введите занчение: ");
    double cm = getDouble();
    printf("Length in inches is %lf\n",CmToInch(cm));
    return 0;
}

double getDouble()
{
    double value = 0;
    if(scanf("%lf",&value) != 1){
        printf("Обшика: неверный ввод");
        exit(1);
    }
    return value;
}

double CmToInch(const double cm)
{
    return cm/INCH;
}


