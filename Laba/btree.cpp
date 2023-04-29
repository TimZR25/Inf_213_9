#include "btree.h"
#include <stdio.h>
#include <stdlib.h>

void Ins_Btree(PersonalComputer val, btree** q) // значение, адрес вершины
{
	if (*q == NULL) // тривиальный случай
	{
		*q = new btree; // создание листа
		(*q)->left = (*q)->right = NULL;
		(*q)->value = val;
		return;
	}
	// декомпозиция общего случая
	if (IsMore_Structs((*q)->value, val)) Ins_Btree(val, &(*q)->left);
	else
		Ins_Btree(val, &(*q)->right);
}

void Print_Btree_Up(btree* p) // адрес вершины
{
	if (p == NULL) return; // тривиальный случай
	// декомпозиция общего случая
	Print_Btree_Up(p->left);
	Print(p->value);
	Print_Btree_Up(p->right);
}

void Print_Btree_Down(btree* p) // адрес вершины
{
	if (p == NULL) return; // тривиальный случай
	// декомпозиция общего случая
	Print_Btree_Down(p->right);
	Print(p->value);
	Print_Btree_Down(p->left);
}

// Удаление вершины с заданным значением key
int Delete(PersonalComputer key, btree** node) {
	btree* t, * up;
	if (*node == NULL) return 0; // нет такого значения в дереве

	if (IsEqual_Structs((*node)->value, key)) {
		// если значение находится в листе, то удаляем лист
		if (((*node)->left == NULL) && ((*node)->right == NULL)) {
			free(*node);
			*node = NULL;
			printf("Delete List\n");
			return 1;
		}

			// если у вершины только правый потомок, то перебрасываем
			// связь на вершину ниже удаляемой в правом поддереве
			if ((*node)->left == NULL) {
				t = *node;
				*node = (*node)->right;
				free(t);
				printf("Delete Left = 0\n");
				return 1;
			}

			// если у вершины только левый потомок, то перебрасываем
			// связь на вершину ниже удаляемой в левом поддереве
			if ((*node)->right == NULL) {
				t = *node;
				*node = (*node)->left;
				free(t);
				printf("Delete Right = 0\n");
				return 1;
			}

			// если у вершины два потомка, то заменяем удаляемое значение
			// на значение самого правого элемента в левом поддереве
			up = *node;
		t = (*node)->left; // идем в левое поддерево
		//спускаемся до крайнего правого узла
		while (t->right != NULL) {
			up = t;
			t = t->right;
		}

		//копируем значение из правого узла вместо удаляемого значения
		(*node)->value = t->value;
			// если ниже удаляемого больше, чем одна вершина
			if (up != (*node)) {
				// если крайний правый не лист, то «отбрасываем» его из дерева
				if (t->left != NULL) up->right = t->left;
				else up->right = NULL; // удаляем лист
			}

		// если ниже удаляемого одна вершина, удаляем лист
			else (*node)->left = t->left;
		// освобождаем память – удаляем крайнюю
		// правую вершину
		free(t);
		printf("Delete Two\n");
		return 1;
	}
		// поиск ключа в левом или правом поддереве
		if (IsMore_Structs(key, (*node)->value))
			return Delete(key, &(*node)->right);
	return Delete(key, &(*node)->left);
}

int Get_CountLeaves(btree* node)
{
	int sum = 0;
	if (node == NULL) return 0; // корень пустой
	sum += 1;
	if (node->left != NULL) sum += Get_CountLeaves(node->left);
	if (node->right != NULL) sum+= Get_CountLeaves(node->right);

	return sum;
}

btree* Delete_Tree(btree* p)
{
	if (p == NULL) return NULL; // тривиальный случай
	// декомпозиция общего случая
	if (p->left != NULL) Delete_Tree(p->left);
	if (p->right != NULL) Delete_Tree(p->right);
	free(p);
	
	return NULL;
}
