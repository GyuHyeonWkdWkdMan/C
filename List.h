#pragma once
#include<stdio.h>

typedef int element;
int MAX_LIST_SIZE = 100;
typedef struct {
	int list[100]; // 배열 정의
	int length; // 현재 배열에 저장된 항목들의 개수
} ArrayListType;void init(ArrayListType* L)
{
	L->length = 0;
}


// 리스트가 비어 있으면 1을 반환
// 그렇지 않으면 0을 반환
int is_empty(ArrayListType* L) {
	return L->length == 0;
}
// 리스트가 가득 차 있으면 1을 반환
// 그렇지 많으면 1을 반환
int is_full(ArrayListType* L) {
	return L->length == MAX_LIST_SIZE;
}

// position: 삽입하고자 하는 위치
// item: 삽입하고자 하는 자료
void add(ArrayListType* L, int position, element item) {
	if (!is_full(L) && (position >= 0) &&
		(position <= L->length)) {
		int i;
		for (i = (L->length - 1); i >= position; i--)
			L->list[i + 1] = L->list[i];
		L->list[position] = item;
		L->length++;
	}
}

// position: 삭제하고자 하는 위치
// 반환값: 삭제되는 자료
element Delete(ArrayListType* L, int position) {
	int i;
	element item;
	if (position < 0 || position >= L->length)
		printf("위치 오류");
	item = L->list[position];
	for (i = position; i < (L->length - 1); i++)
		L->list[i] = L->list[i + 1];
	L->length--;
	return item;
}