#include<iostream>
using namespace std;
int* func()
{
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	int *p=new int(10);
	return p;
	
	//int a = 10;
	//return &a
}
int main()
{
	int* p = func();
	cout << *p << endl;
	system("pause");
	return  0;
}