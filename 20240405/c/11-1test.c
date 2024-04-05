//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	int i, j, k, l;
//	int arr[5], min, max, sum;
//	printf("문제 선택(1~8)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		sum = 0;
//		printf("정수 5개를 입력하세요: ");
//		
//		for (i = 0; i < sizeof(arr)/sizeof(int); i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		min = max = arr[0];
//		for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//		{
//			if (min > arr[i])
//				min = arr[i];
//			if (max < arr[i])
//				max = arr[i];
//			sum += arr[i];
//		}
//
//		printf("최댓값: %d",max);
//		printf("최솟값: %d",min);
//		printf("총합: %d",sum);
//
//		break;
//
//	case 2:
//		char str[] = "Good time";
//		printf("%s",str);
//
//		break;
//
//	case 3:
//
//		break;
//
//	case 4:
//
//
//		break;
//
//	case 5:
//	
//		break;
//
//	case 6:
//		
//		break;
//
//	case 7:
//	
//		break;
//
//	case 8:
//
//		break;
//
//	default:
//		break;
//	}
//
//	return 0;
//}
