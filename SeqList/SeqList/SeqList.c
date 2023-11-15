#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
void SLInit(SL* psl)
{
	assert(psl);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
	//printf("初始化成功\n");
}

void SLDestroy(SL* psl)
{
	assert(psl);
	if (psl->a != NULL)
	{
		free(psl->a);
		psl->a = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
	//printf("删除成功\n");
}

void SLPrint(SL* psl)
{
	assert(psl);
	for (int i = 0; i<psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
void SLCheckCapacity(SL* psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		int NewCapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLDatetype* tmp = (SLDatetype*)realloc(psl->a, sizeof(SLDatetype) * NewCapacity);
		if (tmp == NULL)
		{
			perror("Realloc Fail");
			return;
		}
		psl->a = tmp;
		psl->capacity = NewCapacity;
	}

}

//头尾插入删除
void SLPushBack(SL* psl, SLDatetype x)
{
	assert(psl);
	SLCheckCapacity(psl);
	psl->a[psl->size] = x;
	psl->size++;
}
void SLPushFront(SL* psl, SLDatetype x)
{
	assert(psl);
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}
void SLPopBack(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);
	psl->size--;
}
void SLPopFront(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);
	int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}

void SLInsert(SL* psl, int pos, SLDatetype x)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	SLCheckCapacity(&psl);
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}

void SLErase(SL* psl, int pos)
{
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	int begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}