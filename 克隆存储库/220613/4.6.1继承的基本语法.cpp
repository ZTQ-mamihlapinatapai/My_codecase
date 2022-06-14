#include <iostream>
using namespace std;
class BasePage
{public:
	void f()
	{
		cout << "这里是公共页面。" << endl;
	}
};
class Java :public BasePage
{
public:
	void Ja()
	{
		cout << "Java学习" << endl;
		cout << "--------------------------" << endl;
	}
};
class Python :public BasePage
{
public:
	void Py()
	{
		cout << "Python学习" << endl;
		cout << "--------------------------" << endl;
	}
};
class CPP :public BasePage
{
public:
	void CP()
	{
		cout << "CPP学习" << endl;
	}
};
void test01()
{
	Java j;
	j.f();
	j.Ja();
	Python p;
	p.f();
	p.Py();
	CPP c;
	c.f();
	c.CP();
}
int main()
{
	test01();
	system("pause");
	return 0;
}