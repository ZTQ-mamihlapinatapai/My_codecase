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
//���ó�Ա�������� ++
	//1.ǰ��++
	MyInteger& operator++()
	{
		m_num++;//��ǰ�õ���
		return *this;//�ٷ�������
	}
	//2.����++
	MyInteger operator++(int)//int����ռλ���������к������أ�����������ǰ�úͺ���
	{
		MyInteger temp = *this;//�ȼ�¼��ʱ���
		m_num++;//Ȼ����õ���
		return temp;//��󷵻ؼ�¼���
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