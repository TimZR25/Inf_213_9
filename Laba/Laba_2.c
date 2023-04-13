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
//	case sever: printf_s("\nКорабль плывёт на север\n");
//		break;
//	case vostok: printf_s("\nКорабль плывёт на восток\n");
//		break;
//	case ug: printf_s("\nКорабль плывёт на юг\n");
//		break;
//	case zapad: printf_s("\nКорабль плывёт на запад\n");
//		break;
//	}
//}
//
//void Print_Prikaz(enum Prikaz p)
//{
//	switch (p)
//	{
//	case vpered:  printf_s("\nПриказ: корабль не изменил курс\n");
//		break;
//	case vpravo: printf_s("\nПриказ: корабль поворачивает направо\n");
//		break;
//	case nazad: printf_s("\nПриказ: корабль поворачивает назад\n");
//		break;
//	case vlevo: printf_s("\nПриказ: корабль поворачивает налево\n");
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
//		printf_s("Введите текущее направление (0 - север, 1 - восток, 2 - юг, 3 - запад): ");
//
//		scanf_s("%d", &buf);
//		if ((buf >= 0) && (buf < 4)) break;
//
//		printf_s("\nНеверный ввод\n");
//	}
//	k = buf;
//
//	while (1)
//	{
//		printf_s("\nВведите приказ (0 - вперёд, 1 - вправо, 2 - назад, 3 - влево): ");
//
//		scanf_s("%d", &buf);
//		if ((buf >= 0) && (buf < 4)) break;
//
//		printf_s("\nНеверный ввод");
//	}
//	p = buf;
//
//	Print_Kurs(k); //напечать текущий курс
//	Print_Prikaz(p); //напечать приказ
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
//	Handle_Kurs(); //обработать измененный курс
//}