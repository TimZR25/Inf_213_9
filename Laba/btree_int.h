#include "PersonalComputer.h"

typedef struct btree
{
	int value; // �������������� �����
	btree* left, * right; // ��������� �����
}btree;



void Ins_Btree(int val, btree** q); // ���������� ������� � �������� ������ ������
void Print_Btree_Up(btree* p); // ������ ��������� ������ � ������� �����������
void Print_Btree_Down(btree* p); // ������ ��������� ������ � ������� ��������
void Delete(int key, btree** node); // �������� ������� � �������� ��������� key
int Get_CountLeaves(btree* p);
btree* Delete_Tree(btree* p); // �������� ����� ������