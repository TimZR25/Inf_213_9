//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//
//int Count_Pos(int number)
//{
//	int p = 1;
//	while ((number / (int)pow(10, p)) > 0) p++; // цикл с предусловием
//	return p;
//}
//
//int PrintSequence(int maxL, int degree)
//{
//	int count = 0;
//	for (int i = 1; count < maxL; i++) //цикл натуральных чисел
//	{
//		int n = pow(i, degree); //возведение числа в степень
//		int len = Count_Pos(n); //кол-во разр€дов в числе
//
//		int num; //цифра
//		for (int j = len - 1; (j >= 0) && (count < maxL); j--) //перебор цифр числа
//		{
//			num = n / (int)pow(10,j);
//			printf_s("%d", num);
//			n = n % (int)pow(10, j);
//
//			count++;
//		}
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	printf("¬ведите число до какого значени€ будет последовательность:\n");
//	int maxL;
//	scanf_s("%d", &maxL);
//
//	printf("¬ведите в какую степень будут возводитьс€ натуральные числа:\n");
//	int degree;
//	scanf_s("%d", &degree);
//
//	PrintSequence(maxL, degree);
//}