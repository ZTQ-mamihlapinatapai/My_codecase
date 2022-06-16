#include<iostream>
using namespace std;
#include<string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}
	virtual~Animal() = 0; //纯虚析构
	virtual void speak() = 0;
};
Animal::~Animal()  //纯虚析构
{
	cout << "Animal的纯虚析构函数调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_name <<" 小猫在说话 " << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};
void test01()
{
	Animal* p=new Cat("Tom");
	p->speak();
	delete p;
}
int main()
{
	test01();
	system("pause");
	return 0;
}