#include <stdio.h>

int main(void)
{
	int num;

	printf("부호 바꿀 정수 값 : ");

	scanf("%d", &num);

	printf("답 : %d", ~num + 1);

}