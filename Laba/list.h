#ifdef LIST_H_
#define LIST_H_

#include "PersonalComputer.h"
#include <stdlib.h>
#include <stdio.h>

//������� ��� ������ � ����������� �������
#define N 6
struct List // �������� ������ ���� ������
{
	PersonalComputer value; // �������������� �����
	List* next; // ��������� �����
	List(PersonalComputer val = *Create_PC(), List* p = NULL) // �����������
	{
		value = val;
		next = p;
	}
};
// ��������� �������� � ������ ������
List* Insert_First(PersonalComputer pc, List* head)
{
	List* q = new List(pc, head);
	return q;
}
// ��������� �������� � ����� ������
List* Add_Last(PersonalComputer pc, List* head)
{
	List* q = new List(pc), * p = head;
	if (head == NULL) return q;
	while (p->next != NULL)
		p = p->next;
	p->next = q;
	return head;
}
// ��������� �������� � ������������� ������
List* Insert_Sort(PersonalComputer pc, List* head)
{
	List* q = new List(pc), * p = head;
	if (head == NULL) return q;
	if (IsMore_Structs(head->value, pc)) // ��������� �������� � ������ ������
	{
		q->next = head;
		return q;
	}
	while (p->next != NULL)
		if (IsMore_Structs(p->next->value, pc)) // ��������� �������� � �������� ������
		{
			q->next = p->next;
			p->next = q;
			break;
		}
		else
			p = p->next;
	p->next = q; // ��������� �������� � ����� ������
	return head;
}
// ��������� �������� � ������ �� ������
List* Insert_Number(int Num, PersonalComputer pc, List* head)
{
	List* p = head, * q = new List(pc);
	int i = 1;
	if (head == NULL) return q;
	if (Num == 1) // ��������� �������� � ������ ������
	{
		q->next = head;
		return q;
	}
	while (p->next != NULL)
		if (Num == i + 1) // ��������� �������� � �������� ������
		{
			q->next = p->next;
			p->next = q;
			return head;
		}
		else
		{
			i++;
			p = p->next;
		}
	if (Num == i + 1) // ��������� �������� � ����� ������
		p->next = q;
	else
		puts("������ ������ � ������ ���!");
	return head;
}
// �������� �������� �� ������ �� ������
List* Delete_Number(int Num, List* head)
{
	List* p = head, * t;
	int i = 1;
	if (head == NULL) { puts("������ ����!"); return NULL; }
	if (Num == 1) // �������� �������� �� ������ ������
	{
		t = head;
		head = head->next;
		delete t;
		return head;
	}
	while (p->next != NULL)
		if (Num == i + 1) // �������� �������� �� �������� ������
		{
			t = p->next;
			p->next = p->next->next;
			delete t;
			return head;
		}
		else
		{
			i++;
			p = p->next;
		}
	puts("������ ������ � ������ ���!"); // ������ ������ � ������ ���
	return head;
}
// ������ ����������� ������
void Print_List(List* head)
{
	List* p = head;
	puts("\n PRINT LIST");
	if (p == NULL) puts("������ ����!");
	else
		while (p != NULL)
		{
			Print(p->value);
			p = p->next;
		}
}
// ��������� ������ �������� ������ (�� ������)
PersonalComputer Get_Number(int Num, List* head)
{
	List* p = head;
	int i = 1;

	if (p == NULL) puts("������ ����!");
	else
		while (p != NULL)
		{
			if (i == Num) return p->value;
			p = p->next;
			i++;
		}
}
// ��������� ������ �������� � ������(�� ������)
PersonalComputer* Get_Number_Adress(int Num, List* head)
{
	List* p = head;
	int i = 1;

	if (p == NULL) puts("������ ����!");
	else
		while (p != NULL)
		{
			if (i == Num) return &p->value;
			p = p->next;
			i++;
		}
}
// ������� ���������� ��������� � ������
int Get_Count(List* head)
{
	List* p = head;
	int i = 0;

	if (p == NULL) puts("������ ����!");
	else
		while (p != NULL)
		{
			p = p->next;
			i++;
		}
	return i;
}
// ����� ������� �������������� �������� ��������� ������
int Get_ArithmeticMean(List* head)
{
	List* p = head;
	int sum = 0;
	int count = Get_Count(head);

	if (p == NULL) puts("������ ����!");
	else
		while (p != NULL)
		{
			sum += p->value.price;
			p = p->next;
		}

	return (int)sum / count;
}
// ��������� ������ �� ������ L1 � L2. ��������� ����� ������ ���������(������� ����� � ��������� ������)
List* IsList_InList(List* head1, List* head2)
{
	List* p1 = head1;
	List* p2 = head2;
	int flag = 0;

	if (p1 == NULL || p2 == NULL) puts("������ ����!");
	else
	{
		if (Get_Count(p2) < Get_Count(p1)) return NULL;
		while (p1 != NULL)
		{
			flag = 0;
			p2 = head2;
			while (p2 != NULL)
			{
				if (IsEqual_Structs(p1->value, p2->value)) {
					flag = 1;
					break;
				}
				p2 = p2->next;
			}
			if (flag == 0) return NULL;
			p1 = p1->next;
		}
		return head2;
	}
}

void DeleteList(List* head) {
	for (List* item = head; item != NULL; item = head) {
		head = head->next;
		free(item);
	}
}
#endif /* LIST_H_ */