#include<iostream>
using namespace std;
class Person
{public:
	int m_age;

	Person()
	{
		cout << "无参构造函数调用" << endl;
	}
	Person(int age)
	{
		cout << "有参构造函数调用" << endl;
		m_age = age;
	}
	Person(const Person& p)
	{
		cout << "拷贝构造函数调用" << endl;
		m_age = p.m_age;
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
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