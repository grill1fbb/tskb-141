#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double s(const double side);

/**
* Считывает число с плавающей точкой
*/
double getDouble();

/**
* Главная функция программы
*/
int main()
{
double side = getDouble();

printf("площадь грани: %.2f\n", s(side));
printf("площадь полной поверхности: %.2f\n", 6 * s(side));
printf("обьем %.2f\n", pow(side, 3));

return 0;
}

double s(const double side)
{
return pow(side, 2);
}

double getDouble()
{
double side = 0.0;
scanf("%lf", &side);
return side;
}

