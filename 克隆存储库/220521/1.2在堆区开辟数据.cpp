#include<iostream>
using namespace std;
int* func()
{
	//利用new关键字，可以将数据开辟到堆区
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