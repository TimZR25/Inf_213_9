//#include <stdio.h>
//#include <locale.h>
//#define N 25
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
//void Output_Array(int Array[], int size)
//{
//
//    printf("\n ������ � ���������: \n ");
//
//    for (int i = 0; i < size; i++)  printf("%d ", Array[i]);
//}
//
//void Mini_Max(int Array[], int size, int* min, int* max)
//{
//    *min = *max = 0;
//
//    for (int i = 1; i < size; i++)
//    {
//
//        if (Array[i] < Array[*min])   *min = i;
//
//        if (Array[i] > Array[*max])  *max = i;
//
//    }
//}
//
//int Get_Duplicate_Count(int array[], int size, int index) //��������� ���������� ���������� ��������� �������
//{
//    int count = 0;
//
//    for (int i = 0; i < size; i++)
//        if (array[i] == array[index])
//            count++;
//
//    return count;
//}
//
//int Delete_Min_Max(int array[], int size, int min, int max) //�������� ����������� � ������������ ��������� �������, ����� ��������� ���������
//{
//    int countMin = Get_Duplicate_Count(array, size, min);
//    int countMax = Get_Duplicate_Count(array, size, max);
//
//    printf(" \n ������ - ���������: \n ");
//
//    if (array[min] == array[max])
//    {
//        countMin -= 1;
//        countMax = 1;
//    }
//    
//    for (int i = 0; i < size; i++)
//    {
//        if ((array[i] == array[min]) && (countMin > 1))
//        {
//            countMin--;
//            continue;
//        }
//
//        if ((array[i] == array[max]) && (countMax > 1))
//        {
//            countMax--;
//            continue;
//        }
//
//        printf_s("%d ", array[i]);
//    }
//}
//
//void main()
//{
//    setlocale(LC_ALL, "Rus");
//
//    int numbers[N]; //������ ���� ����� ��������� �����
//
//    int size = 0; //����� �������
//    int* psize = &size; //��������� �� size
//
//    Enter_Array(numbers, psize); //���� ����� �������
//
//    int min = 0; //������ ������������ �������� �������
//    int* pmin = &min; //��������� �� min
//
//    int max = 0; //������ ������������� �������� �������
//    int* pmax = &max; //��������� �� max
//
//    Mini_Max(numbers, size, pmin, pmax); //����� ������������ � �������������� ������� �������
//   
//    Output_Array(numbers, size); //����� �������
//
//    Delete_Min_Max(numbers, size, min, max); 
//}