#include<iostream>
using namespace std;
#define MAXSIZE 100 //顺序表可能达到的最大长度
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
//【2.1】线性表L的初始化：
Status InitList_Sq(SqList& L) //构造一个空的顺序表
{
	L.elem = new ElemType[MAXSIZE]; //为顺序表分配空间
	if (!L.elem)
		exit(OVERFLOW); //存储分配失败
	L.length = 0;  //空表长度为0
	return OK;
}
//销毁线性表：
void DestroyList(SqList& L)
{
	if (L.elem)
		delete L.elem;
}
//清空线性表：
void ClearList(SqList& L)
{
	L.length = 0;
}
//求线性表的长度：
int GetLength(SqList L)
{
	return (L.length);
}
//判断线性表L是否为空
int IsEmpty(SqList L)
{
	if (L.length = 0)
		return TRUE;
	else return FALSE;
}
//【2.2】线性表的取值（根据位置i获取相应位置数据元素的内容）
int GetElem(SqList L, int i, ElemType& e)
{
	if (i<1 || i>L.length) 
		return ERROR;
	ElemType E = L.elem[i-1];
	return OK;
}
//【2.3】顺序表的查找（在L中查找与指定值e相同的数据元素的位置）
int LocateElem(SqList L, ElemType e)
{
	for (int i = 0; i < L.length; i++)
		if (L.elem[i] == e)
			return i + 1;
	return 0;
}
//【2.4】数据表的插入
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
//【2.5】数据表的删除
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