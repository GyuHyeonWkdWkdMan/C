#pragma once
#include<stdio.h>

typedef int element;
int MAX_LIST_SIZE = 100;
typedef struct {
	int list[100]; // �迭 ����
	int length; // ���� �迭�� ����� �׸���� ����
} ArrayListType;void init(ArrayListType* L)
{
	L->length = 0;
}


// ����Ʈ�� ��� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int is_empty(ArrayListType* L) {
	return L->length == 0;
}
// ����Ʈ�� ���� �� ������ 1�� ��ȯ
// �׷��� ������ 1�� ��ȯ
int is_full(ArrayListType* L) {
	return L->length == MAX_LIST_SIZE;
}

// position: �����ϰ��� �ϴ� ��ġ
// item: �����ϰ��� �ϴ� �ڷ�
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

// position: �����ϰ��� �ϴ� ��ġ
// ��ȯ��: �����Ǵ� �ڷ�
element Delete(ArrayListType* L, int position) {
	int i;
	element item;
	if (position < 0 || position >= L->length)
		printf("��ġ ����");
	item = L->list[position];
	for (i = position; i < (L->length - 1); i++)
		L->list[i] = L->list[i + 1];
	L->length--;
	return item;
}