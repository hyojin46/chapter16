//#include <stdio.h> //���� ����2
//#include <stdlib.h>
//#include <string.h>
//
//struct STD {
//	char name[12];
//	int age;
//};
//
//int main(void)
//{
//	int cnt;
//	struct STD* p;
//
//	p = (struct ST*)malloc(2 * sizeof(struct STD));
//
//	if (p == NULL)
//	{
//		printf("���� �޸� �Ҵ� ���� �߻�!\n");
//		exit(1);
//	}
//
//	strcpy_s(p[0].name, sizeof(p[0].name), "�ְ��");
//	p[0].age = 19;
//
//	strcpy_s(p[1].name, sizeof(p[1].name), "��������");
//	p[1].age = 20;
//
//	for (cnt = 0; cnt < 2; cnt++)
//	{
//		printf("���� %d: %8s", cnt + 1, p[cnt].name);
//		printf("(%d��)\n", p[cnt].age);
//	}
//
//	free(p);
//	return 0;
//}