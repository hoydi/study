#include <stdio.h>

int main(void)
{
	int num,i,j,k,l;
	double a;
	printf("������ �������ּ���.(1~5)");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("���������� �ϳ� �Է¹޾Ƽ� �� ����ŭ Hello World! ���");
		scanf("%d", &i);
		while (i > 0)
		{
			printf("Hello World!\n");
			i--;
		}
		break;

	case 2:
		printf("���������� �ϳ� �Է¹޾Ƽ� �� ����ŭ 3�� ��� ���");
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
			printf("������ �Է����ּ���");
			scanf("%d", &j);
			if (j == 0)
			{
				printf("������ ��: %d", i);
				break;
			}
				
			i = i + j;
		}
		break;

	case 4:
		printf("������ �Է����ּ���");
		scanf("%d", &i);
		num = 9;
		while (num > 0)
		{
			printf("%dx%d=%d\n", i, num, i * num);
			num--;
		}
		break;

	case 5:
		printf("��� ������ �Է��Ͻðڽ��ϱ�?");
		scanf("%d", &num);
		i = num;
		k = 0;
		while (i > 0)
		{
			scanf("%d", &j);
			k += j;

			i--;
		}

		printf("������ ��� : %f", (double)k / num);
		break;

	default:
		printf("�߸��� �����Դϴ�.");
	}


	return 0;

}