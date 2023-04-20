#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


#define Laba_2

#ifdef Laba_1
#define LIST_H_
#include "PersonalComputer.h"
#include "list.h"

void main()
{

	setlocale(LC_ALL, "Rus");

	List* head1 = NULL;
	List* head2 = NULL;
	PersonalComputer pc1, pc2, pc3, pc4;

	int codeError = 0;

	codeError = Init(&pc1,
		(char*)"Ryzen 3 4100/DDR4/4 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/4 GB x2/2666 Mhz",
		(char*)"GeForce RTX 2060 Ti/6 GB/GPU 1365 Mhz", 67900);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc2,
		(char*)"Ryzen 5 3600/DDR4/6 x 3.6 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/8 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3070 Ti/8 GB/GPU 1575 Mhz", 125000);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc3,
		(char*)"Ryzen 7 5700G/DDR4/8 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/16 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3080/10 GB/GPU 1440 Mhz", 185000);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc4,
		(char*)"Ryzen 9 5950X/DDR4/16 x 3.4 Hhz",
		(char*)"Kingston FURY Beast Black/32 GB x2/5200 Mhz",
		(char*)"GeForce RTX 4090/24 GB/GPU 2535 Mhz", 212500);
	Report_Error(codeError);
	if (codeError != 0) return;

	head1 = Insert_Number(1, pc1, head1);
	head1 = Insert_Number(2, pc2, head1);
	head1 = Insert_Number(3, pc4, head1);
	head1 = Insert_Number(2, pc3, head1);

	Delete_Number(2, head1);

	printf("Среднее арифметическое: %d\n", Get_ArithmeticMean(head1));
	puts("");

	head2 = Insert_Number(1, pc2, head2);
	head2 = Insert_Number(2, pc4, head2);

	List* head = IsList_InList(head2, head1);
	
	Print_List(head);
}
#endif // Laba_1

#ifdef Laba_2
#include "btree.h"

void main()
{
	setlocale(LC_ALL, "Rus");

	btree* root = NULL;

	int N = 0;
	puts("Введите количество желаемых экземпляров структуры PersonalComputer:");
	scanf_s("%d", &N);
	puts("");
	getchar();

	for (int i = 0; i < N; i++)
	{
		PersonalComputer pc;
		Init(&pc, Get_PC());
		Ins_Btree(pc, &root);

		puts("");
		getchar();
	}

	Print_Btree_Up(root);

	PersonalComputer pc;
	puts("Введите значения элемента, которого надо исключить");
	Init(&pc, Get_PC());
	Delete(pc, &root);

	Print_Btree_Up(root);

	printf("\nКол-во листьев: %d", Get_CountLeaves(root, 0));
	
	root = Delete_Tree(root);
}

#endif // Laba_2


#ifdef PR_3
#define MY_LIST_H_
#include "PersonalComputer.h"
#include "my_list.h"

#define MAX_LENGTH_NAME 75

void main()
{
	setlocale(LC_ALL, "Rus");

	PersonalComputer pc1, pc2, pc3;

	int codeError = 0;

	codeError = Init(&pc1,
		(char*)"Ryzen 3 4100/DDR4/4 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/4 GB x2/2666 Mhz",
		(char*)"GeForce RTX 2060 Ti/6 GB/GPU 1365 Mhz", 67900);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc2,
		(char*)"Ryzen 5 3600/DDR4/6 x 3.6 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/8 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3070 Ti/8 GB/GPU 1575 Mhz", 125000);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc3,
		(char*)"Ryzen 7 5700G/DDR4/8 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/16 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3080/10 GB/GPU 1440 Mhz", 185000);
	Report_Error(codeError);
	if (codeError != 0) return;

	Item* head = NULL;

	head = InsertToStart(pc1, head);
	head = InsertToStart(pc2, head);
	head = InsertToStart(pc3, head);

	head = DeleteFromStart(head);

	//PrintList(head);
	DeleteList(head);

	Item* head2 = NULL;
	PersonalComputer pc4;

	codeError = Init(&pc4,
		(char*)"Ryzen 9 5950X/DDR4/16 x 3.4 Hhz",
		(char*)"Kingston FURY Beast Black/32 GB x2/5200 Mhz",
		(char*)"GeForce RTX 4090/24 GB/GPU 2535 Mhz", 212500);
	Report_Error(codeError);
	if (codeError != 0) return;

	head2 = InsertSort(pc1, head2);
	head2 = InsertSort(pc4, head2);
	head2 = InsertSort(pc2, head2);
	head2 = InsertSort(pc3, head2);

	DeleteValue(pc3, head2);
	PrintList(head2);
	DeleteList(head2);
}
#endif // PR_3

#ifdef PR_4
#define MY_QUEUE_H
#include "my_queue.h"
#include "PersonalComputer.h"
void main()
{
	setlocale(LC_ALL, "Rus");
	PersonalComputer pc1, pc2,pc3, pc4, pc5;
	int codeError = 0;

	codeError = Init(&pc1,
		(char*)"Ryzen 3 4100/DDR4/4 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/4 GB x2/2666 Mhz",
		(char*)"GeForce RTX 2060 Ti/6 GB/GPU 1365 Mhz", 67900);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc2,
		(char*)"Ryzen 5 3600/DDR4/6 x 3.6 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/8 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3070 Ti/8 GB/GPU 1575 Mhz", 125000);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc3,
		(char*)"Ryzen 7 5700G/DDR4/8 x 3.8 Hhz",
		(char*)"AMD Radeon R9 Gamer Series/16 GB x2/3200 Mhz",
		(char*)"GeForce RTX 3080/10 GB/GPU 1440 Mhz", 185000);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc4,
		(char*)"Ryzen 9 5950X/DDR4/16 x 3.4 Hhz",
		(char*)"Kingston FURY Beast Black/32 GB x2/5200 Mhz",
		(char*)"GeForce RTX 4090/24 GB/GPU 2535 Mhz", 212500);
	Report_Error(codeError);
	if (codeError != 0) return;

	codeError = Init(&pc5,
		(char*)"AMD Ryzen 12 7950X/DDR5/16 x 4.5 Hhz",
		(char*)"G.Skill TRIDENT Z Neo/64 GB x2/6000 Mhz",
		(char*)"GeForce RTX 4090/24 GB/GPU 2235 Mhz", 375000);
	Report_Error(codeError);
	if (codeError != 0) return;

	Item* head = NULL;

	head = Enqueue(&pc1, head);
	head = Enqueue(&pc3, head);
	head = Enqueue(&pc5, head);
	head = Enqueue(&pc4, head);
	head = Enqueue(&pc2, head);

	PersonalComputer* pc;

	head = Dequeue(head, &pc);
	Print(*pc);
	head = Dequeue(head, &pc);
	Print(*pc);
	head = Dequeue(head, &pc);
	Print(*pc);

	head = DeleteQueue(head);
}
#endif // PR_4

#ifdef PR_5
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() 
{
	char pathName[] = "file.txt";
	int fd = _open(pathName, O_RDWR | O_BINARY | O_CREAT | O_TRUNC | O_BINARY, S_IREAD | S_IWRITE);
	if (fd == -1)
	{
		puts("Ошибка в чтении/создании файла");
		return -1;
	}

	size_t cnt;
	char c = 'c';
	cnt = _write(fd, &c, sizeof(char));

	char s[] = {'s', 't', 'r', '\0'};
	cnt = _write(fd, &s, sizeof(s)/sizeof(s[0]) * sizeof(char));

	short shirnin = 13;
	cnt = _write(fd, &shirnin, sizeof(short));

	short i = 13;
	cnt = _write(fd, &i, sizeof(int));

	int arr[] = {1,2,3,4};
	cnt = _write(fd, &arr, sizeof(arr) / sizeof(arr[0]) * sizeof(int));

	float fl = 12.5f;
	cnt = _write(fd, &fl, sizeof(float));

	double d = 12.5;
	cnt = _write(fd, &d, sizeof(double));

	_close(fd);



	fd = _open(pathName, O_RDWR, S_IREAD | S_IWRITE);
	if (fd == -1)
	{
		puts("Ошибка в чтении/создании файла");
		return -1;
	}

	_lseek(fd, sizeof(c), SEEK_CUR);

	cnt = _read(fd, &s, sizeof(s) / sizeof(s[0]) * sizeof(char));
	printf("Read %d bytes, value = %s\n", sizeof(s) / sizeof(s[0]) * cnt, s);

	_lseek(fd, sizeof(short), SEEK_CUR);

	cnt = _read(fd, &i, sizeof(int));
	printf("Read %d bytes, value = %d\n", cnt, i);

	_lseek(fd, sizeof(arr) / sizeof(arr[0]) * sizeof(int), SEEK_CUR);
	_lseek(fd, sizeof(float), SEEK_CUR);

	cnt = _read(fd, &d, sizeof(double));
	printf("Read %ld bytes, value = %f\n", cnt, d);



	_lseek(fd, sizeof(char) + 2 * sizeof(char), SEEK_SET);
	char a = 'o';
	cnt = _write(fd, &a, sizeof(char));

	_lseek(fd, sizeof(double) + sizeof(float), SEEK_END);
	float b = 21.5f;
	cnt = _write(fd, &b, sizeof(float));

	_close(fd);
}
#endif // PR_5


#ifdef DEBUG
void main()
{
}
#endif // DEBUG

