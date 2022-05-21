#include<iostream>
using namespace std;
//值传递
void swap_1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//地址传递
void swap_2(int* a, int* b)
{
	int temp =* a;
	*a =* b;
	*b = temp;
}
//引用传递
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