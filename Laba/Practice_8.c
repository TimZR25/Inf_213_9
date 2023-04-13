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
//	int j = 0; //индекс слова
//	if(str[*L] == '\0') return 0;
//
//	for (int i = *L; str[i] != '\0'; i++, j++)
//	{
//		*L = *L + 1;
//		if (str[i] == ' ') //если текущий символ строки пробел, то слово заканчивается
//		{
//			
//			word[j] = '\0';
//			return 1;
//		}
//
//		word[j] = str[i];
//	}
//	word[j-1] = '\0'; //обработка последнего индекса последнего слова
//	return 1;
//}
//
//void Print_Words()
//{
//	printf_s("Введите строку. Максимальная длина строки = %d. После строка обрежется!\n", N);
//	char str[N];
//	fgets(str, N, stdin); //строка введённая пользователем
//
//	int L = 0; //индекс текущего символа строки
//
//	char firstWord[N];
//	Get_Word(str, firstWord, &L);
//
//	Delete_Double(firstWord);
//
//	printf_s("\nДопустимые символы: ");
//	puts(firstWord);
//	
//	int countWords = 0; //количество подходящих слов
//	printf_s("\nПодходящие слова:\n");
//	while (1)
//	{
//		char word[N];
//		if (Get_Word(str, word, &L) == 0) break; //если не удаётся взять слово, то цикл заканчивается
//		int lettersInWord = strspn(word, firstWord); //возращает количество совпавших букв
//		if (lettersInWord == strlen(word))
//		{
//			countWords++;
//			puts(word);
//		}
//	}
//
//	if (countWords == 0) printf_s("\n---Подходящие слова отсутствуют---\n");
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	Print_Words();
//}