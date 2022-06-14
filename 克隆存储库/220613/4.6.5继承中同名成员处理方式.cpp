#include <iostream>
using namespace std;
class Base
{
public:
	void func()
	{
		cout<<" Base的函数调用 " << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	void func()
	{
		cout << " Son的函数调用 " << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	s.func();
	s.Base::func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}