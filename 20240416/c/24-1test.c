//#include <stdio.h>
//
//int main(void)
//{
//	FILE * fp = fopen("mystory.txt", "wt");
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	fputs("#�̸�: ������ \n", fp);
//	fputs("#�ֹι�ȣ: 900208-1012589\n", fp);
//	fputs("#��ȭ��ȣ: 010-1111-2222\n", fp);
//	fclose(fp);
//	/*****************************************************/
//	FILE* ap = fopen("mystory.txt", "at");
//	if (ap == NULL)
//	{
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	fputs("#��ܸԴ� ����: «��,������\n", ap);
//	fputs("#���: �౸\n", ap);
//
//	fclose(ap);
//	/*****************************************************/
//	char str[100];
//	FILE* rp = fopen("mystory.txt", "rt");
//
//	while (fgets(str, sizeof(str), fp) != NULL)
//		printf(str);
//	fclose(rp);
//
//
//	return 0;
//}