//#include <stdio.h>
//#include <locale.h>
//#include <stdlib.h>
//
//int IsNumber(char line[])
//{
//
//	char numbers[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //массив цифр
//	int isNumber = 0;
//
//	for (int i = 0; i < strlen(line); i++) //перебор элементов строки
//	{
//		isNumber = 0;
//		for (int j = 0; j < sizeof(numbers); j++) //перебор является ли символ числом
//		{
//			if (line[i] == numbers[j]) //если элемент строки явлется числом, то он выходит из цикла
//			{
//				isNumber = 1;
//				break;
//			}
//		}
//		if (isNumber == 0) //если элемент строки не число, он выходит из главного цикла
//		{
//			break;
//		}
//	}
//	if (isNumber)
//	{
//		unsigned long long num = 0;
//		num = strtoull(line, NULL, 10);
//
//		if (num > ULONG_MAX || num == 0) isNumber = 0; //проверка выходит ли число за допустимые значения
//	}
//	if (isNumber)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void CheckTheRange(int a, int b)
//{
//	char line[100] = "";
//	int* rstr;
//
//	printf("\nВведите натуральное число:\n");
//	rstr = gets(line); //считывание строки
//
//	while (IsNumber(line) == 0) //ввод пока не будет допустимое число
//	{
//		rstr = gets(line);
//		if (IsNumber(line) == 0)
//		{
//			printf("\nНеправильно введено число. Введите натуральное число.\n");
//		}
//	}
//
//	unsigned long num = 0;
//	num = strtoull(line, NULL, 10); //перевод строки в число
//
//	if ((num >= a) && (b >= num))
//	{
//		printf_s("\nЧисло %lu входит в заданный диапозон\n", num);
//	}
//	else
//	{
//		printf_s("\nЧисло %lu не входит в заданный диапозон\n", num);
//	}
//}
//
////int main()
////{
////	setlocale(LC_ALL, "Rus");
////
////	unsigned long a, b;
////	printf("Введите натуральные числа для левой и правой границы диапозона:\n");
////	scanf_s("%lu %lu", &a, &b);
////
////	CheckTheRange(a, b);
////}