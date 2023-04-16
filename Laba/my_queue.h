#ifdef MY_QUEUE_H
#define MY_QUEUE
#include <stdio.h>
#include <stdlib.h>
#include "PersonalComputer.h"
typedef struct Item {
	PersonalComputer* value;
	struct Item* next;
	struct Item* prev;
}Item;

Item* Enqueue(PersonalComputer* val, Item* head); //Вставление элемента в начало списка(конца очереди)
Item* Dequeue(Item* head, PersonalComputer** out_pc); //Вытаскивание элемента из конца списка(начала очереди)
Item* DeleteQueue(Item* head); //Удаление очереди
void PrintQueue(Item* head); //Печать элементов очереди
#endif // !MY_QUEUE_H
