//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	int i, j;
//	int total = 0;
//	printf("���� ����(1,2)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		for (;;)
//		{
//			printf("���� �ΰ��� �Է��ϼ���. �ι�° ������ �� Ŀ�� �մϴ�.\n");
//			scanf("%d %d", &i, &j);
//			if (j > i)
//				break;
//			printf("�ι�° ������ �� ũ���� �Է����ּ���");
//		}
//		for (; i <= j; i++)
//		{
//			total += i;
//			printf("%d\n",total);
//		}
//		printf("��: %d",total);
//		
//		break;
//
//	case 2:
//		printf("������ �Է��ϼ���.");
//		scanf("%d", &i);
//		total = 1;
//		for(j=1;j<=i;j++)
//		{
//			total *= j;
//			printf("%d\n", total);
//		}
//			
//		printf("�� : %d", total);
//
//		
//		break;
//
//	default:
//		break;
//	}
//
//	return 0;
//}