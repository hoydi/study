//#include <stdio.h>
//
//int SmallAndBig(int a, int b, int c);
//double CelToFah(double a);
//double FahToCel(double a);
//void Fibonacci(int a);
//
//int main(void)
//{
//	int num;
//	double c,v;
//	int i, j,k;
//
//	printf("���� ����(1~3)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("����3���Է�");
//		scanf("%d %d %d", &i,&j,&k);
//		SmallAndBig(i,j,k);
//		
//		break;
//
//	case 2:
//
//		printf("�����Է�");
//		scanf("%lf", &c);
//		v = CelToFah(c);
//		printf("ȭ���µ�: %f\n", v);
//		v = FahToCel(v);
//		printf("�����µ�: %f", v);
//				
//		break;
//
//	case 3:
//		printf("�Ǻ���ġ ������ ����: ");
//		scanf("%d", &num);
//		Fibonacci(num);
//		break;
//
//	default:
//		break;
//	}
//
//	return 0;
//}
//
//
//int SmallAndBig(int a, int b, int c)
//{
//	int small, big;
//	if (a >= b)
//	{
//		if (a >= c)
//		{
//			big = a;
//			if (b >= c) small = c;
//			else small = b;
//		}
//
//		else
//		{
//			big = c;
//			small = b;
//		}
//			
//	}
//	else
//	{
//		if (b >= c)
//		{
//			big = b;
//			if (a >= c) small = c;
//			else small = a;
//		}
//		else
//		{
//			big = c;
//			small = a;
//		}
//	}
//	printf("ū��: %d, ������: %d", big, small);
//	return 0;
//
//}
//
//double CelToFah(double a)
//{
//	return a * 1.8 + 32;
//}
//double FahToCel(double a)
//{
//	return (a - 32) / 1.8;
//}
//
//void Fibonacci(int a)
//{
//	int f1 = 0, f2 = 1, f3, i;
//	if (a == 1)
//		printf("%d", f1);
//	else
//		printf("%d %d ", f1, f2);
//
//	for (i = 0; i < a - 2; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d ", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//
//}