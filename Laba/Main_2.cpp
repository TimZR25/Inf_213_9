//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//#include "PersonalComputer.h"
//#include <stdlib.h>
//
//#define MAX_LENGTH_NAME 75
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	PersonalComputer pc, pc2;
//
//	int codeError = 0;
//
//	char cpu[MAX_LENGTH_NAME], ram[MAX_LENGTH_NAME], gpu[MAX_LENGTH_NAME];
//	double price = 80000;
//
//	strncpy_s(cpu, "Ryzen 5 3600/DDR4/6 x 3.6 Hhz", MAX_LENGTH_NAME);
//	strncpy_s(ram, "AMD Radeon R9 Gamer Series/8 GB x2/3200 Mhz", MAX_LENGTH_NAME);
//	strncpy_s(gpu, "GeForce RTX 3070 Ti/8 GB/DisplayPort x3/GPU 1575 Mhz", MAX_LENGTH_NAME);
//
//
//	codeError = Init(&pc, cpu, ram, gpu, price);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	codeError = Init(&pc2, cpu, ram, gpu, price);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	Print(pc);
//	Print(pc2);
//
//
//	codeError = Set_Price(&pc, 54343.31);
//	if (codeError == 0) puts("Значения были успешно изменены\n");
//	else puts("Допущена ошибка в изменении значений");
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	Print(pc);
//	Print(pc2);
//
//	//---------------------------------------------------------------------
//	puts("---------------------Динамическая память---------------------\n");
//
//
//	PersonalComputer* pc_stack = Create_PC();
//	PersonalComputer* pc2_stack = Create_PC();
//
//	codeError = Init(pc_stack, cpu, ram, gpu, price);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	codeError = Init(pc2_stack, cpu, ram, gpu, price);
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	Print(*pc_stack);
//	Print(*pc2_stack);
//
//	codeError = Set_Price(pc_stack, 53500.25);
//	if (codeError == 0) puts("Значения были успешно изменены\n");
//	else puts("Допущена ошибка в изменении значений");
//	Report_Error(codeError);
//	if (codeError != 0) return;
//
//	Print(*pc_stack);
//	Print(*pc2_stack);
//
//	Free_Struct(pc_stack);
//	Free_Struct(pc2_stack);
//}