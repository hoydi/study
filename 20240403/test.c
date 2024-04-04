//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	int i, j;
//	int total = 0;
//	printf("문제 선택(1,2)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		for (;;)
//		{
//			printf("정수 두개를 입력하세요. 두번째 정수가 더 커야 합니다.\n");
//			scanf("%d %d", &i, &j);
//			if (j > i)
//				break;
//			printf("두번째 정수가 더 크도록 입력해주세요");
//		}
//		for (; i <= j; i++)
//		{
//			total += i;
//			printf("%d\n",total);
//		}
//		printf("합: %d",total);
//		
//		break;
//
//	case 2:
//		printf("정수를 입력하세요.");
//		scanf("%d", &i);
//		total = 1;
//		for(j=1;j<=i;j++)
//		{
//			total *= j;
//			printf("%d\n", total);
//		}
//			
//		printf("답 : %d", total);
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