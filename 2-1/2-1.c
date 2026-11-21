#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double s(const double side);

double getDouble();

int main()
{
double a = getDouble();

if (a <= 0) {
printf("Ошибка: длина ребра должна быть положительной.\n");
return 1;
}

printf("Площадь грани: %lf\n", s(a));
printf("Площадь полной поверхности: %lf\n", 6 * s(a));
printf("Объем: %lf\n", a * a * a);

return 0;
}

double s(const double side)
{
return side * side;
}

double getDouble()
{
double value;

printf("Введите длину ребра куба: ");

if (scanf("%lf", &value) != 1) {
printf("Ошибка: нужно ввести число.\n");
exit(1);
}

return value;
}
