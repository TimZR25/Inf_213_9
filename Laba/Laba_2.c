// #include <stdio.h>
//#include <locale.h>
//#include <stdlib.h>
//
//enum Kurs
//{
//	sever,
//	vostok,
//	ug,
//	zapad
//};
//
//enum Prikaz
//{
//	vpered,
//	vpravo,
//	nazad,
//	vlevo
//};
//
//
//void Print_Kurs(enum Kurs k)
//{
//	switch (k)
//	{
//	case sever: printf_s("\n������� ����� �� �����\n");
//		break;
//	case vostok: printf_s("\n������� ����� �� ������\n");
//		break;
//	case ug: printf_s("\n������� ����� �� ��\n");
//		break;
//	case zapad: printf_s("\n������� ����� �� �����\n");
//		break;
//	}
//}
//
//void Print_Prikaz(enum Prikaz p)
//{
//	switch (p)
//	{
//	case vpered:  printf_s("\n������: ������� �� ������� ����\n");
//		break;
//	case vpravo: printf_s("\n������: ������� ������������ �������\n");
//		break;
//	case nazad: printf_s("\n������: ������� ������������ �����\n");
//		break;
//	case vlevo: printf_s("\n������: ������� ������������ ������\n");
//		break;
//	}
//}
//
//void Handle_Kurs()
//{
//	enum Kurs k;
//	enum Prikaz p;
//
//	int buf = 0;
//
//	while (1)
//	{
//		printf_s("������� ������� ����������� (0 - �����, 1 - ������, 2 - ��, 3 - �����): ");
//
//		scanf_s("%d", &buf);
//		if ((buf >= 0) && (buf < 4)) break;
//
//		printf_s("\n�������� ����\n");
//	}
//	k = buf;
//
//	while (1)
//	{
//		printf_s("\n������� ������ (0 - �����, 1 - ������, 2 - �����, 3 - �����): ");
//
//		scanf_s("%d", &buf);
//		if ((buf >= 0) && (buf < 4)) break;
//
//		printf_s("\n�������� ����");
//	}
//	p = buf;
//
//	Print_Kurs(k); //�������� ������� ����
//	Print_Prikaz(p); //�������� ������
//
//	switch (k)
//	{
//	case sever:
//		switch (p)
//		{
//		case vpered:
//			k = sever;
//			break;
//		case vpravo:
//			k = vostok;
//			break;
//		case nazad:
//			k = ug;
//			break;
//		case vlevo:
//			k = zapad;
//			break;
//		}
//		break;
//	case vostok:
//		switch (p)
//		{
//		case vpered:
//			k = vostok;
//			break;
//		case vpravo:
//			k = ug;
//			break;
//		case nazad:
//			k = zapad;
//			break;
//		case vlevo:
//			k = sever;
//			break;
//		}
//		break;
//	case ug:
//		switch (p)
//		{
//		case vpered:
//			k = ug;
//			break;
//		case vpravo:
//			k = zapad;
//			break;
//		case nazad:
//			k = sever;
//			break;
//		case vlevo:
//			k = vostok;
//			break;
//		}
//		break;
//	case zapad:
//		switch (p)
//		{
//		case vpered:
//			k = zapad;
//			break;
//		case vpravo:
//			k = sever;
//			break;
//		case nazad:
//			k = vostok;
//			break;
//		case vlevo:
//			k = ug;
//			break;
//		}
//		break;
//	}
//
//	Print_Kurs(k);
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	Handle_Kurs(); //���������� ���������� ����
//}