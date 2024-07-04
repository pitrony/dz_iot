//Домашнее задание №2
//Задача 2. Сумма и произведение трех чисел
//Ввести три числа, найти их сумму и произведение
//Нужно напечатать сумму и произведение трех чисел
//Данные на входе: Три целых числа через пробел
//Данные на выходе: %d+%d+%d=%d
//%d*%d*%d=%d
#include <stdio.h>

int main()
{

  int sum, mult, num1, num2, num3;
  printf("Введите 3-и числа через пробел ");
  scanf("%d%d%d", &num1, &num2, &num3);
  sum=num1+num2+num3;
  mult=num1*num2*num3;
  printf("Сумма трех чисел: ");
  printf("%d%s", num1, "+");
  printf("%d%s", num2, "+");
  printf("%d%s", num3, "=");
  printf("%d%s", sum, "\n");
  printf("Произведение трех чисел: ");
  printf("%d%s", num1, "*");
  printf("%d%s", num2, "*");
  printf("%d%s", num3, "=");
  printf("%d", mult);
    return 0;
}
