//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct student {
//	char title[30];
//	int score;
//}ST;
//
//int main(void)
//{
//	ST* t_zone;
//	int max, cnt, sum = 0;
//
//	printf("신청 과목수 입력: ");
//	scanf_s("%d", &max);
//
//	if (max < 0)
//	{
//		printf("음의 정수는 허용하지 않습니다.\n");
//		exit(1);
//	}
//
//	getchar();
//	t_zone = (ST*)malloc(sizeof(int) * max);
//
//	if (t_zone == NULL)
//	{
//		printf("동적 메모리 할당 오류 발생");
//		exit(1);
//	}
//
//	for(cnt = 0; cnt < max; cnt++)
//	{
//		printf("신청 과목: ");
//		gets_s(t_zone[cnt].title, sizeof(t_zone[cnt].title));
//		printf("신청 학점: ");
//		scanf_s("%d", &(t_zone[cnt].score));
//
//		getchar();
//		sum += t_zone[cnt].score;
//	}
//	printf("\n신청한 과목 \t\t 학점\n");
//
//	for (cnt = 0; cnt < max; cnt++)
//		printf("%s \t\t %3d\n", t_zone[cnt].title, t_zone[cnt].score);
//
//	printf("신청한 총 학점은 %d\n", sum);
//
//	free(t_zone);
//	return 0;
//}