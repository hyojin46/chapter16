//#include <stdio.h>  //연결리스트 번외문제
//#include <stdlib.h>
//
//struct NODE {
//	struct NODE* next;
//	int data;
//};
//
//int main(void)
//{
//	struct NODE* head = malloc(sizeof(struct NODE));  //반환형이 struct 형이기 때문에 형변환식 필요x
//
//	struct NODE* node1 = malloc(sizeof(struct NODE));
//	head->next = node1;
//	node1->data = 10;
//
//	struct NODE* node2 = malloc(sizeof(struct NODE));
//	node1->next = node2;
//	node2->data = 20;
//
//	node2->next = NULL;
//
//	struct NODE* curr = head->next; //연결 리스트 순회용 포인터에 첫 번째 노드의 주소저장
//
//	while (curr != NULL) //포인터가 NULL이 아닐 때 계속 반복
//	{
//		printf("%d\n", curr->data); //현재 노드의 데이터 출력
//		curr = curr->next; //포인터에 다음 노드의 주소 저장
//	}
//
//	free(node2);
//	free(node1);
//	free(head);
//
//	return 0;
//}