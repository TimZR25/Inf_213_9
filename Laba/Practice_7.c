//#include <stdio.h>
//#include <locale.h>
//#define N 7
//
//void Enter_Matrix(int Array[][N], int* m, int* n)
//{
//	int i, j;
//
//
//	while (1)
//	{
//		printf_s(" ����� ����������� ������� 2 <= m,n <= 7: ");
//
//		scanf_s("%d %d", &(*m), &(*n));
//
//		if (((*m >= 2) && (*n >= 2)) && ((*m <= 7) && (*n <= 7))) break;
//
//		else printf_s("\n �������� ����!\n");
//	}
//
//	printf_s("\n ����� ������� :\n ");
//
//	for (i = 0; i < *m; i++)
//		for (j = 0; j < *n; j++) scanf_s("%d", &Array[i][j]);
//}
//
//void Print_Matrix(int Array[][N], int m, int n)
//{
//	int i, j;
//
//	printf("\n ������� � �����������:\n");
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++) printf("%3d ", Array[i][j]);
//		printf("\n");
//	}
//}
//
//int Get_Max_Number(int Array[][N], int m, int n) //��������� ������������� �������������� �������� �������
//{
//	int max = 0;
//
//	for (int i = 0; i < m; i++) //������� ����� �������
//		for (int j = 0; j < n; j++) //������� ������� �������
//			if (Array[i][j] < 0)
//			{
//				if (max == 0) max = Array[i][j]; //������ ������� �������������� �����
//				if (max < Array[i][j]) max = Array[i][j]; //������������ �������� �������������� �����
//			}
//
//	return max;
//}
//
//void Print_Max_Index(int Array[][N], int m, int n) //���������� ����� � ������� ������������� �������������� �����
//{
//	int maxN = Get_Max_Number(Array, m, n);
//
//	if (maxN == 0)
//	{
//		printf_s("\n ��� ������������� ����������\n");
//		return;
//	}
//
//	printf_s("\n ������������ ������������� �������: %d\n", maxN);
//
//	printf_s("\n �������:\n");
//
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < n; j++)
//		{
//			if (Array[i][j] == maxN)
//			{
//				printf_s(" (%d, %d)   ", i, j);
//			}
//		}
//}
//
////void main()
////{
////	setlocale(LC_ALL, "Rus");
////
////	int array[N][N]; //������� ����� �����
////
////	int m, n; //������� �������
////
////	Enter_Matrix(array, &m, &n); //���� �������
////
////	Print_Matrix(array, m, n); //����� �������
////
////	Print_Max_Index(array, m, n); //����� ����������� �������������� �������� ������� � ������ ��������
////}
