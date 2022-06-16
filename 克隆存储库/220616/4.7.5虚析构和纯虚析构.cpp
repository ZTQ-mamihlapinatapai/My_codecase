#include<iostream>
using namespace std;
#include<string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
	virtual~Animal() = 0; //��������
	virtual void speak() = 0;
};
Animal::~Animal()  //��������
{
	cout << "Animal�Ĵ���������������" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_name <<" Сè��˵�� " << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat��������������" << endl;
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