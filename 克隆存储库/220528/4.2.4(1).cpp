#include <iostream>
using namespace std;
class Person
{public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
	}
	//Person(const Person &p)
	//{
	//	cout << "Person�Ŀ������캯������" << endl;
	//	m_age = p.m_age;
	//}

	~Person()
	{
		cout << "Person��Ĭ��������������" << endl;
	}
	int m_age;
};
void test_1()
{
	Person p;
	p.m_age = 18;
	Person p2(p);
	cout << "p2������Ϊ��" << p2.m_age << endl;
}
int main()
{
	test_1();
	system("pause");
	return 0;
}