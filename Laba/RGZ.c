//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#define N 100
//
////стуктура, которая описывает координаты точки
//struct Point
//{
//	double x;
//	double y;
//};
//
////структура, котора представляет собой координаты вершин треугольника
//struct Triangle
//{
//	struct Point A;
//	struct Point B;
//	struct Point C;
//};
//
////на вход принимает строку, которую проверяет на допустимые символы и возращает 0, если присутствуют недопустимые символы, иначе возращает 1
//int IsNumber(char str[])
//{
//	if (str[0] < '1' || str[0] > '9') return 0; //является ли первый символ числом
//	int count = 0; //счётчик запятых и точек
//
//	for (int i = 0; str[i] != '\n'; i++)
//	{
//		if (str[i] == ',' || str[i] == '.')
//		{
//			str[i] = ',';
//			if (count == 0)
//			{
//				count++;
//				continue;
//			}
//
//			if (count > 0) return 0;
//		}
//
//		if (str[i] < '0' || str[i] > '9') return 0; //является ли символ числом
//	}
//
//	return 1;
//}
//
////принимает координаты 2 точек и возращает значение длины между ними
//double Get_Distance(struct Point A, struct Point B)
//{
//	return pow(pow(B.x - A.x, 2) + pow(B.y - A.y, 2), 0.5);
//}
//
////принимает координаты вершин треугольника и проверяет существует треугольник с такими координатами
//int IsTriangle(struct Triangle ABC)
//{
//	double AB, BC, AC;
//	AB = Get_Distance(ABC.A, ABC.B);
//	BC = Get_Distance(ABC.B, ABC.C);
//	AC = Get_Distance(ABC.A, ABC.C);
//
//	//если сумма двух сторон больше третьей стороны, то треугольник не существует
//	if (AC >= AB + BC) return 0;
//	if (BC >= AB + AC) return 0;
//	if (AB >= AC + BC) return 0;
//
//	return 1;
//}
//
////ввод координат треугольника, центра окружности и ввод радиуса
//void Input(struct Triangle* ABC, struct Point* O, double* r)
//{
//	printf("Введите координаты центра окружности O(x y): ");
//	scanf("%lf %lf", &O->x, &O->y);
//
//	getchar();
//	char str[N];
//	while (1)
//	{
//		printf("\nВведите радиус окружности: ");
//		fgets(str, N, stdin);
//
//		if (IsNumber(str) == 1) break;
//
//		printf("Неверный ввод. Введите натуральное число.\n");
//	}
//	*r = strtod(str, NULL); //перевод символьного массива в вещественный тип
//
//	while (1)
//	{
//		puts("\nВведите координаты вершин треугольника:");
//
//		printf("\nВведите координаты точки A(x y): ");
//		scanf("%lf %lf", &ABC->A.x, &ABC->A.y);
//
//		printf("\nВведите координаты точки B(x y): ");
//		scanf("%lf %lf", &ABC->B.x, &ABC->B.y);
//
//		printf("\nВведите координаты точки C(x y): ");
//		scanf("%lf %lf", &ABC->C.x, &ABC->C.y);
//
//		if (IsTriangle(*ABC) == 1) break;
//
//		puts("\nДанного треугольника не существует. Введите корректные данные");
//	}
//}
//
////принимает координаты 3-х точек, и по математической формуле находит и возращает координаты точки, в которую падает высота из третьей точки
//struct Point Get_Height(struct Point A, struct Point B, struct Point O)
//{
//	struct Point H;
//	double k, b;
//
//	double kAB = (B.y - A.y) / (B.x - A.x); //коэффициент уравнения прямой AB
//
//	if (kAB != 0)
//		k = -1 / kAB; ////коэффициент уравнения перпендикуляра
//	else k = 0;
//
//	b = O.y - k * O.x; //свободный член линейного уравнения
//
//
//	double d = B.x - A.x;
//
//	if ((B.y - A.y - d * k) != 0)
//		H.x = (A.x * B.y - A.x * A.y - d * A.y + d * b) / (B.y - A.y - d * k); //уравнение для H.x через уравнение высоты и стороны треугольника
//	else H.x = O.x;
//
//	if (d != 0)
//		H.y = (((H.x - A.x) * (B.y - A.y)) / d) + A.y; //уравнение для H.y через уравнение высоты и стороны треугольника
//	else H.y = O.y;
//
//	return H;
//}
//
////принимает координаты двух точек и возращает координаты вектора
//struct Point Get_Vector(struct Point A, struct Point B)
//{
//	struct Point AB;
//
//	AB.x = B.x - A.x;
//	AB.y = B.y - A.y;
//
//	return AB;
//}
//
////принимает координаты вершин треугольника и координаты центра окружности и возращает 1, если центр окружности находится внутри треугольника, иначе 0
//int CenterInTriangle(struct Triangle ABC, struct Point O)
//{
//	struct Point AB, BC, CA;
//	AB = Get_Vector(ABC.A, ABC.B);
//	BC = Get_Vector(ABC.B, ABC.C);
//	CA = Get_Vector(ABC.C, ABC.A);
//
//	struct Point AO, BO, CO;
//	AO = Get_Vector(ABC.A, O);
//	BO = Get_Vector(ABC.B, O);
//	CO = Get_Vector(ABC.C, O);
//
//	//векторное произведение двух векторов
//	double ABxAO, BCxBO, CAxCO;
//	ABxAO = AB.x * AO.y - AB.y * AO.x;
//	BCxBO = BC.x * BO.y - BC.y * BO.x;
//	CAxCO = CA.x * CO.y - CA.y * CO.x;
//
//	//если результаты все положительные или все отрицательные, то ценрт окружности находится внутри треугольника
//	int c1 = (ABxAO >= 0) && (BCxBO >= 0) && (CAxCO >= 0);
//	int c2 = (ABxAO <= 0) && (BCxBO <= 0) && (CAxCO <= 0);
//
//	if (c1 || c2 == 1)
//	{
//		puts("\nМножество общих точек: центр окружности находится внутри треугольника");
//		return 1;
//	}
//
//	return 0;
//}
//
////принимает координаты вершин треугольника и координаты центра окружности с его радиусом, возращает 1, если вершина треугольника находится внутри круга
//int PeakInCircle(struct Triangle ABC, struct Point O, double r)
//{
//	double AO, BO, CO;
//
//	//проверка длины вектора из центра окружности в вершину треугольника
//	AO = Get_Distance(ABC.A, O);
//	BO = Get_Distance(ABC.B, O);
//	CO = Get_Distance(ABC.C, O);
//
//
//	if (((AO <= r) + (BO <= r) + (CO <= r)) > 1)
//	{
//		puts("\nМножество общих точек: вершина треугольника находится внутри круга");
//		return 1;
//	}
//
//	return 0;
//}
//
////принимает координаты вершин треугольника и координаты центра окружности с его радиусом, возращает 1, если вершина треугольника находится на круге
//int PeakOnCircle(struct Triangle ABC, struct Point O, double r)
//{
//	double AO, BO, CO;
//
//	AO = Get_Distance(ABC.A, O);
//	BO = Get_Distance(ABC.B, O);
//	CO = Get_Distance(ABC.C, O);
//
//	//проверка длины вектора из центра окружности в вершину треугольника
//	if (AO == r && BO > r && CO > r)
//	{
//		printf("\nКоординаты точки пересечения (%3.2f;%3.2f)", ABC.A.x, ABC.A.y);
//		return 1;
//	}
//	if (BO == r && AO > r && CO > r)
//	{
//		printf("\nКоординаты точки пересечения (%3.2f;%3.2f)", ABC.B.x, ABC.B.y);
//		return 1;
//	}
//	if (CO == r && AO > r && BO > r)
//	{
//		printf("\nКоординаты точки пересечения (%3.2f;%3.2f)", ABC.C.x, ABC.C.y);
//		return 1;
//	}
//
//	return 0;
//}
//
////принимает координаты 3-х точек, и возращает 1, если 3-я точка находится между 2-мя другими точками
//int IsPointInLine(struct Point A, struct Point B, struct Point H)
//{
//	int c1 = ((A.x <= H.x && H.x <= B.x) || (B.x <= H.x && H.x <= A.x));
//	int c2 = ((A.y <= H.y && H.y <= B.y) || (B.y <= H.y && H.y <= A.y));
//
//	return c1 || c2;
//}
//
///*принимает координаты вершин треугольника и координаты центра окружности с его радиусом, возращает 1,
//если одна из сторон треугольника пересекает круг, а другие две не пересекают*/
//int TriangleOnCircle(struct Triangle ABC, struct Point O, double r)
//{
//	struct Point H_AB, H_BC, H_AC;
//	double OH_AB, OH_BC, OH_AC;
//
//	//точки высот к сторонам треугольника
//	H_AB = Get_Height(ABC.A, ABC.B, O);
//	H_BC = Get_Height(ABC.B, ABC.C, O);
//	H_AC = Get_Height(ABC.A, ABC.C, O);
//
//	//длины высот
//	OH_AB = Get_Distance(H_AB, O);
//	OH_BC = Get_Distance(H_BC, O);
//	OH_AC = Get_Distance(H_AC, O);
//
//	//возращает ноль, если одна из высот не падает на отрезок
//	if (IsPointInLine(ABC.A, ABC.B, H_AB) == 0 || IsPointInLine(ABC.A, ABC.B, H_BC) == 0 || IsPointInLine(ABC.A, ABC.B, H_AC) == 0) return 0;
//
//	if (OH_AB < r && OH_BC >= r && OH_AC >= r)
//	{
//		puts("\nМножество общих точек: площадь пересечения представляет собой часть круга");
//		return 1;
//	}
//
//	if (OH_BC < r && OH_AB >= r && OH_AC >= r)
//	{
//		puts("\nМножество общих точек: площадь пересечения представляет собой часть круга");
//		return 1;
//	}
//
//	if (OH_AC < r && OH_BC >= r && OH_AB >= r)
//	{
//		puts("\nМножество общих точек: площадь пересечения представляет собой часть круга");
//		return 1;
//	}
//
//	return 0;
//}
//
////принимает координаты 2-х вершин треугольника и координаты центра окружности с его радиусом, возращает 1, если прямая касается круга
//int LineIsTouching(struct Point A, struct Point B, struct Point O, double r) //является ли прямая касательной к окружности
//{
//	struct Point H = Get_Height(A, B, O);
//
//
//	if (Get_Distance(H, O) == r && IsPointInLine(A, B, H))
//	{
//		printf("\nКоординаты точки пересечения (%3.2f;%3.2f)\n", H.x, H.y);
//
//		return 1;
//	}
//
//	return 0;
//}
//
////принимает координаты вершин треугольника и координаты центра окружности с его радиусом, делает проверки трех сторон треугольника, являются ли они касательными
//int LinesAreTouching(struct Triangle ABC, struct Point O, double r)
//{
//	//является ли сторона треугольника касательной к окружности
//	int AB = LineIsTouching(ABC.A, ABC.B, O, r);
//	int BC = LineIsTouching(ABC.B, ABC.C, O, r);
//	int CA = LineIsTouching(ABC.C, ABC.A, O, r);
//
//	if (AB || BC || CA == 1) return 1;
//
//	return 0;
//}
//
//
///*принимает координаты вершин треугольника и координаты центра окружности с его радиусом,
//вызывает проверки на наличие общих точек между треугольником и кругом*/
//void FindCommonPoints(struct Triangle ABC, struct Point O, double r)
//{
//	if (PeakOnCircle(ABC, O, r) == 1) return; //проверка находятся ли вершины на круге
//
//	if (PeakInCircle(ABC, O, r) == 1) return; //проверка находятся ли вершины в круге
//
//	if (CenterInTriangle(ABC, O) == 1) return; //проверка находится ли центр окружности в треугольнике
//
//	if (TriangleOnCircle(ABC, O, r) == 1) return; //проверка находится ли треугольник в круге
//
//	if (LinesAreTouching(ABC, O, r) == 1) return; //проверка на касательные
//
//	puts("\nНет общих точек");
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	struct Triangle ABC;
//	struct Point O;
//	double r;
//
//	Input(&ABC, &O, &r);
//
//	FindCommonPoints(ABC, O, r);
//
//	return 0;
//}