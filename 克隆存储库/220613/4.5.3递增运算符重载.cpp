#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
//利用成员函数重载 ++
	//1.前置++
	MyInteger& operator++()
	{
		m_num++;//先前置递增
		return *this;//再返回自身
	}
	//2.后置++
	MyInteger operator++(int)//int代表占位参数（进行函数承载），用于区分前置和后置
	{
		MyInteger temp = *this;//先记录当时结果
		m_num++;//然后后置递增
		return temp;//最后返回记录结果
	}

private:
	int m_num;
};
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++myint << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}