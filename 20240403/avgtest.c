#include <stdio.h>

void chart(int a, int b, int c, int d, int e)
{
	printf("------------------------------------\n");
	printf("| ���� | ���� | ���� | ���� | ü�� |\n");
	printf("------------------------------------\n");
	printf("| %4d | %4d | %4d | %4d | %4d |\n", a, b, c, d, e);
	printf("------------------------------------\n");
}

void total(int a, int b, int c, int d, int e)
{
	printf("���� : %d\n", a + b + c + d + e);
}
void avg(int a, int b, int c, int d, int e)
{
	printf("��� : %d\n", (a + b + c + d + e) / 5);
}
void maximum(int a, int b, int c, int d, int e)
{
	int i = 0;
	if (i < a) i = a;
	if (i < b) i = b;
	if (i < c) i = c;
	if (i < d) i = d;
	if (i < e) i = e;
	printf("�ִ� ���� : %d\n", i);
}



int main(void)
{

	//��������ü ���� �Է¹޾� ���� ����ǥ, ����, ���, �ִ������� ���
	chart(10, 20, 30, 40, 50);
	total(10, 20, 30, 40, 50);
	avg(10, 20, 30, 40, 50);
	maximum(10, 20, 30, 40, 50);


	return 0;
}