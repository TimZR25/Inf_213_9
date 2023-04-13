#ifdef MY_QUEUE_H
#define MY_QUEUE
#include <stdio.h>
#include <stdlib.h>
#include "PersonalComputer.h"
typedef struct Item {
	PersonalComputer value;
	struct Item* next;
	struct Item* prev;
}Item;

Item* Enqueue(PersonalComputer val, Item* head);
Item* Dequeue(Item* head, PersonalComputer* out_pc);
Item* DeleteQueue(Item* head);
void PrintQueue(Item* head);
#endif // !MY_QUEUE_H
