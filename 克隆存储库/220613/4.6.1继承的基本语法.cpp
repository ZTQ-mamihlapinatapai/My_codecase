#include <iostream>
using namespace std;
class BasePage
{public:
	void f()
	{
		cout << "�����ǹ���ҳ�档" << endl;
	}
};
class Java :public BasePage
{
public:
	void Ja()
	{
		cout << "Javaѧϰ" << endl;
		cout << "--------------------------" << endl;
	}
};
class Python :public BasePage
{
public:
	void Py()
	{
		cout << "Pythonѧϰ" << endl;
		cout << "--------------------------" << endl;
	}
};
class CPP :public BasePage
{
public:
	void CP()
	{
		cout << "CPPѧϰ" << endl;
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