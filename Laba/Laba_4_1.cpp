//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>
//#include <Windows.h>
//#define L 15
//
//void Print_Kurs(char* currentKurs, char kurs[L][L]) //����� �����
//{
//	for (int i = 0; i < L; i++)
//	{
//		if (strcmp(currentKurs, kurs[i]) == 0)
//		{
//			int correctedI = i % 4;
//			if (correctedI == 0)	puts("\n������� ����� �� �����");
//			if (correctedI == 1)	puts("\n������� ����� �� ������");
//			if (correctedI == 2)	puts("\n������� ����� �� ��");
//			if (correctedI == 3)	puts("\n������� ����� �� �����");
//			return;
//		}
//	}
//}
//
//void Print_Prikaz(char* currentPrikaz, char prikaz[L][L]) //����� �������
//{
//	for (int i = 0; i < L; i++)
//	{
//		if (strcmp(currentPrikaz, prikaz[i]) == 0)
//		{
//			int correctedI = i % 4;
//			if (correctedI == 0)	puts("\n������� �� ������� ����");
//			if (correctedI == 1)	puts("\n������� �������� �������");
//			if (correctedI == 2)	puts("\n������� �������� �����");
//			if (correctedI == 3)	puts("\n������� �������� ������");
//			return;
//		}
//	}
//}
//
//void Handle_Kurs()
//{
//	char kurs[L][L] = { "sever\n", "vostok\n", "ug\n", "zapad\n",
//		"�����\n", "������\n", "��\n", "�����\n" }; //��������� �����
//
//	char prikaz[L][L] = { "vpered\n", "vpravo\n", "nazad\n", "vlevo\n",
//		"������\n", "������\n", "�����\n", "�����\n" }; //��������� �������
//
//	char* currentKurs = new char;
//	char* currentPrikaz = new char;
//	char temp[L];
//
//	while (1)
//	{
//		printf_s("������� ������� ���� (sever/�����, vostok/������, ug/��, zapad/�����): ");
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
//		printf_s("\n�������� ����\n");
//	}
//	strcpy(currentKurs, temp);
//
//	while (1)
//	{
//		printf_s("\n������� ������ (vpered/������, vpravo/������, nazad/�����, vlevo/�����): ");
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
//		printf_s("\n�������� ����\n");
//	}
//	strcpy(currentPrikaz, temp);
//
//	printf_s("\n������� ����:");
//	Print_Kurs(currentKurs, kurs);
//	printf_s("\n������:");
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
//	printf_s("\n����� ����:");
//	Print_Kurs(currentKurs, kurs);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Handle_Kurs(); //�������� ���� � ����������� �� �������
//}