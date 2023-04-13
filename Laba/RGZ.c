//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#define N 100
//
////��������, ������� ��������� ���������� �����
//struct Point
//{
//	double x;
//	double y;
//};
//
////���������, ������ ������������ ����� ���������� ������ ������������
//struct Triangle
//{
//	struct Point A;
//	struct Point B;
//	struct Point C;
//};
//
////�� ���� ��������� ������, ������� ��������� �� ���������� ������� � ��������� 0, ���� ������������ ������������ �������, ����� ��������� 1
//int IsNumber(char str[])
//{
//	if (str[0] < '1' || str[0] > '9') return 0; //�������� �� ������ ������ ������
//	int count = 0; //������� ������� � �����
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
//		if (str[i] < '0' || str[i] > '9') return 0; //�������� �� ������ ������
//	}
//
//	return 1;
//}
//
////��������� ���������� 2 ����� � ��������� �������� ����� ����� ����
//double Get_Distance(struct Point A, struct Point B)
//{
//	return pow(pow(B.x - A.x, 2) + pow(B.y - A.y, 2), 0.5);
//}
//
////��������� ���������� ������ ������������ � ��������� ���������� ����������� � ������ ������������
//int IsTriangle(struct Triangle ABC)
//{
//	double AB, BC, AC;
//	AB = Get_Distance(ABC.A, ABC.B);
//	BC = Get_Distance(ABC.B, ABC.C);
//	AC = Get_Distance(ABC.A, ABC.C);
//
//	//���� ����� ���� ������ ������ ������� �������, �� ����������� �� ����������
//	if (AC >= AB + BC) return 0;
//	if (BC >= AB + AC) return 0;
//	if (AB >= AC + BC) return 0;
//
//	return 1;
//}
//
////���� ��������� ������������, ������ ���������� � ���� �������
//void Input(struct Triangle* ABC, struct Point* O, double* r)
//{
//	printf("������� ���������� ������ ���������� O(x y): ");
//	scanf("%lf %lf", &O->x, &O->y);
//
//	getchar();
//	char str[N];
//	while (1)
//	{
//		printf("\n������� ������ ����������: ");
//		fgets(str, N, stdin);
//
//		if (IsNumber(str) == 1) break;
//
//		printf("�������� ����. ������� ����������� �����.\n");
//	}
//	*r = strtod(str, NULL); //������� ����������� ������� � ������������ ���
//
//	while (1)
//	{
//		puts("\n������� ���������� ������ ������������:");
//
//		printf("\n������� ���������� ����� A(x y): ");
//		scanf("%lf %lf", &ABC->A.x, &ABC->A.y);
//
//		printf("\n������� ���������� ����� B(x y): ");
//		scanf("%lf %lf", &ABC->B.x, &ABC->B.y);
//
//		printf("\n������� ���������� ����� C(x y): ");
//		scanf("%lf %lf", &ABC->C.x, &ABC->C.y);
//
//		if (IsTriangle(*ABC) == 1) break;
//
//		puts("\n������� ������������ �� ����������. ������� ���������� ������");
//	}
//}
//
////��������� ���������� 3-� �����, � �� �������������� ������� ������� � ��������� ���������� �����, � ������� ������ ������ �� ������� �����
//struct Point Get_Height(struct Point A, struct Point B, struct Point O)
//{
//	struct Point H;
//	double k, b;
//
//	double kAB = (B.y - A.y) / (B.x - A.x); //����������� ��������� ������ AB
//
//	if (kAB != 0)
//		k = -1 / kAB; ////����������� ��������� ��������������
//	else k = 0;
//
//	b = O.y - k * O.x; //��������� ���� ��������� ���������
//
//
//	double d = B.x - A.x;
//
//	if ((B.y - A.y - d * k) != 0)
//		H.x = (A.x * B.y - A.x * A.y - d * A.y + d * b) / (B.y - A.y - d * k); //��������� ��� H.x ����� ��������� ������ � ������� ������������
//	else H.x = O.x;
//
//	if (d != 0)
//		H.y = (((H.x - A.x) * (B.y - A.y)) / d) + A.y; //��������� ��� H.y ����� ��������� ������ � ������� ������������
//	else H.y = O.y;
//
//	return H;
//}
//
////��������� ���������� ���� ����� � ��������� ���������� �������
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
////��������� ���������� ������ ������������ � ���������� ������ ���������� � ��������� 1, ���� ����� ���������� ��������� ������ ������������, ����� 0
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
//	//��������� ������������ ���� ��������
//	double ABxAO, BCxBO, CAxCO;
//	ABxAO = AB.x * AO.y - AB.y * AO.x;
//	BCxBO = BC.x * BO.y - BC.y * BO.x;
//	CAxCO = CA.x * CO.y - CA.y * CO.x;
//
//	//���� ���������� ��� ������������� ��� ��� �������������, �� ����� ���������� ��������� ������ ������������
//	int c1 = (ABxAO >= 0) && (BCxBO >= 0) && (CAxCO >= 0);
//	int c2 = (ABxAO <= 0) && (BCxBO <= 0) && (CAxCO <= 0);
//
//	if (c1 || c2 == 1)
//	{
//		puts("\n��������� ����� �����: ����� ���������� ��������� ������ ������������");
//		return 1;
//	}
//
//	return 0;
//}
//
////��������� ���������� ������ ������������ � ���������� ������ ���������� � ��� ��������, ��������� 1, ���� ������� ������������ ��������� ������ �����
//int PeakInCircle(struct Triangle ABC, struct Point O, double r)
//{
//	double AO, BO, CO;
//
//	//�������� ����� ������� �� ������ ���������� � ������� ������������
//	AO = Get_Distance(ABC.A, O);
//	BO = Get_Distance(ABC.B, O);
//	CO = Get_Distance(ABC.C, O);
//
//
//	if (((AO <= r) + (BO <= r) + (CO <= r)) > 1)
//	{
//		puts("\n��������� ����� �����: ������� ������������ ��������� ������ �����");
//		return 1;
//	}
//
//	return 0;
//}
//
////��������� ���������� ������ ������������ � ���������� ������ ���������� � ��� ��������, ��������� 1, ���� ������� ������������ ��������� �� �����
//int PeakOnCircle(struct Triangle ABC, struct Point O, double r)
//{
//	double AO, BO, CO;
//
//	AO = Get_Distance(ABC.A, O);
//	BO = Get_Distance(ABC.B, O);
//	CO = Get_Distance(ABC.C, O);
//
//	//�������� ����� ������� �� ������ ���������� � ������� ������������
//	if (AO == r && BO > r && CO > r)
//	{
//		printf("\n���������� ����� ����������� (%3.2f;%3.2f)", ABC.A.x, ABC.A.y);
//		return 1;
//	}
//	if (BO == r && AO > r && CO > r)
//	{
//		printf("\n���������� ����� ����������� (%3.2f;%3.2f)", ABC.B.x, ABC.B.y);
//		return 1;
//	}
//	if (CO == r && AO > r && BO > r)
//	{
//		printf("\n���������� ����� ����������� (%3.2f;%3.2f)", ABC.C.x, ABC.C.y);
//		return 1;
//	}
//
//	return 0;
//}
//
////��������� ���������� 3-� �����, � ��������� 1, ���� 3-� ����� ��������� ����� 2-�� ������� �������
//int IsPointInLine(struct Point A, struct Point B, struct Point H)
//{
//	int c1 = ((A.x <= H.x && H.x <= B.x) || (B.x <= H.x && H.x <= A.x));
//	int c2 = ((A.y <= H.y && H.y <= B.y) || (B.y <= H.y && H.y <= A.y));
//
//	return c1 || c2;
//}
//
///*��������� ���������� ������ ������������ � ���������� ������ ���������� � ��� ��������, ��������� 1,
//���� ���� �� ������ ������������ ���������� ����, � ������ ��� �� ����������*/
//int TriangleOnCircle(struct Triangle ABC, struct Point O, double r)
//{
//	struct Point H_AB, H_BC, H_AC;
//	double OH_AB, OH_BC, OH_AC;
//
//	//����� ����� � �������� ������������
//	H_AB = Get_Height(ABC.A, ABC.B, O);
//	H_BC = Get_Height(ABC.B, ABC.C, O);
//	H_AC = Get_Height(ABC.A, ABC.C, O);
//
//	//����� �����
//	OH_AB = Get_Distance(H_AB, O);
//	OH_BC = Get_Distance(H_BC, O);
//	OH_AC = Get_Distance(H_AC, O);
//
//	//��������� ����, ���� ���� �� ����� �� ������ �� �������
//	if (IsPointInLine(ABC.A, ABC.B, H_AB) == 0 || IsPointInLine(ABC.A, ABC.B, H_BC) == 0 || IsPointInLine(ABC.A, ABC.B, H_AC) == 0) return 0;
//
//	if (OH_AB < r && OH_BC >= r && OH_AC >= r)
//	{
//		puts("\n��������� ����� �����: ������� ����������� ������������ ����� ����� �����");
//		return 1;
//	}
//
//	if (OH_BC < r && OH_AB >= r && OH_AC >= r)
//	{
//		puts("\n��������� ����� �����: ������� ����������� ������������ ����� ����� �����");
//		return 1;
//	}
//
//	if (OH_AC < r && OH_BC >= r && OH_AB >= r)
//	{
//		puts("\n��������� ����� �����: ������� ����������� ������������ ����� ����� �����");
//		return 1;
//	}
//
//	return 0;
//}
//
////��������� ���������� 2-� ������ ������������ � ���������� ������ ���������� � ��� ��������, ��������� 1, ���� ������ �������� �����
//int LineIsTouching(struct Point A, struct Point B, struct Point O, double r) //�������� �� ������ ����������� � ����������
//{
//	struct Point H = Get_Height(A, B, O);
//
//
//	if (Get_Distance(H, O) == r && IsPointInLine(A, B, H))
//	{
//		printf("\n���������� ����� ����������� (%3.2f;%3.2f)\n", H.x, H.y);
//
//		return 1;
//	}
//
//	return 0;
//}
//
////��������� ���������� ������ ������������ � ���������� ������ ���������� � ��� ��������, ������ �������� ���� ������ ������������, �������� �� ��� ������������
//int LinesAreTouching(struct Triangle ABC, struct Point O, double r)
//{
//	//�������� �� ������� ������������ ����������� � ����������
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
///*��������� ���������� ������ ������������ � ���������� ������ ���������� � ��� ��������,
//�������� �������� �� ������� ����� ����� ����� ������������� � ������*/
//void FindCommonPoints(struct Triangle ABC, struct Point O, double r)
//{
//	if (PeakOnCircle(ABC, O, r) == 1) return; //�������� ��������� �� ������� �� �����
//
//	if (PeakInCircle(ABC, O, r) == 1) return; //�������� ��������� �� ������� � �����
//
//	if (CenterInTriangle(ABC, O) == 1) return; //�������� ��������� �� ����� ���������� � ������������
//
//	if (TriangleOnCircle(ABC, O, r) == 1) return; //�������� ��������� �� ����������� � �����
//
//	if (LinesAreTouching(ABC, O, r) == 1) return; //�������� �� �����������
//
//	puts("\n��� ����� �����");
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