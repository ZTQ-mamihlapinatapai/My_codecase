#include<iostream>
using namespace std;
//ֵ����
void swap_1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//��ַ����
void swap_2(int* a, int* b)
{
	int temp =* a;
	*a =* b;
	*b = temp;
}
//���ô���
void swap_3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//swap_1(a,b);
	//cout << "a=" << a << " b=" << b << endl;
	//swap_2(&a,&b);
	//cout << "a=" << a << " b=" << b << endl;
	swap_3(a, b);
	cout << "a=" << a << " b=" << b << endl;

	system("pause");
	return 0;
}