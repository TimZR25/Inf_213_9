//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>
//#include <Windows.h>
//#define L 15
//
//void Print_Kurs(char* currentKurs, char kurs[L][L]) //вывод курса
//{
//	for (int i = 0; i < L; i++)
//	{
//		if (strcmp(currentKurs, kurs[i]) == 0)
//		{
//			int correctedI = i % 4;
//			if (correctedI == 0)	puts("\nКорабль плывёт на север");
//			if (correctedI == 1)	puts("\nКорабль плывёт на восток");
//			if (correctedI == 2)	puts("\nКорабль плывёт на юг");
//			if (correctedI == 3)	puts("\nКорабль плывёт на запад");
//			return;
//		}
//	}
//}
//
//void Print_Prikaz(char* currentPrikaz, char prikaz[L][L]) //вывод приказа
//{
//	for (int i = 0; i < L; i++)
//	{
//		if (strcmp(currentPrikaz, prikaz[i]) == 0)
//		{
//			int correctedI = i % 4;
//			if (correctedI == 0)	puts("\nКорабль не изменил курс");
//			if (correctedI == 1)	puts("\nКорабль повернул направо");
//			if (correctedI == 2)	puts("\nКорабль повернул назад");
//			if (correctedI == 3)	puts("\nКорабль повернул налево");
//			return;
//		}
//	}
//}
//
//void Handle_Kurs()
//{
//	char kurs[L][L] = { "sever\n", "vostok\n", "ug\n", "zapad\n",
//		"север\n", "восток\n", "юг\n", "запад\n" }; //возможные курсы
//
//	char prikaz[L][L] = { "vpered\n", "vpravo\n", "nazad\n", "vlevo\n",
//		"вперед\n", "вправо\n", "назад\n", "влево\n" }; //возможные приказы
//
//	char* currentKurs = new char;
//	char* currentPrikaz = new char;
//	char temp[L];
//
//	while (1)
//	{
//		printf_s("Введите текущий курс (sever/север, vostok/восток, ug/юг, zapad/запад): ");
//
//		fgets(temp, L, stdin);
//
//		int isCorrectInput = 0;
//		for (int i = 0; i < L; i++)
//		{
//			if (strcmp(temp, kurs[i]) == 0)
//			{
//				isCorrectInput = 1;
//				break;
//			}
//		}
//
//		if (isCorrectInput == 1) break;
//
//		printf_s("\nНеверный ввод\n");
//	}
//	strcpy(currentKurs, temp);
//
//	while (1)
//	{
//		printf_s("\nВведите приказ (vpered/вперед, vpravo/вправо, nazad/назад, vlevo/влево): ");
//
//		fgets(temp, L, stdin);
//
//		int isCorrectInput = 0;
//		for (int i = 0; i < L; i++)
//			if (strcmp(temp, prikaz[i]) == 0)
//			{
//				isCorrectInput = 1;
//				break;
//			}
//
//		if (isCorrectInput == 1) break;
//
//		printf_s("\nНеверный ввод\n");
//	}
//	strcpy(currentPrikaz, temp);
//
//	printf_s("\nТекущий курс:");
//	Print_Kurs(currentKurs, kurs);
//	printf_s("\nПриказ:");
//	Print_Prikaz(currentPrikaz, prikaz);
//
//
//	for (int i = 0; i < L; i++)
//	{
//		if (strcmp(currentPrikaz, prikaz[i]) == 0)
//		{
//			for (int j = 0; j < L; j++)
//			{
//				if (strcmp(currentKurs, kurs[j]) == 0)
//				{
//					int correctedI = i % 4;
//					int correctedJ = j % 4;
//					strcpy(currentKurs, kurs[(correctedI + correctedJ) % 4]);
//					break;
//				}
//			}
//		}
//	}
//
//	printf_s("\nНовый курс:");
//	Print_Kurs(currentKurs, kurs);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Handle_Kurs(); //изменяет курс в зависимости от приказа
//}