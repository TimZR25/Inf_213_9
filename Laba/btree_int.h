#include "PersonalComputer.h"

typedef struct btree
{
	int value; // информационная часть
	btree* left, * right; // служебная часть
}btree;



void Ins_Btree(int val, btree** q); // добавление вершины в бинарное дерево поиска
void Print_Btree_Up(btree* p); // печать бинарного дерева в порядке возрастания
void Print_Btree_Down(btree* p); // печать бинарного дерева в порядке убывания
void Delete(int key, btree** node); // Удаление вершины с заданным значением key
int Get_CountLeaves(btree* p);
btree* Delete_Tree(btree* p); // Удаление всего дерева