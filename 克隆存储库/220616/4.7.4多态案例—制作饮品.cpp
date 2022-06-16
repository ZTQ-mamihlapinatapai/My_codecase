#include <iostream>
using namespace std;
class AbstractDrinking
{
public:
	virtual void Boil() = 0; //煮水
	virtual void Brew() = 0; //冲泡
	virtual void PourIntoCup() = 0; //倒入杯中
	virtual void PutSomething() = 0; //加入辅料
	
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
		cout << " 煮农夫山泉 " << endl;
	}
	virtual void Brew() 
	{
		cout << " 冲泡咖啡 " << endl;
	}
	virtual void PourIntoCup() 
	{
		cout << " 倒入杯中 " << endl;
	}
	virtual void PutSomething() 
	{
		cout << " 加入糖和牛奶 " << endl;
	}
};
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << " 煮农夫山泉 " << endl;
	}
	virtual void Brew()
	{
		cout << " 冲泡茶叶 " << endl;
	}
	virtual void PourIntoCup()
	{
		cout << " 倒入杯中 " << endl;
	}
	virtual void PutSomething()
	{
		cout << " 加入枸杞 " << endl;
	}
};
void doWork(AbstractDrinking* p) //AbstractDrinking* p = new Coffee
{
	p->makeDrink();
	delete p; //在这里释放堆区数据
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
	cout << " 请输入1或2 " << endl;
	cin >> A;
	func(A);
}
int main()
{
	test01();
	system("pause");
	return 0;
}