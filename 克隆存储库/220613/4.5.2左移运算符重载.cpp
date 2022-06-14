#include<iostream>
using namespace std;
class Person
{
	friend ostream& operator<<(ostream& cout, Person p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//一般不利用成员函数重载 <<

	int m_A;
	int m_B;
};
//只能利用全局函数重载 <<
ostream& operator<<(ostream &cout,Person p)
{
	cout << " m_A=" << p.m_A << " m_B=" << p.m_B ;
	return cout;
}
void test01()
{
	Person p(10,20);

	cout << p << " hello world " << endl;;
}
int main()
{
	test01();
	system("pause");
	return 0;
}