//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* reary, * cary;
//	int i = 0;
//
//	if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
//	{
//		printf("�޸� �Ҵ��� ������ �ֽ��ϴ�.\n");
//		exit(1);
//	}
//
//	if ((reary = (int*)realloc(cary, sizeof(int) * 4)) == NULL)
//	{
//		printf("�޸� �Ҵ��� ������ �ֽ��ϴ�.\n");
//		exit(1);
//	}
//
//	for (i = 0; i < 4; i++)
//		printf("reary[%d] = %d\n", i, *(reary + i));
//	free(reary);
//
//	return 0;
//}