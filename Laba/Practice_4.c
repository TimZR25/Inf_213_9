//#include <stdio.h>
//#include <locale.h>
//#include <stdlib.h>
//
//int IsNumber(char line[])
//{
//
//	char numbers[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //������ ����
//	int isNumber = 0;
//
//	for (int i = 0; i < strlen(line); i++) //������� ��������� ������
//	{
//		isNumber = 0;
//		for (int j = 0; j < sizeof(numbers); j++) //������� �������� �� ������ ������
//		{
//			if (line[i] == numbers[j]) //���� ������� ������ ������� ������, �� �� ������� �� �����
//			{
//				isNumber = 1;
//				break;
//			}
//		}
//		if (isNumber == 0) //���� ������� ������ �� �����, �� ������� �� �������� �����
//		{
//			break;
//		}
//	}
//	if (isNumber)
//	{
//		unsigned long long num = 0;
//		num = strtoull(line, NULL, 10);
//
//		if (num > ULONG_MAX || num == 0) isNumber = 0; //�������� ������� �� ����� �� ���������� ��������
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
//	printf("\n������� ����������� �����:\n");
//	rstr = gets(line); //���������� ������
//
//	while (IsNumber(line) == 0) //���� ���� �� ����� ���������� �����
//	{
//		rstr = gets(line);
//		if (IsNumber(line) == 0)
//		{
//			printf("\n����������� ������� �����. ������� ����������� �����.\n");
//		}
//	}
//
//	unsigned long num = 0;
//	num = strtoull(line, NULL, 10); //������� ������ � �����
//
//	if ((num >= a) && (b >= num))
//	{
//		printf_s("\n����� %lu ������ � �������� ��������\n", num);
//	}
//	else
//	{
//		printf_s("\n����� %lu �� ������ � �������� ��������\n", num);
//	}
//}
//
////int main()
////{
////	setlocale(LC_ALL, "Rus");
////
////	unsigned long a, b;
////	printf("������� ����������� ����� ��� ����� � ������ ������� ���������:\n");
////	scanf_s("%lu %lu", &a, &b);
////
////	CheckTheRange(a, b);
////}