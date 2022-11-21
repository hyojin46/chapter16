//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ary = NULL;
//	int i = 0, n = 0, sum = 0;
//
//	printf("입력할 점수의 개수를 입력>> ");
//	scanf_s("%d", &n);
//
//	if (NULL == (ary = (int*)malloc(sizeof(ary))))
//	{
//		printf("메모리 할당에 문제가 있습니다.");
//		exit(1);
//	};
//
//	printf("%d개의 점수 입력>> ", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", (ary + i));
//		sum += *(ary + i);
//	}
//	printf("합: %d \t 평균: %.1f\n", sum, (float)sum / n);
//	free(ary);
//
//	return 0;
//}