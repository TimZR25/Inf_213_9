//#include <malloc.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <Windows.h>
//
//void Input()
//{
//	char ch;
//	int size = 0;
//	int* array = (int*)malloc(size * sizeof(int));
//
//	while ((ch = getchar()) != '\n')
//	{
//			size++;
//			array = (int*)realloc(array, size * sizeof(int));
//
//			array[size - 1] = ch;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%i \t %c\n", i, array[i]);
//	}
//
//	free(array);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Input();
//}