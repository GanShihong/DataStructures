#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDatetype;

typedef struct SeqList
{
	SLDatetype* a;
	int size;//��Ч����
	int capacity;//��ǰ�ռ�
}SL;

void SLInit (SL* psl);//��ʼ��
void SLDestroy(SL* psl);//ɾ��˳���

//ͷβ����ɾ��
void SLPushBack(SL* psl, SLDatetype x);
void SLPushFront(SL* psl, SLDatetype x);
void SLPopBack(SL* psl);
void SLPopFront(SL* psl);

//˳���Ĵ�ӡ
void SLPrint(SL* psl);

//����
void SLCheckCapacity(SL* psl);

//��posλ�ò���x
void SLInsert(SL* psl, int pos, SLDatetype x);
//ɾ��posλ�õ�ֵ
void SLErase(SL* psl, int pos);
