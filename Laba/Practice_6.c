//#include <stdio.h>
//#include <locale.h>
//#define N 25 //����� ���������
//
//void Output_Array(int Array[], int size)
//{
//
//    printf("\n ������ � �����������: \n ");
//
//    for (int i = 0; i < size; i++)  printf("%d ", Array[i]);
//
//}
//
//void Enter_Array(int Array[], int* psize)
//{
//    while (1)
//
//    {
//
//        printf("����� ������ ������� (2 - %d): ", N);
//
//        scanf_s("%d", &(*psize));
//        if ((*psize > 1) && (*psize <= N)) break;
//
//        else printf("�������� ����!\n");
//
//    }
//
//    printf("����� �������� �������: \n");
//
//    for (int i = 0; i < *psize; i++) scanf_s("%d", &Array[i]);
//}
//
//void Print_Numbers(int numbers[], int size)
//{
//    printf("\n ����� �����, ������� ������� ��������� � ������� ���������:\n ");
//
//    int a = 1;
//    int b = 1;
//    int c = a;
//
//    for (int i = 0; i < size; i++) //������� ���� ����� ���������
//        if (c < size)
//        {
//            printf_s("%d ", numbers[c]);
//            c = a + b;
//            a = b;
//            b = c;
//        }
//}
//
//void main()
//{
//    setlocale(LC_ALL, "Rus");
//
//    int numbers[N];
//
//    int size = 0; //����� �������
//    int* psize = &size; //��������� �� size
//    Enter_Array(numbers, psize); //���� ����� �������
//
//    Output_Array(numbers, size);
//
//    Print_Numbers(numbers, size); //������ �����, ������� ������� ��������� � ������� ���������
//}
