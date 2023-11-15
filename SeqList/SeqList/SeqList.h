#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDatetype;

typedef struct SeqList
{
	SLDatetype* a;
	int size;//有效数据
	int capacity;//当前空间
}SL;

void SLInit (SL* psl);//初始化
void SLDestroy(SL* psl);//删除顺序表

//头尾插入删除
void SLPushBack(SL* psl, SLDatetype x);
void SLPushFront(SL* psl, SLDatetype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

//顺序表的打印
void SLPrint(SL* psl);

//扩容
void SLCheckCapacity(SL* psl);

//在pos位置插入x
void SLInsert(SL* psl, int pos, SLDatetype x);
//删除pos位置的值
void SLErase(SL* psl, int pos);
