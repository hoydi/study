////1. 국영수 점수 입력받아 모두 60점이상이면 합격, 하나라도 미만이면 불합격 출력
////2. 1-12까지의 월을 입력받아 해당월의 계절을 출력하는 프로그램. 1~12범위아니면 "x월은 존재하지 않습니다" 출력
////	3~5월봄, 6~8월 여름, 9~11 가을, 12~2월 겨울 / 다시 입력할것인지 종료할것인지를 묻고 1입력시 재입력, 0입력시 프로그램종료
//
//#include <stdio.h>
//
//int main(void)
//{
//
//	int num, i, j, k;
//	printf("문제를 선택해주세요.(1~5)\n");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("국,영,수 점수를 차례대로 입력해주세요.\n");
//		scanf("%d %d %d", &i, &j, &k);
//		if (i >= 60 && j >= 60 && k >= 60)
//			printf("합격");
//		else
//			printf("불합격");
//
//		break;
//	case 2:
//		printf("월을 입력해주세요\n");
//		scanf("%d", &i);
//		if (i >= 3 && i<= 5)
//			printf("%d월은 봄", i);
//		else if (i >= 6 && i <= 8)
//			printf("%d월은 여름", i);
//		else if (i >= 9 && i <= 11)
//			printf("%d월은 가을", i);
//		else if (i == 12 || i>0 && i <=2)
//			printf("%d월은 겨울", i);
//
//		else
//			printf("%d월은 존재하지 않습니다.", i);
//		break;
//
//	case 3:
//		printf("돈을 넣어주세요\n");
//		scanf("%d", &i);
//		if (i >= 500)
//		{
//			j = i - 500;
//			printf("음료가 나왔습니다. 거스름돈은 %d원입니다.", j);
//		}
//		else
//			printf("돈이 모자랍니다. %d원이 반환되었습니다.", i);
//		break;
//	case 4:
//		printf("나이와 요금을 알려주세요\n");
//		scanf("%d %d", &i,&j);
//		if (i > 0 && i < 20)
//			j = j * 0.7;
//			printf("요금 30%할인대상자입니다. %d원입니다.", j);
//		break;
//
//	case 5:
//		printf("체감온도와 지속일을 입력해주세요\n");
//		scanf("%d %d", &i,&j);
//		if (i >= 35 && j >= 2)
//			printf("폭염경보");
//		else if (i >= 33 && j >= 2)
//			printf("폭염주의보");
//		else
//			printf("별일없음");
//		break;
//	default:
//		printf("없는 번호입니다");
//	}
//	return 0;
//
//}