//#include <stdio.h> //도전 문제1
//#include <stdlib.h>
//
//int main(void)
//{
//	int cnt;
//	int* score;
//	score = (int*)malloc(sizeof(int) * 2);
//
//	if (score == NULL)
//	{
//		printf("동적 메모리 할당 오류 발생!\n");
//		exit(1);
//	}
//
//	score[0] = 97;
//	score[1] = 88;
//
//	for (cnt = 0; cnt < 2; cnt++)
//		printf("%d번째 점수: %d\n", cnt + 1, score[cnt]);
//
//	free(score);
//	return 0;
//}