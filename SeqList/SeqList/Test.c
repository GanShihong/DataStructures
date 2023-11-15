#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void Test1()//尾插法
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 7);
	SLPushBack(&sl, 8);
	SLPushBack(&sl, 9);
	SLPrint(&sl);
	SLDestroy(&sl);
}
void Test2()//头插法
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);
	SLPushFront(&sl, 8);
	SLPushFront(&sl, 9);

	SLPrint(&sl);
	SLDestroy(&sl);
}
void Test3()//头尾删
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 7);
	SLPushBack(&sl, 8);
	SLPushBack(&sl, 9);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);


	SLPrint(&sl);
	SLDestroy(&sl);
}

void Test4()//在pos位置插入或删除x
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 7);
	SLPushBack(&sl, 8);
	SLPushBack(&sl, 9);
	SLInsert(&sl, 5, 5);
	SLInsert(&sl, 5, 6);
	SLInsert(&sl, 5, 7);
	SLPrint(&sl);
	SLErase(&sl, 1);
	SLErase(&sl, 1);
	SLErase(&sl, 1);
	SLErase(&sl, 1);
	SLPrint(&sl);
}
int main()
{
	Test4();
	return 0;
}