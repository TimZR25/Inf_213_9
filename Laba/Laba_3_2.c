//#include <stdio.h>
//#include <locale.h>
//#include <string.h>
//#include <math.h>
//#define N 101
//
//int Count_Pos(int number)
//{
//	int p = 1;
//	while ((number / (int)pow(10, p)) > 0) p++; // цикл с предусловием
//	return p;
//}
//
//int Add_Number(int num, char str[], int leftPlaces)
//{
//	int numLen = Count_Pos(num); //количество цифр
//	int c = 0; //счётчик количество использованных цифр
//	char s[2] = "\0"; //строка, в которую будет записываться цифра
//	for (int i = numLen - 1; c < leftPlaces && i >= 0; i--)
//	{
//		int n = num / (int)pow(10, i);
//		s[0] = 48 + n;
//		strcat_s(str, N, s);
//		num = num % (int)pow(10, i);
//		c++;
//	}
//
//	return c;
//}
//
//void Input(int *pk, int *pdegree)
//{
//	int k, degree;
//	while (1)
//	{
//		printf_s("Введите длину последовательности не превышающее %d: ", N - 1);
//		scanf_s("%d", &k);
//
//		if (k > 0 && k <= 100) break;
//
//		if (k <= 0) puts("\nВведённое число должно быть положительным");
//		if (k > 100) printf_s("\nВведённое число не должно превышать %d\n", N - 1);
//	}
//
//	while (1)
//	{
//		printf("\nВведите целое число, в которое будут возводиться натуральные числа: ");
//		scanf_s("%d", &degree);
//
//		if (degree >= 0) break;
//
//		if (degree < 0) printf_s("\nВведённое число должно быть положительным");
//	}
//	*pk = k;
//	*pdegree = degree;
//}
//
//char* Get_String(int k, int degree)
//{
//	int count = 0;
//	char str[N * 2] = "";
//
//	for (int i = 1; count < k; i++)
//	{
//		int num = pow(i, degree);
//		count += Add_Number(num, str, k - count);
//	}
//	
//	return str;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	int k, degree;
//
//	Input(&k, &degree);
//
//	char string[N * 2] = "";
//	strcpy_s(string, N, Get_String(k, degree));
//
//	puts("\nПолученная строка:");
//	puts(string);
//
//	getch();
//}