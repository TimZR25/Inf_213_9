//#include <stdio.h>
//#include <locale.h>
//#include <stdlib.h>
//
//int min_for(int N)
//{
//	int a; //���������� � ������� ����� ������������ �������� ������������������
//	int min = INT_MAX; 
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("\n������� �����: ");
//		scanf_s("%d", &a);
//		min = a < min ? a : min;
//	}
//
//	printf("\n���������� �����: ");
//	printf("%d", min);
//}
//
//int min_while(int N)
//{
//	int a; //���������� � ������� ����� ������������ �������� ������������������
//	int min = INT_MAX;
//	int i = 0;
//	while (i < N)
//	{
//		printf("\n������� �����: ");
//		scanf_s("%d", &a);
//		min = a < min ? a : min;
//
//		i++;
//	}
//
//	printf("\n���������� �����: ");
//	printf("%d", min);
//}
//
//int min_do_while(int N)
//{
//	int a; //���������� � ������� ����� ������������ �������� ������������������
//	int min = INT_MAX;
//	int i = 0;
//	do
//	{
//		printf("\n������� �����: ");
//		scanf_s("%d", &a);
//		min = a < min ? a : min;
//
//		i++;
//	} while (i < N);
//
//	printf("\n���������� �����: ");
//	printf("%d", min);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	printf("������� ����� ������������������: ");
//	int N;
//	scanf_s("%d", &N);
//
//	printf("\n�������� ������� �������: for = (1), while = (2), do while = (3): ");
//	int s;
//	scanf_s("%d", &s);
//
//	if (s == 1)
//	{
//		min_for(N);
//	}
//	else
//	{
//		if (s == 2)
//		{
//			min_while(N);
//		}
//		else
//		{
//			min_do_while(N);
//		}
//	}
//}