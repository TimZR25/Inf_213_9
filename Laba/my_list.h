#ifdef MY_LIST_H_
#include "PersonalComputer.h"
#include <stdlib.h>

typedef struct Item {
	PersonalComputer* pc;
	Item* next;
} Item;


Item* InsertToStart(PersonalComputer newValue, Item* head);
Item* DeleteFromStart(Item* head);
void DeleteList(Item* head);
void PrintList(Item* head);
Item* InsertSort(PersonalComputer newValue, Item* head);
Item* DeleteValue(PersonalComputer value, Item* head);

Item* InsertToStart(PersonalComputer newValue, Item* head) {
	Item* newItem = (Item*)malloc(sizeof(Item));
	newItem->pc = &newValue;
	newItem->next = head;
	return newItem;
}

Item* DeleteFromStart(Item* head) {
	Item* item = head;
	if (item != NULL) {
		head = head->next;
		free(item);
	}
	return head;
}

void DeleteList(Item* head) {
	for (Item* item = head; item != NULL; item = head) {
		head = head->next;
		free(item);
	}
}

void PrintList(Item* head) {
	for (Item* item = head; item != NULL; item = item->next)
		Print(*(item->pc));
}

Item* InsertSort(PersonalComputer newValue, Item* head) {
	Item* item = (Item*)malloc(sizeof(Item));
	item->pc = &newValue;
	item->next = NULL;
	Item* tmp = head;
	if (head == NULL) return item;
	if (IsMore_Structs(*(head->pc), newValue))
	{
		item->next = head;
		return item;
	}
	while (tmp->next != NULL) {
		if (IsMore_Structs(*(tmp->next->pc), newValue))
		{
			item->next = tmp->next;
			tmp->next = item;
			break;
		}
		else tmp = tmp->next;
	}
	tmp->next = item;
	return head;
}

Item* DeleteValue(PersonalComputer value, Item* head)
{
	Item* prev = head;
	Item* item;
	if (head == NULL) return NULL;

	if (IsEqual_Structs(*(head->pc), value)) {
		item = head;
		head = head->next;
		free(item);
		return head;
	}
	while (prev->next != NULL) {
		if (IsEqual_Structs(*(prev->next->pc), value)) {
			item = prev->next;
			prev->next = prev->next->next;
			free(item);
			return head;
		}
		else prev = prev->next;
	}
}

#endif /* MY_LIST_H_ */
