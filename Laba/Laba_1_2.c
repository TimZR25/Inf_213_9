//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//
//int Count_Pos(int number)
//{
//	int p = 1;
//	while ((number / (int)pow(10, p)) > 0) p++; // ���� � ������������
//	return p;
//}
//
//int PrintSequence(int maxL, int degree)
//{
//	int count = 0;
//	for (int i = 1; count < maxL; i++) //���� ����������� �����
//	{
//		int n = pow(i, degree); //���������� ����� � �������
//		int len = Count_Pos(n); //���-�� �������� � �����
//
//		int num; //�����
//		for (int j = len - 1; (j >= 0) && (count < maxL); j--) //������� ���� �����
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
//	printf("������� ����� �� ������ �������� ����� ������������������:\n");
//	int maxL;
//	scanf_s("%d", &maxL);
//
//	printf("������� � ����� ������� ����� ����������� ����������� �����:\n");
//	int degree;
//	scanf_s("%d", &degree);
//
//	PrintSequence(maxL, degree);
//}