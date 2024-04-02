#include <stdio.h>

int main(void)
{
	int num,i,j,k,l;
	double a;
	printf("문제를 선택해주세요.(1~5)");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("양의정수를 하나 입력받아서 그 수만큼 Hello World! 출력");
		scanf("%d", &i);
		while (i > 0)
		{
			printf("Hello World!\n");
			i--;
		}
		break;

	case 2:
		printf("양의정수를 하나 입력받아서 그 수만큼 3의 배수 출력");
		scanf("%d", &i);
		j = 1;
		while (j <= i)
		{
			printf("%d\n", j*3);
			j++;
		}
		break;
	case 3:
		i = 0;
		while (1)
		{
			printf("정수를 입력해주세요");
			scanf("%d", &j);
			if (j == 0)
			{
				printf("정수의 합: %d", i);
				break;
			}
				
			i = i + j;
		}
		break;

	case 4:
		printf("정수를 입력해주세요");
		scanf("%d", &i);
		num = 9;
		while (num > 0)
		{
			printf("%dx%d=%d\n", i, num, i * num);
			num--;
		}
		break;

	case 5:
		printf("몇개의 정수를 입력하시겠습니까?");
		scanf("%d", &num);
		i = num;
		k = 0;
		while (i > 0)
		{
			scanf("%d", &j);
			k += j;

			i--;
		}

		printf("정수의 평균 : %f", (double)k / num);
		break;

	default:
		printf("잘못된 선택입니다.");
	}


	return 0;

}