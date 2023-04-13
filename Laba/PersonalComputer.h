#ifndef PERSONALCOMPUTER_H_
#define PERSONALCOMPUTER_H_
#include <string.h>

#define MAX_LENGTH_NAME 75

typedef struct PersonalComputer
{
	char CPU[MAX_LENGTH_NAME];
	char RAM[MAX_LENGTH_NAME];
	char GPU[MAX_LENGTH_NAME];
	int price;
}PersonalComputer;


int IsCorrectValue(PersonalComputer const pc);
void Report_Error(int codeError);
int Init(PersonalComputer* pc, char cpu[MAX_LENGTH_NAME], char ram[MAX_LENGTH_NAME], char gpu[MAX_LENGTH_NAME], int price);
void Init(PersonalComputer* pc, PersonalComputer const pc_original);
void Print(PersonalComputer const pc);
int Change_Value(PersonalComputer* pc);
PersonalComputer* Create_PC();
void Free_Struct(PersonalComputer* pc);

/// Возращает 1, если структуры равны, иначе возращает 0
int IsEqual_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2);
/// Возращает 1, если первая структура больше второй, иначе возращает 0
int IsMore_Structs(PersonalComputer const _pc1, PersonalComputer const _pc2);

#endif /* PERSONALCOMPUTER_H_ */