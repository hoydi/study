//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	int i, j, k;
//	int total = 0;
//	printf("���� ����(1~7)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("��5���� 5�����\n");
//		for (i = 0; i < 5; i++)
//		{
//			for (j = 0; j < 5; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//	case 2:
//		printf("��1~5���� 5�����\n");
//		for (i = 0; i < 5; i++)
//		{
//			for (j = 0; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//	case 3:
//		printf("��5~1���� 5�����\n");
//		for (i = 5; i > 0; i--)
//		{
//			for (j = 0; j < i; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//	case 4:
//		num = 5;
//		printf("��1,3,5,7,9�� ������ķ� ���\n");
//		for (i = 0; i < num; i++)
//		{
//			for (j = num - 1; j > i - 1; j--)
//				printf(" ");
//			for (j = 0; j < i * 2 + 1; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//	case 5:
//		num = 5;
//		printf("��97531������ķ� ���\n");
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j <= i; j++)
//				printf(" ");
//			for (j = num * 2 - 1; j > i * 2; j--)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//
//	case 6:
//		k = 0;
//		num = 5;
//		printf("��975313579 ������ķ� ���\n");
//		for (i = 1; i < num * 2; i++)
//		{
//			if (i <= num)
//				k++;
//			else
//				k--;
//			//printf("%d\n", k);
//			for (j = 0; j < k - 1; j++)
//				printf(" ");
//			for (j = num * 2 - 1; j >= k * 2 - 1; j--)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//	case 7:
//		k = 0;
//		num = 5;
//		printf("��1,3,5,7,9�� ���ٰ� 7,5,3,1 ������ķ� ���\n");
//		for (i = 1; i < num * 2; i++)
//		{
//			if (i <= num)
//				k++;
//			else
//				k--;
//
//			for (j = num; j > k - 1; j--)
//				printf(" ");
//			for (j = 1; j <= k * 2 - 1; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		break;
//
//
//	default:
//		break;
//	}
//
//	return 0;
//}