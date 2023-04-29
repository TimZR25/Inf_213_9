#include "btree.h"
#include <stdio.h>
#include <stdlib.h>

void Ins_Btree(PersonalComputer val, btree** q) // ��������, ����� �������
{
	if (*q == NULL) // ����������� ������
	{
		*q = new btree; // �������� �����
		(*q)->left = (*q)->right = NULL;
		(*q)->value = val;
		return;
	}
	// ������������ ������ ������
	if (IsMore_Structs((*q)->value, val)) Ins_Btree(val, &(*q)->left);
	else
		Ins_Btree(val, &(*q)->right);
}

void Print_Btree_Up(btree* p) // ����� �������
{
	if (p == NULL) return; // ����������� ������
	// ������������ ������ ������
	Print_Btree_Up(p->left);
	Print(p->value);
	Print_Btree_Up(p->right);
}

void Print_Btree_Down(btree* p) // ����� �������
{
	if (p == NULL) return; // ����������� ������
	// ������������ ������ ������
	Print_Btree_Down(p->right);
	Print(p->value);
	Print_Btree_Down(p->left);
}

// �������� ������� � �������� ��������� key
int Delete(PersonalComputer key, btree** node) {
	btree* t, * up;
	if (*node == NULL) return 0; // ��� ������ �������� � ������

	if (IsEqual_Structs((*node)->value, key)) {
		// ���� �������� ��������� � �����, �� ������� ����
		if (((*node)->left == NULL) && ((*node)->right == NULL)) {
			free(*node);
			*node = NULL;
			printf("Delete List\n");
			return 1;
		}

			// ���� � ������� ������ ������ �������, �� �������������
			// ����� �� ������� ���� ��������� � ������ ���������
			if ((*node)->left == NULL) {
				t = *node;
				*node = (*node)->right;
				free(t);
				printf("Delete Left = 0\n");
				return 1;
			}

			// ���� � ������� ������ ����� �������, �� �������������
			// ����� �� ������� ���� ��������� � ����� ���������
			if ((*node)->right == NULL) {
				t = *node;
				*node = (*node)->left;
				free(t);
				printf("Delete Right = 0\n");
				return 1;
			}

			// ���� � ������� ��� �������, �� �������� ��������� ��������
			// �� �������� ������ ������� �������� � ����� ���������
			up = *node;
		t = (*node)->left; // ���� � ����� ���������
		//���������� �� �������� ������� ����
		while (t->right != NULL) {
			up = t;
			t = t->right;
		}

		//�������� �������� �� ������� ���� ������ ���������� ��������
		(*node)->value = t->value;
			// ���� ���� ���������� ������, ��� ���� �������
			if (up != (*node)) {
				// ���� ������� ������ �� ����, �� ������������ ��� �� ������
				if (t->left != NULL) up->right = t->left;
				else up->right = NULL; // ������� ����
			}

		// ���� ���� ���������� ���� �������, ������� ����
			else (*node)->left = t->left;
		// ����������� ������ � ������� �������
		// ������ �������
		free(t);
		printf("Delete Two\n");
		return 1;
	}
		// ����� ����� � ����� ��� ������ ���������
		if (IsMore_Structs(key, (*node)->value))
			return Delete(key, &(*node)->right);
	return Delete(key, &(*node)->left);
}

int Get_CountLeaves(btree* node)
{
	int sum = 0;
	if (node == NULL) return 0; // ������ ������
	sum += 1;
	if (node->left != NULL) sum += Get_CountLeaves(node->left);
	if (node->right != NULL) sum+= Get_CountLeaves(node->right);

	return sum;
}

btree* Delete_Tree(btree* p)
{
	if (p == NULL) return NULL; // ����������� ������
	// ������������ ������ ������
	if (p->left != NULL) Delete_Tree(p->left);
	if (p->right != NULL) Delete_Tree(p->right);
	free(p);
	
	return NULL;
}
