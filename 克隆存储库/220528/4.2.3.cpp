#include<iostream>
using namespace std;
class Person
{public:
	int m_age;

	Person()
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(int age)
	{
		cout << "�вι��캯������" << endl;
		m_age = age;
	}
	Person(const Person& p)
	{
		cout << "�������캯������" << endl;
		m_age = p.m_age;
	}
	~Person()
	{
		cout << "������������" << endl;
	}

};
Person doWork()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test_3()
{
	Person p = doWork();
	cout << (int*)&p << endl;
}
int main()
{
	test_3();
	system("pause");
	return 0;
}