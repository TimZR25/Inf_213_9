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
//	int n = 0; // счетчик количества строк
//	while (1)
//	{
//		gets_s(temp);
//		if (temp[0] == '\0') break;   // строка не введена
//		p[n] = (char*)malloc(strlen(temp) + 1); // выделили память
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
//	if (isalnum(ch) > 0) return 1;
//	if (((ch >= 'А') && (ch <= 'Я')) || ((ch >= 'а') && (ch <= 'я'))) return 1;
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
//char* Delete_Subset(char* Str, char* Subset)
//{
//	int  i = 0, j, k, length = strlen(Subset);
//
//	while (Str[i] != '\0')
//
//		if (Str[i] == Subset[0])
//		{
//
//			k = i;
//
//			for (j = 1; j < length; j++) if (Str[i + j] != Subset[j]) break;
//
//			if (j == length)
//			{
//				for (j = k; Str[j + length] != '\0'; j++)
//
//					Str[j] = Str[j + length];
//
//				Str[j] = '\0';
//
//			}
//			else i++;
//		}
//		else i++;
//
//	return Str;
//}
//
//int* Statistic(char** text)
//{
//	int i, * count;
//	char _words[L][L];
//	// Определение количества строк в тексте
//	for (i = 0; text[i] != NULL; i++);
//	// Выделение памяти для массива статистики
//	count = new int[i + 1];
//	// Подсчет количества слов в каждой строке
//	for (i = 0; text[i] != NULL; i++)
//	{
//		count[i] = Words(text[i], _words);
//		for (int j = 0; j < count[i]; j++)
//		{
//			char ch = _words[j][0];
//			int ch_count = 0;
//			for (int k = 0; k < strlen(_words[j]); k++)
//			{
//				if (ch != _words[j][k]) continue;
//
//				ch_count++;
//			}
//			if (ch_count == 1) strcpy(text[i], Delete_Subset(text[i], _words[j]));
//		}
//	}
//	count[i] = 0;
//	return count;  // Вернуть указатель на массив статистики
//}
//
//void test(int a[])
//{
//
//}
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char** text;
//	int* stat;
//
//	puts("Подсчет слов в строке.\nВведите текст:");
//	text = Enter_Text();
//	stat = Statistic(text);
//
//	puts("\nРезультат:");
//	for (int i = 0; text[i] != NULL; i++) printf("%s ", text[i]);
//}
//
//
//
