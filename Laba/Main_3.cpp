//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//#include "PersonalComputer.h"
//#include "my_list.h"
//#include <stdlib.h>
//
//#define MAX_LENGTH_NAME 75
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	PersonalComputer pc1, pc2, pc3;
//
//	int codeError = 0;
//
//	codeError = Init(&pc1,
//		(char*)"Ryzen 3 4100/DDR4/4 x 3.8 Hhz",
//		(char*)"AMD Radeon R9 Gamer Series/4 GB x2/2666 Mhz",
//		(char*)"GeForce RTX 2060 Ti/6 GB/GPU 1365 Mhz", 67900);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	codeError = Init(&pc2,
//		(char*)"Ryzen 5 3600/DDR4/6 x 3.6 Hhz",
//		(char*)"AMD Radeon R9 Gamer Series/8 GB x2/3200 Mhz",
//		(char*)"GeForce RTX 3070 Ti/8 GB/GPU 1575 Mhz", 125000);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	codeError = Init(&pc3,
//		(char*)"Ryzen 7 5700G/DDR4/8 x 3.8 Hhz",
//		(char*)"AMD Radeon R9 Gamer Series/16 GB x2/3200 Mhz",
//		(char*)"GeForce RTX 3080/10 GB/GPU 1440 Mhz", 185000);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	Item* head = NULL;
//
//	head = InsertToStart(pc1, head);
//	head = InsertToStart(pc2, head);
//	head = InsertToStart(pc3, head);
//
//	head = DeleteFromStart(head);
//
//	//PrintList(head);
//	DeleteList(head);
//
//	Item* head2 = NULL;
//	PersonalComputer pc4;
//
//	codeError = Init(&pc4,
//		(char*)"Ryzen 9 5950X/DDR4/16 x 3.4 Hhz",
//		(char*)"Kingston FURY Beast Black/32 GB x2/5200 Mhz",
//		(char*)"GeForce RTX 4090/24 GB/GPU 2535 Mhz", 212500);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	head2 = InsertSort(pc1, head2);
//	head2 = InsertSort(pc4, head2);
//	head2 = InsertSort(pc2, head2);
//	head2 = InsertSort(pc3, head2);
//	
//	DeleteValue(pc3, head2);
//	PrintList(head2);
//	DeleteList(head2);
//}