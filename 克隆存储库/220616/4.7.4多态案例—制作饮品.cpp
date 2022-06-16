#include <iostream>
using namespace std;
class AbstractDrinking
{
public:
	virtual void Boil() = 0; //��ˮ
	virtual void Brew() = 0; //����
	virtual void PourIntoCup() = 0; //���뱭��
	virtual void PutSomething() = 0; //���븨��
	
	void makeDrink()
	{
		Boil();
		Brew();
		PourIntoCup();
		PutSomething();
	}
};
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << " ��ũ��ɽȪ " << endl;
	}
	virtual void Brew() 
	{
		cout << " ���ݿ��� " << endl;
	}
	virtual void PourIntoCup() 
	{
		cout << " ���뱭�� " << endl;
	}
	virtual void PutSomething() 
	{
		cout << " �����Ǻ�ţ�� " << endl;
	}
};
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << " ��ũ��ɽȪ " << endl;
	}
	virtual void Brew()
	{
		cout << " ���ݲ�Ҷ " << endl;
	}
	virtual void PourIntoCup()
	{
		cout << " ���뱭�� " << endl;
	}
	virtual void PutSomething()
	{
		cout << " ������� " << endl;
	}
};
void doWork(AbstractDrinking* p) //AbstractDrinking* p = new Coffee
{
	p->makeDrink();
	delete p; //�������ͷŶ�������
}
void func(int& a)
{
	if (a == 1)
	{
		doWork(new Coffee);
	}
	else if (a == 2)
	{
		doWork(new Tea);
	}
}
void test01()
{
	int A;
	cout << " ������1��2 " << endl;
	cin >> A;
	func(A);
}
int main()
{
	test01();
	system("pause");
	return 0;
}