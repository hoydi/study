//#include <stdio.h>
//
//int main(void)
//{
//	int num,i,j,k,l;
//	printf("������ �������ּ���.(1~3)");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1�̻� 100�̸��� ���� �߿��� 7�� ����� 9�� ����� ����ϴ� ���α׷� �ۼ� \n");
//		for (i = 1; i < 100; i++)
//		{
//			if (i % (7 * 9) == 0)
//				printf("%d�� 7��9�� ���\n", i);
//			else if (i % 7 == 0)
//				printf("%d�� 7�� ���\n", i);
//			else if (i % 9 == 0)
//				printf("%d�� 9�� ���\n", i);
//		}
//		break;
//
//	case 2:
//		printf("�ΰ��� ������ �Է¹޾Ƽ� �� ���� ���� ����ϴ� ���α׷� ����. ������ ū ������ ���� ���� �� ����� ���\n");
//		printf("���� �ΰ��� �Է����ּ���.");
//		scanf("%d %d", &j, &k);
//		l = (j - k);
//		printf("�� : %d", l>0?l:l*(-1));
//		break;
//	case 3:
//		printf("�л� ��ü ��������� ���� ���� ���\n");
//		printf("����, ����, ���� ���� �Է� :\n");
//		scanf("%d %d %d", &j, &k, &l);
//		i = (j + k + l) / 3;
//		printf("�������: %d\n����: ", i);
//		if (i >= 90)
//			printf("A");
//		else if (i >= 80)
//			printf("B");
//		else if (i >= 70)
//			printf("C");
//		else if (i >= 50)
//			printf("D");
//		else
//			printf("F");
//		break;
//
//	default:
//		printf("�߸��� �����Դϴ�.");
//	}
//
//
//	return 0;
//
//}