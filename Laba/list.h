#ifdef LIST_H_
#define LIST_H_

#include "PersonalComputer.h"
#include <stdlib.h>
#include <stdio.h>

//Функции для работы с односвязным списком
#define N 6
struct List // Создание нового типа данных
{
	PersonalComputer value; // информационная часть
	List* next; // служебная часть
	List(PersonalComputer val = *Create_PC(), List* p = NULL) // конструктор
	{
		value = val;
		next = p;
	}
};
// Включение элемента в начало списка
List* Insert_First(PersonalComputer pc, List* head)
{
	List* q = new List(pc, head);
	return q;
}
// Включение элемента в конец списка
List* Add_Last(PersonalComputer pc, List* head)
{
	List* q = new List(pc), * p = head;
	if (head == NULL) return q;
	while (p->next != NULL)
		p = p->next;
	p->next = q;
	return head;
}
// Включение элемента в упорядоченный список
List* Insert_Sort(PersonalComputer pc, List* head)
{
	List* q = new List(pc), * p = head;
	if (head == NULL) return q;
	if (IsMore_Structs(head->value, pc)) // Включение элемента в начало списка
	{
		q->next = head;
		return q;
	}
	while (p->next != NULL)
		if (IsMore_Structs(p->next->value, pc)) // Включение элемента в середину списка
		{
			q->next = p->next;
			p->next = q;
			break;
		}
		else
			p = p->next;
	p->next = q; // Включение элемента в конец списка
	return head;
}
// Включение элемента в список по номеру
List* Insert_Number(int Num, PersonalComputer pc, List* head)
{
	List* p = head, * q = new List(pc);
	int i = 1;
	if (head == NULL) return q;
	if (Num == 1) // Включение элемента в начало списка
	{
		q->next = head;
		return q;
	}
	while (p->next != NULL)
		if (Num == i + 1) // Включение элемента в середину списка
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
	if (Num == i + 1) // Включение элемента в конец списка
		p->next = q;
	else
		puts("Такого номера в списке нет!");
	return head;
}
// Удаление элемента из списка по номеру
List* Delete_Number(int Num, List* head)
{
	List* p = head, * t;
	int i = 1;
	if (head == NULL) { puts("Список пуст!"); return NULL; }
	if (Num == 1) // Удаление элемента из начала списка
	{
		t = head;
		head = head->next;
		delete t;
		return head;
	}
	while (p->next != NULL)
		if (Num == i + 1) // Удаление элемента из середины списка
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
	puts("Такого номера в списке нет!"); // Такого номера в списке нет
	return head;
}
// Печать содержимого списка
void Print_List(List* head)
{
	List* p = head;
	puts("\n PRINT LIST");
	if (p == NULL) puts("Список пуст!");
	else
		while (p != NULL)
		{
			Print(p->value);
			p = p->next;
		}
}
// Получение данных элемента списка (по номеру)
PersonalComputer Get_Number(int Num, List* head)
{
	List* p = head;
	int i = 1;

	if (p == NULL) puts("Список пуст!");
	else
		while (p != NULL)
		{
			if (i == Num) return p->value;
			p = p->next;
			i++;
		}
}
// Получение адреса элемента в списке(по номеру)
PersonalComputer* Get_Number_Adress(int Num, List* head)
{
	List* p = head;
	int i = 1;

	if (p == NULL) puts("Список пуст!");
	else
		while (p != NULL)
		{
			if (i == Num) return &p->value;
			p = p->next;
			i++;
		}
}
// Подсчет количества элементов в списке
int Get_Count(List* head)
{
	List* p = head;
	int i = 0;

	if (p == NULL) puts("Список пуст!");
	else
		while (p != NULL)
		{
			p = p->next;
			i++;
		}
	return i;
}
// Поиск среднее арифметическое значение элементов списка
int Get_ArithmeticMean(List* head)
{
	List* p = head;
	int sum = 0;
	int count = Get_Count(head);

	if (p == NULL) puts("Список пуст!");
	else
		while (p != NULL)
		{
			sum += p->value.price;
			p = p->next;
		}

	return (int)sum / count;
}
// Проверяет входит ли список L1 в L2. Возращает адрес начала вхождения(нулевой адрес в противном случае)
List* IsList_InList(List* head1, List* head2)
{
	List* p1 = head1;
	List* p2 = head2;
	int flag = 0;

	if (p1 == NULL || p2 == NULL) puts("Список пуст!");
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