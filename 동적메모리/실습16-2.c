//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ary = NULL;
//	int i = 0, n = 0, sum = 0;
//
//	printf("�Է��� ������ ������ �Է�>> ");
//	scanf_s("%d", &n);
//
//	if (NULL == (ary = (int*)malloc(sizeof(ary))))
//	{
//		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
//		exit(1);
//	};
//
//	printf("%d���� ���� �Է�>> ", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", (ary + i));
//		sum += *(ary + i);
//	}
//	printf("��: %d \t ���: %.1f\n", sum, (float)sum / n);
//	free(ary);
//
//	return 0;
//}