#include<iostream>
using namespace std;
void test()
{
	int *arr=new int[10]; //�ڶ�������һ�����飬����������ʮ��Ԫ��
	for(int i=0;i<10;i++)
	{
		arr[i] = i + 100; //��10��Ԫ�ظ�ֵ100~109
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