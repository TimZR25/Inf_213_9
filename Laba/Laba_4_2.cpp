//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>
//#include <malloc.h>
//#include <Windows.h>
//#define N 100
//#define L 15
//
//char** Enter_Text()
//{
//	char temp[N];
//	char** p = (char**) new char*;
//	int n = 0; // ������� ���������� �����
//	while (1)
//	{
//		gets_s(temp);
//		if (temp[0] == '\0') break;   // ������ �� �������
//		p[n] = (char*)malloc(strlen(temp) + 1); // �������� ������
//		strcpy(p[n], temp);
//		n++;
//		p = (char**)realloc(p, sizeof(char*) * (n + 1));
//	}
//	p[n] = NULL;
//	return p;
//}
//
//int Letter(char ch)
//{
//	if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z'))) return 1;
//	if (((ch >= '�') && (ch <= '�')) || ((ch >= '�') && (ch <= '�'))) return 1;
//	return 0;
//}
//
//int Words(char* String, char w[][L])
//{
//	int i = 0, j, k = 0, key = 0, n = strlen(String);
//	for (j = 0; j <= n; j++)
//		if (Letter(String[j]))
//		{
//			w[k][i] = String[j];
//			i++;
//			key = 1;
//		}
//		else
//			if (key)
//			{
//				w[k][i] = '\0';
//				i = 0; k++;
//				key = 0;
//			}
//	return k;
//}
//
//void Print_Words(char** text)
//{
//	int countWordsChanged = 0;
//	int countWords = 0;
//
//	int i, * count;
//	char _words[L][L];
//	// ����������� ���������� ����� � ������
//	for (i = 0; text[i] != NULL; i++);
//	// ��������� ������ ��� ������� ����������
//	count = new int[i + 1];
//
//	puts("���������: ");
//	// ������ ���� �� ��������� � ������ ������
//	for (i = 0; text[i] != NULL; i++)
//	{
//		count[i] = Words(text[i], _words);
//
//		countWords += count[i];
//
//		for (int j = 0; j < count[i]; j++)
//		{
//			char symbol, newSymbol;
//
//			symbol = _words[j][0];
//
//			//�������� �������� �� ����� ���������
//			if (symbol >= 'a' && symbol <= 'z' || symbol >= '�' && symbol <= '�') newSymbol = symbol - 32;
//			else
//			{
//				newSymbol = symbol;
//				symbol += 32;
//			}
//			
//			int wordChanged = 0;
//
//			//������� ���� � �����
//			for (int k = 1; k < strlen(_words[j]); k++)
//			{
//				if (symbol != _words[j][k]) continue;
//
//				_words[j][k] = newSymbol;
//
//				wordChanged = 1;
//			}
//
//			if (wordChanged == 1) countWordsChanged += 1;
//
//			printf("%s ", _words[j]);
//		}
//		puts("");
//	}
//	count[i] = 0;
//
//	printf("\n���� �� ���� ��������: %d\n", countWords - countWordsChanged);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char** text;
//
//	puts("������ ���� ����������� ��������� ������� ������� �� ��������� �����. ������� �����:");
//	text = Enter_Text();
//	Print_Words(text);
//}