#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


#define PR_4

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
	PersonalComputer pc1, pc2, pc3, pc4, pc5;
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

	head = Enqueue(pc1, head);
	head = Enqueue(pc3, head);
	head = Enqueue(pc5, head);
	head = Enqueue(pc4, head);
	head = Enqueue(pc2, head);

	PersonalComputer pc;

	head = Dequeue(head, &pc);
	Print(pc);
	head = Dequeue(head, &pc);
	Print(pc);
	head = Dequeue(head, &pc);
	Print(pc);

	head = DeleteQueue(head);
}
#endif // PR_4

#ifdef DEBUG
void main()
{
}
#endif // DEBUG

