//#include <stdio.h>
//
//int main(void)
//{
//	FILE * fp = fopen("mystory.txt", "wt");
//	if (fp == NULL)
//	{
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputs("#이름: 윤성우 \n", fp);
//	fputs("#주민번호: 900208-1012589\n", fp);
//	fputs("#전화번호: 010-1111-2222\n", fp);
//	fclose(fp);
//	/*****************************************************/
//	FILE* ap = fopen("mystory.txt", "at");
//	if (ap == NULL)
//	{
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputs("#즐겨먹는 음식: 짬뽕,탕수육\n", ap);
//	fputs("#취미: 축구\n", ap);
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