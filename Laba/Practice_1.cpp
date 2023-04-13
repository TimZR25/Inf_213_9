//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>
//#include <Windows.h>
//#include <math.h>
//#define MAX_NUMBER_LENGTH 4
//
//int Count_Pos(int N)
//{
//	int c = 0;
//	while (N > 0)
//	{
//		N /= 10;
//		c++;
//	}
//
//	return c;
//}
//
//int Get_Number()
//{
//	int number;
//
//	while (1)
//	{
//		printf("Введите число не превышающее %d\n", MAX_NUMBER_LENGTH);
//
//		scanf_s("%d", &number);
//
//		if (Count_Pos(number) <= MAX_NUMBER_LENGTH) break;
//
//		puts("Число превышает заданное значение\n");
//	}
//
//	return number;
//}
//
//int IsPrimeNumber(int number, int divider)
//{
//	if (number % divider == 0 && number != divider) return 0;
//
//	if (divider >= (int)pow(number, 0.5)) return 1;
//
//	IsPrimeNumber(number, divider + 1);
//}
//
//void Print_Dividers(int number, int divider)
//{
//	if (divider <= 1) return;
//
//	if (IsPrimeNumber(number, 2) == 1 && divider == number / 2) printf("%d ", number);
//
//	if (number % divider == 0 && IsPrimeNumber(divider, 2) == 1) printf("%d ", divider);
//
//	Print_Dividers(number, divider - 1);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int number = Get_Number();
//
//	printf("\nПростые делители числа %d:\n", number);
//	Print_Dividers(number, number/2);
//}