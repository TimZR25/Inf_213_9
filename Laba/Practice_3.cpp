//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//#include "PersonalComputer.h"
//#include <stdlib.h>
//
//#define MAX_LENGTH_NAME 75
//
//int IsCorrectValue(PersonalComputer const _pc)
//{
//	if (_pc.price <= 0) return 1;
//	if (strlen(_pc.CPU) == 0) return 2;
//	if (strlen(_pc.RAM) == 0) return 3;
//	if (strlen(_pc.GPU) == 0) return 4;
//
//	return 0;
//}
//
//void Report_Error(int codeError)
//{
//	switch (codeError)
//	{
//	case 1:
//		puts("Ошибка в определении цены. Значение цены неположительное\n");
//		break;
//	case 2:
//		puts("Ошибка в определении процессора. Значения не были введены\n");
//		break;
//	case 3:
//		puts("Ошибка в определении оперативной памяти. Значения не были введены\n");
//		break;
//	case 4:
//		puts("Ошибка в определении графического процессора. Значения не были введены\n");
//		break;
//	default:
//		break;
//	}
//}
//
//int Init(PersonalComputer* pc, char cpu[MAX_LENGTH_NAME], char ram[MAX_LENGTH_NAME], char gpu[MAX_LENGTH_NAME], int price)
//{
//	strncpy_s(pc->CPU, cpu, MAX_LENGTH_NAME);
//	strncpy_s(pc->RAM, ram, MAX_LENGTH_NAME);
//	strncpy_s(pc->GPU, gpu, MAX_LENGTH_NAME);
//
//	pc->price = price;
//
//	return IsCorrectValue(*pc);
//}
//
//void Print(PersonalComputer const _pc)
//{
//	printf("CPU: %s\n", _pc.CPU);
//	printf("RAM: %s\n", _pc.RAM);
//	printf("GPU: %s\n", _pc.GPU);
//	printf("Цена: %d\n", _pc.price);
//	puts("");
//}
//
//int IsEqual_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2)
//{
//	return _pc1.price == _pc2.price;
//}
//
//
//int IsMore_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2)
//{
//	return _pc1.price > _pc2.price;
//}