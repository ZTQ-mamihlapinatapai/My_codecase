#include <iostream>
using namespace std;
class Person
{public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
	}
	//Person(const Person &p)
	//{
	//	cout << "Person的拷贝构造函数调用" << endl;
	//	m_age = p.m_age;
	//}

	~Person()
	{
		cout << "Person的默认析构函数调用" << endl;
	}
	int m_age;
};
void test_1()
{
	Person p;
	p.m_age = 18;
	Person p2(p);
	cout << "p2的年龄为：" << p2.m_age << endl;
}
int main()
{
	test_1();
	system("pause");
	return 0;
}