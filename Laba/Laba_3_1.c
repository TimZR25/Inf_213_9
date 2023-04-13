//#include <stdio.h>
//#include <locale.h>
//#include <string.h>
//#define N 26
//
//char* Delete_Subset(char* Str, char* Subset)
//{
//	int  i = 0, j, k, length = strlen(Subset);
//
//	while (Str[i] != '\0')
//		if (Str[i] == Subset[0])
//		{
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
//			}
//			else i++;
//		}
//		else i++;
//
//	return Str;
//}
//
//int Get_Next_Word(char str[], char word[])
//{
//	if (strcmp(str, "\0") == 0)
//		return 0;
//
//	strcpy_s(word, N, str);
//
//	char *p = strchr(str, ' ');
//
//	if (p == NULL)
//	{
//		strcpy_s(str, N, "\0");
//		return 1;
//	}
//
//	Delete_Subset(word, p);
//
//	strcpy_s(str, N, p+1);
//
//	return 1;
//}
//
//void Add_Capital_Word(char resStr[], char word[])
//{
//	char symbol = word[0];
//	for (int i = 1; i < strlen(word); i++)
//	{
//		if (symbol != word[i]) continue;
//
//		if (word[i] >= 97 && word[i] <= 122)
//			word[i] = word[i] - 32;
//
//	}
//	
//	strcat_s(resStr, N, word);
//	strcat_s(resStr, N+1, " ");
//}
//
//void Process_String()
//{
//	char string[N];
//	printf_s("Введите строку. Максимальная длина строки = %d. После строка обрежется!\n", N - 1);
//	fgets(string, N, stdin);
//
//
//	char str[N] = "";
//	strcpy_s(str, N, string);
//
//	char resStr[N+1] = "";
//	char word[N] = "";
//
//	while (Get_Next_Word(str, word) != 0)
//		Add_Capital_Word(resStr, word);
//
//	puts(resStr);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	Process_String();
//}