//#include <stdio.h>
//#include <locale.h>
//#include <string.h>
//#define N 100
//
//void Delete_Double(char string[])
//{
//	int i, j, k;
//
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		j = i + 1;
//
//		while (string[j] != '\0')
//			if (string[i] == string[j])
//			{
//				for (k = j; string[k] != '\0'; k++) string[k] = string[k + 1];
//
//				string[k] = '\0';
//			}
//			else j++;
//	}
//}
//
//int Get_Word(char str[], char word[], int *L)
//{
//	int j = 0; //������ �����
//	if(str[*L] == '\0') return 0;
//
//	for (int i = *L; str[i] != '\0'; i++, j++)
//	{
//		*L = *L + 1;
//		if (str[i] == ' ') //���� ������� ������ ������ ������, �� ����� �������������
//		{
//			
//			word[j] = '\0';
//			return 1;
//		}
//
//		word[j] = str[i];
//	}
//	word[j-1] = '\0'; //��������� ���������� ������� ���������� �����
//	return 1;
//}
//
//void Print_Words()
//{
//	printf_s("������� ������. ������������ ����� ������ = %d. ����� ������ ���������!\n", N);
//	char str[N];
//	fgets(str, N, stdin); //������ �������� �������������
//
//	int L = 0; //������ �������� ������� ������
//
//	char firstWord[N];
//	Get_Word(str, firstWord, &L);
//
//	Delete_Double(firstWord);
//
//	printf_s("\n���������� �������: ");
//	puts(firstWord);
//	
//	int countWords = 0; //���������� ���������� ����
//	printf_s("\n���������� �����:\n");
//	while (1)
//	{
//		char word[N];
//		if (Get_Word(str, word, &L) == 0) break; //���� �� ������ ����� �����, �� ���� �������������
//		int lettersInWord = strspn(word, firstWord); //��������� ���������� ��������� ����
//		if (lettersInWord == strlen(word))
//		{
//			countWords++;
//			puts(word);
//		}
//	}
//
//	if (countWords == 0) printf_s("\n---���������� ����� �����������---\n");
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	Print_Words();
//}