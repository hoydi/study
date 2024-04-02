//#include <stdio.h>
//
//int main(void)
//{
//	int num,i,j,k,l;
//	printf("문제를 선택해주세요.(1~3)");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램 작성 \n");
//		for (i = 1; i < 100; i++)
//		{
//			if (i % (7 * 9) == 0)
//				printf("%d는 7과9의 배수\n", i);
//			else if (i % 7 == 0)
//				printf("%d는 7의 배수\n", i);
//			else if (i % 9 == 0)
//				printf("%d는 9의 배수\n", i);
//		}
//		break;
//
//	case 2:
//		printf("두개의 정수를 입력받아서 두 수의 차를 출력하는 프로그램 구현. 무조건 큰 수에서 작은 수를 뺀 결과를 출력\n");
//		printf("정수 두개를 입력해주세요.");
//		scanf("%d %d", &j, &k);
//		l = (j - k);
//		printf("답 : %d", l>0?l:l*(-1));
//		break;
//	case 3:
//		printf("학생 전체 평균점수에 대한 학점 출력\n");
//		printf("국어, 영어, 수학 점수 입력 :\n");
//		scanf("%d %d %d", &j, &k, &l);
//		i = (j + k + l) / 3;
//		printf("평균점수: %d\n학점: ", i);
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
//		printf("잘못된 선택입니다.");
//	}
//
//
//	return 0;
//
//}