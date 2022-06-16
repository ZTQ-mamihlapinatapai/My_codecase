#include <iostream>
using namespace std;
class AbstractCalculator //������������
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};
//�ӷ���������
class jia :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 + m_num2;
	}

};
//������������
class jian :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 - m_num2;
	}

};
//�˷���������
class cheng :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 * m_num2;
	}

};
void test01()
{
	AbstractCalculator* abc = new jia;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new jian;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new cheng;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;

}
int main()
{
	test01();
	system("pause");
	return 0;
}