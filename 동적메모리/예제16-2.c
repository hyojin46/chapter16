//#include <stdio.h>
//
//int main(void)
//{
//	int cnt,std,sum=0;
//	int* score;
//	float avg = 0.0;
//
//	printf("학생수 입력: ");
//	scanf_s("%d", &std);
//
//	score = (int*)malloc(std * sizeof(int));
//
//	if (score == NULL)
//	{
//		printf("동적 메모리 할당 오류 발생\n");
//		exit(1);
//	}
//
//	for (cnt = 0; cnt < std; cnt++)
//	{
//		printf("학생 # %d-%d 성적 입력: ", std, cnt + 1);
//		scanf_s("%d", &score[cnt]);
//		sum += score[cnt];
//	}
//	printf("총점 : %d\n\n", sum);
//
//	for (cnt = 0; cnt < std; cnt++)
//	{
//		printf("학생 # %d-%d 성적 출력: %d\n", std, cnt + 1, score[cnt]);
//	}
//
//	avg = (float)sum / std;
//	printf("평균 점수: %.2f\n", avg);
//
//	free(score);
//	return 0;
//}