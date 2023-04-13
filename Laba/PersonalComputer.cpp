#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "PersonalComputer.h"
#include <stdlib.h>

#define MAX_LENGTH_NAME 75

int IsCorrectValue(PersonalComputer const _pc)
{
	if (_pc.price <= 0) return 1;
	if (strlen(_pc.CPU) == 0) return 2;
	if (strlen(_pc.RAM) == 0) return 3;
	if (strlen(_pc.GPU) == 0) return 4;

	return 0;
}

void Report_Error(int codeError)
{
	switch (codeError)
	{
	case 1:
		puts("������ � ����������� ����. �������� ���� ���������������\n");
		break;
	case 2:
		puts("������ � ����������� ����������. �������� �� ���� �������\n");
		break;
	case 3:
		puts("������ � ����������� ����������� ������. �������� �� ���� �������\n");
		break;
	case 4:
		puts("������ � ����������� ������������ ����������. �������� �� ���� �������\n");
		break;
	default:
		break;
	}
}

int Init(PersonalComputer* pc, char cpu[MAX_LENGTH_NAME], char ram[MAX_LENGTH_NAME], char gpu[MAX_LENGTH_NAME], int price)
{
	strncpy_s(pc->CPU, cpu, MAX_LENGTH_NAME);
	strncpy_s(pc->RAM, ram, MAX_LENGTH_NAME);
	strncpy_s(pc->GPU, gpu, MAX_LENGTH_NAME);

	pc->price = price;

	return IsCorrectValue(*pc);
}

void Init(PersonalComputer* pc, PersonalComputer const pc_original)
{
	strncpy_s(pc->CPU, pc_original.CPU, MAX_LENGTH_NAME);
	strncpy_s(pc->RAM, pc_original.RAM, MAX_LENGTH_NAME);
	strncpy_s(pc->GPU, pc_original.GPU, MAX_LENGTH_NAME);

	pc->price = pc_original.price;
}

void Print(PersonalComputer const _pc)
{
	printf("CPU: %s\n", _pc.CPU);
	printf("RAM: %s\n", _pc.RAM);
	printf("GPU: %s\n", _pc.GPU);
	printf("����: %d\n", _pc.price);
	puts("");
}

int Change_Value(PersonalComputer* pc)
{
	int codeError = 0;
	pc->price = 75499;

	codeError = IsCorrectValue(*pc);

	return codeError;
}

PersonalComputer* Create_PC()
{
	return (PersonalComputer*)malloc(sizeof(PersonalComputer));
}

void Free_Struct(PersonalComputer* pc)
{
	free(pc);
}

int IsEqual_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2)
{
	return _pc1.price == _pc2.price;
}

int IsMore_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2)
{
	return _pc1.price > _pc2.price;
}