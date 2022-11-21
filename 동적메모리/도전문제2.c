//#include <stdio.h> //도전 문제2
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
//		printf("동적 메모리 할당 오류 발생!\n");
//		exit(1);
//	}
//
//	strcpy_s(p[0].name, sizeof(p[0].name), "최고봉");
//	p[0].age = 19;
//
//	strcpy_s(p[1].name, sizeof(p[1].name), "을지문덕");
//	p[1].age = 20;
//
//	for (cnt = 0; cnt < 2; cnt++)
//	{
//		printf("선수 %d: %8s", cnt + 1, p[cnt].name);
//		printf("(%d세)\n", p[cnt].age);
//	}
//
//	free(p);
//	return 0;
//}