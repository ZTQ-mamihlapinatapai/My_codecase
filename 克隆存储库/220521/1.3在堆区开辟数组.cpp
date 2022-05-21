#include<iostream>
using namespace std;
void test()
{
	int *arr=new int[10]; //在堆区创建一个数组，该数组里有十个元素
	for(int i=0;i<10;i++)
	{
		arr[i] = i + 100; //给10个元素赋值100~109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr; 
}
int main()
{
	test();
	system("pause");
	return 0;
}