////1. ������ ���� �Է¹޾� ��� 60���̻��̸� �հ�, �ϳ��� �̸��̸� ���հ� ���
////2. 1-12������ ���� �Է¹޾� �ش���� ������ ����ϴ� ���α׷�. 1~12�����ƴϸ� "x���� �������� �ʽ��ϴ�" ���
////	3~5����, 6~8�� ����, 9~11 ����, 12~2�� �ܿ� / �ٽ� �Է��Ұ����� �����Ұ������� ���� 1�Է½� ���Է�, 0�Է½� ���α׷�����
//
//#include <stdio.h>
//
//int main(void)
//{
//
//	int num, i, j, k;
//	printf("������ �������ּ���.(1~5)\n");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("��,��,�� ������ ���ʴ�� �Է����ּ���.\n");
//		scanf("%d %d %d", &i, &j, &k);
//		if (i >= 60 && j >= 60 && k >= 60)
//			printf("�հ�");
//		else
//			printf("���հ�");
//
//		break;
//	case 2:
//		printf("���� �Է����ּ���\n");
//		scanf("%d", &i);
//		if (i >= 3 && i<= 5)
//			printf("%d���� ��", i);
//		else if (i >= 6 && i <= 8)
//			printf("%d���� ����", i);
//		else if (i >= 9 && i <= 11)
//			printf("%d���� ����", i);
//		else if (i == 12 || i>0 && i <=2)
//			printf("%d���� �ܿ�", i);
//
//		else
//			printf("%d���� �������� �ʽ��ϴ�.", i);
//		break;
//
//	case 3:
//		printf("���� �־��ּ���\n");
//		scanf("%d", &i);
//		if (i >= 500)
//		{
//			j = i - 500;
//			printf("���ᰡ ���Խ��ϴ�. �Ž������� %d���Դϴ�.", j);
//		}
//		else
//			printf("���� ���ڶ��ϴ�. %d���� ��ȯ�Ǿ����ϴ�.", i);
//		break;
//	case 4:
//		printf("���̿� ����� �˷��ּ���\n");
//		scanf("%d %d", &i,&j);
//		if (i > 0 && i < 20)
//			j = j * 0.7;
//			printf("��� 30%���δ�����Դϴ�. %d���Դϴ�.", j);
//		break;
//
//	case 5:
//		printf("ü���µ��� �������� �Է����ּ���\n");
//		scanf("%d %d", &i,&j);
//		if (i >= 35 && j >= 2)
//			printf("�����溸");
//		else if (i >= 33 && j >= 2)
//			printf("�������Ǻ�");
//		else
//			printf("���Ͼ���");
//		break;
//	default:
//		printf("���� ��ȣ�Դϴ�");
//	}
//	return 0;
//
//}