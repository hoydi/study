#include <stdio.h>

void leap(int a);
double area(int a);
int main(void)
{
	int num;
	int i, j, k, l;
	char str[50],max;
	printf("문제 선택(1~8)");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		
		scanf("%s", str);
		
		i = 0;
		while (str[i] != 0)
		{
			i++;
		}

		printf("%d", i);

		break;

	case 2:
		
		scanf("%s", str);

		i = 0;
		while (str[i] != 0)
		{
			i++;
		}
		i--;
		for (; i >= 0; i--)
		{
			printf("%c", str[i]);
		}

		break;


		break;

	case 3:

		scanf("%s", str);

		i = 0;
		while (str[i] != 0)
		{
			i++;
		}
		max = 0;
		for (; i >= 0; i--)
		{
			if (max < str[i])
				max = str[i];
		}
		printf("\n최대아스키코드값= %c ", max);


		break;

	case 4:
		int age[5], avg = 0;
		int avgn = 0;
		printf("나이>> ");
		for (i=0;i<sizeof(age)/sizeof(int);i++)
			scanf("%d",&age[i]);
		
		printf("---------\n");
		printf("20대 나이\n");
		printf("---------\n");
		for (i = 0; i < sizeof(age) / sizeof(int); i++)
			if (age[i] >= 20 && age[i] < 30)
			{
				printf("%2d 세\n", age[i]);
				avg += age[i];
				avgn++;
			}
		printf("---------\n");
		printf("평균: %.2f %d %d", (double)avg/avgn,avg,avgn);

		break;

	case 5:
		int integer[5];
		for (i = 0; i < sizeof(integer) / sizeof(int); i++)
			scanf("%d", &integer[i]);

		for (i = 1; i < sizeof(integer) / sizeof(int); i++)
			printf("%d ",integer[i]);
		printf("%d ", integer[0]);
	
		break;

	case 6:
		int leapyear;
		scanf("%d", &leapyear);
		leap(leapyear);
		
		break;

	case 7:
		//%.f,%.0f : 소수점이 모두 삭제됨->정수형처럼출력됨
		//%.3f : 소수점 두자리까지 출력
		int radius;
		scanf("%d", &radius);
		
		printf("%.3f", area(radius));
	
		break;

	case 8:

		break;

	default:
		break;
	}

	return 0;
}

void leap(a)
{
	if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
	{
		printf("%d 년은 윤년입니다", a);
	}
	else printf("%d 년은 윤년이 아닙니다", a);

}
double area(a)
{
	return 3.141592 * a * a;
}