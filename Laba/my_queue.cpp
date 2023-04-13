#define MY_QUEUE_H
#include "my_queue.h"
#ifdef MY_QUEUE
#include <stdio.h>
#include <stdlib.h>
Item* Enqueue(PersonalComputer val, Item* head) {
	Item* newItem;
	struct Item* tmp = head;
	newItem = (Item*)malloc(sizeof(Item));
	newItem->value = val;
	// Вставка элемента в пустую очередь
	if (NULL == head) {
		newItem->prev = newItem;
		newItem->next = newItem;
		head = newItem;
		return head;
	}

	// Вставка элемента в начало
	newItem->next = tmp;
	newItem->prev = newItem;
	tmp->prev = newItem;
	head = newItem;
	
	return head;
}

Item* Dequeue(Item* head, PersonalComputer* out_pc) {
	Item* tmp = head;
	// Если пытаемся удалить элемент из пустогой очереди
	if (NULL == head) {
		printf("List empty!\n");
		out_pc = NULL;
		return head;
	}

	// Поиск последнего элемента
	while (tmp->next != tmp) tmp = tmp->next;

	// Если удаляется единственный элемент очереди
	if (tmp->next == tmp->prev) {
		*out_pc = tmp->value;
		free(tmp);
		return NULL;
	}

	// Перестраиваем связь
	tmp->prev->next = tmp->prev;

	// Удаляем найденный элемент
	*out_pc = tmp->value;
	free(tmp);
	return head;
}

Item* DeleteQueue(Item* head) {
	Item* tmp = head;
	Item* itemForRemove;
	if (NULL == head) {
		return NULL;
	}
	//Если в очереди один элемент
	if (tmp->next == tmp->prev)
	{
		itemForRemove = tmp;
		free(itemForRemove);
	}
	do {
		itemForRemove = tmp;
		tmp = tmp->next;
		free(itemForRemove);
	} while (tmp->next != tmp);
	free(tmp);
	return NULL;
}

void PrintQueue(Item* head)
{
	Item* tmp = head;
	if (NULL == head)
	{
		printf("List empty!\n");
		return;
	}
	if (tmp->next == tmp)
	{
		Print(tmp->value);
		return;
	}
	do
	{
		Print(tmp->value);
		tmp = tmp->next;
	} while (tmp->next != tmp);
	Print(tmp->value);
}
#endif // MY_QUEUE