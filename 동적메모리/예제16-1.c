//#include <stdio.h>
//
//int main(void)
//{
//	int cnt;
//	int* score;
//	score = (int*)malloc(3 * sizeof(int));
//
//	if (score == NULL)
//	{
//		printf("���� �޸� �Ҵ� ���� �߻�\n");
//		exit(1);
//	}
//
//	score[0] = 97;
//	score[1] = 88;
//	score[2] = 93;
//
//	for (cnt = 0; cnt < 3; cnt++)
//		printf("%d��° ����: %d\n", cnt + 1, score[cnt]);
//
//	free(score);
//	return 0;
//}