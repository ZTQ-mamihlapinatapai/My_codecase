#include <iostream>
using namespace std;
class Base
{
public:
	void func()
	{
		cout<<" Base�ĺ������� " << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	void func()
	{
		cout << " Son�ĺ������� " << endl;
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