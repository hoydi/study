#include <stdio.h>

int main(void)
{
	int num;
	int i, j, k,l;
	int total = 0;
	int pn =2;
	int max = 0;
	printf("문제 선택(1~8)");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("10진수 정수를 입력하세요: ");
		scanf("%d", &i);
		printf("%x", i);
		break;

	case 2:
		printf("정수 2개를 입력하세요: ");
		scanf("%d %d", &i,&j);
		i > j ? (k = i, l = j) : (k = j, l = i);
		
		for (; l <= k; l++)
		{
			int a;
			for (a = 1; a < 10; a++)
				printf("%dx%d=%d\n", l, a, l * a);
		}
		break;

	case 3:
		printf("정수 2개를 입력하세요: ");
		scanf("%d %d", &i, &j);
		i > j ? (k = i, l = j) : (k = j, l = i); //k가큰수
		int a;
		int gcd;
		for (a=1; a <= k; a++)
		{
			if (k % a == 0 && l % a == 0)
				gcd = a;

		}
		printf("GCD = %d", gcd);

		break;

	case 4:
		//3500원, 크림빵500 / 새우깡 700 / 콜라 400

		for (i = 1; i * 500 <= 3500; i++)
		{
			for (j = 1; j * 700 <= 3500; j++)
			{
				for (k = 1; k * 400 <= 3500; k++)
				{
					if (i * 500 + j * 700 + k * 400 == 3500) {
						printf("크림빵 % d개, 새우깡 % d개, 콜라 % d개\n", i, j, k);
					}
				}
			}

		}
		printf("어떻게 구입하시겠습니까?");



		break;

	case 5:
		j = 0;
		k = 1;
		while(k<=10){
			for (i = 2; i < pn; i++)
			{
				j = 0;				
				if (pn % i == 0)
				{
					j = 1;
					
					break;	
				}
			}
			if (j == 0)
			{
				k++;
				printf("pn: %d\n", pn);
			}
			pn++;
		}
		break;
	case 6:
		j = 0;
		k = 0;
		l = 0;
		printf("초를 입력하세요: ");
		scanf("%d", &i);
		//j시 k분 l초
		if (i / 3600 != 0)
		{
			j = i / 3600;
			i -= j * 3600;
		}
		if (i / 60 != 0)
		{
			k = i / 60;
			l = i % 60;
		}
		else l = i;
		printf("%d시 %d분 %d초 \n", j, k, l);
		break;

	case 7:
		printf("수를 입력하세요: ");
		scanf("%d", &i);
		j = 0;
		
		while (1)
		{
			l = 1;
			for (k = 0; k < j; k++)
			{
				l *= 2;
			}
			if (i < l)
			{
				j--;
				break;
			}
			else if (i == l)
			{
				break;
			}
			else
			{
				max = j;
				j++;
			}
		}
		printf("상수: %d, k의최대값은%d", i, j);

		break;

	case 8:

		printf("수를 입력하세요: ");
		scanf("%d", &i);

		printf("2의 %d승은 %d", i,Recursive(i));

		break;

	default:
		break;
	}

	return 0;
}

int Recursive(int a)
{
	if(a==1)
		return 2;
	return 2 * Recursive(a - 1);
}