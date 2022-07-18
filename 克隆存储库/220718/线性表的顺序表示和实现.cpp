#include<iostream>
using namespace std;
#define MAXSIZE 100 //˳�����ܴﵽ����󳤶�
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;
typedef char ElemType;
typedef struct
{
	ElemType* elem;
	int length;
}SqList;
//��2.1�����Ա�L�ĳ�ʼ����
Status InitList_Sq(SqList& L) //����һ���յ�˳���
{
	L.elem = new ElemType[MAXSIZE]; //Ϊ˳������ռ�
	if (!L.elem)
		exit(OVERFLOW); //�洢����ʧ��
	L.length = 0;  //�ձ���Ϊ0
	return OK;
}
//�������Ա�
void DestroyList(SqList& L)
{
	if (L.elem)
		delete L.elem;
}
//������Ա�
void ClearList(SqList& L)
{
	L.length = 0;
}
//�����Ա�ĳ��ȣ�
int GetLength(SqList L)
{
	return (L.length);
}
//�ж����Ա�L�Ƿ�Ϊ��
int IsEmpty(SqList L)
{
	if (L.length = 0)
		return TRUE;
	else return FALSE;
}
//��2.2�����Ա��ȡֵ������λ��i��ȡ��Ӧλ������Ԫ�ص����ݣ�
int GetElem(SqList L, int i, ElemType& e)
{
	if (i<1 || i>L.length) 
		return ERROR;
	ElemType E = L.elem[i-1];
	return OK;
}
//��2.3��˳���Ĳ��ң���L�в�����ָ��ֵe��ͬ������Ԫ�ص�λ�ã�
int LocateElem(SqList L, ElemType e)
{
	for (int i = 0; i < L.length; i++)
		if (L.elem[i] == e)
			return i + 1;
	return 0;
}
//��2.4�����ݱ�Ĳ���
Status ListInsert_Sq(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)
		return ERROR;
	if (L.length == MAXSIZE)
		return ERROR;
	for (int j = L.length - 1; j >= i - 1; j--)
		L.elem[j + 1] = L.elem[j];
	L.elem[i - 1] = e;
	L.length++;
	return OK;
}
//��2.5�����ݱ��ɾ��
Status ListDelete_Sq(SqList& L, int i)
{
	if (i<1 || i>L.length)
		return ERROR;
	for (int j = i; j <= L.length - 1; j++)
		L.elem[j - 1] = L.elem[j];
	L.length--;
	return OK;
}
int main()
{
	system("pause");
	return 0;
}