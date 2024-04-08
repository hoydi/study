//#include <stdio.h>
//void squared(int* a)
//{
//	int temp = *a;
//	printf("\n %d ", temp * temp);
//}
//
//void change(int* a, int* b)
//{
//	int temp;
//	printf("바꾸기전: %d %d \n", *a, *b);
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	printf("바꾸기후: %d %d \n", *a, *b);
//
//}
//int main(void)
//{
//	int num;
//	int i, j, k, l;
//	int total = 0;
//	int pn = 2;
//	int max = 0;
//	printf("문제 선택(1~8)");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		int arr[5] = { 1,2,3,4,5 };
//		int* ptr = arr;
//		int i;
//		for (i = 0; i < 5; i++) {
//			*ptr += 2;
//			printf("%d",arr[i]);
//			ptr++;
//
//		}
//		break;
//
//	case 2:
//		int arr2[5] = { 1,2,3,4,5 };
//		int* ptr2 = arr2;
//		int i2;
//		for (i2 = 0; i2 < 5; i2++) {
//			*(ptr2+i2) += 2;
//			printf("%d", arr2[i2]);
//
//		}
//
//		break;
//
//	case 3:
//		int arr3[5] = { 1,2,3,4,5 };
//		int* ptr3 = &arr3[4];
//		int i3;
//		int sum=0;
//		for (i3 = 0; i3 < 5; i3++) {
//			sum += *(ptr3--);
//	
//		}
//		printf("%d", sum);
//		break;
//
//	case 4:
//		int arr4[6] = { 1,2,3,4,5,6 };
//		int* ptr4=arr4, * ptr5=&arr4[5];
//		int n;
//		for (i = 0; i < 3; i++) {
//			n = *ptr4;
//			*ptr4 = *ptr5;
//			*ptr5 = n;
//			ptr4++;
//			ptr5--;
//		}
//		for (i = 0; i < 6; i++) {
//			printf("%d", arr4[i]);
//		}
//		
//
//		break;
//
//	case 5:
//		printf("정수입력: ");
//		scanf("%d", &i);
//		int* p = &i;
//		squared(p);
//
//		//정수를입력받아정수의제곱을출력하는프로그램작성(제곱계산은반환형태void 포인터사용함수로구현)
//		break;
//
//	case 6:
//		//두정수를입력받아두숫자를바꿔서출력하는프로그램작성(두정수의포인터를활용하여숫자를바꾸는함수로구현)
//		//입력:10 20 출력: 바꾸기전:10 20 바꾸기후 20 10 
//		printf("정수 2개 입력: ");
//		scanf("%d %d", &i,&j);
//		int * p1 = &i;
//		int * p2 = &j;
//		change(p1, p2);
//
//		break;
//
//	default:
//		break;
//	}
//
//	return 0;
//}
//
