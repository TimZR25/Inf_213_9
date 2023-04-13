//#include <stdio.h>
//#include <locale.h>
//#define N 25 //задаёт константу
//
//void Output_Array(int Array[], int size)
//{
//
//    printf("\n Массив – изначальный: \n ");
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
//        printf("Введи размер массива (2 - %d): ", N);
//
//        scanf_s("%d", &(*psize));
//        if ((*psize > 1) && (*psize <= N)) break;
//
//        else printf("Неверный ввод!\n");
//
//    }
//
//    printf("Введи элементы массива: \n");
//
//    for (int i = 0; i < *psize; i++) scanf_s("%d", &Array[i]);
//}
//
//void Print_Numbers(int numbers[], int size)
//{
//    printf("\n Вывод чисел, индексы которых совпадают с числами фибоначчи:\n ");
//
//    int a = 1;
//    int b = 1;
//    int c = a;
//
//    for (int i = 0; i < size; i++) //перебор всех чисел фибоначчи
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
//    int size = 0; //длина массива
//    int* psize = &size; //указатель на size
//    Enter_Array(numbers, psize); //ввод чисел массива
//
//    Output_Array(numbers, size);
//
//    Print_Numbers(numbers, size); //печать чисел, индексы которых совпадают с числами фибоначчи
//}
