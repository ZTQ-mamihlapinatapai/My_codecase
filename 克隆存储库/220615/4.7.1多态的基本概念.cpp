#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void Speak()//�麯��
	{
		cout << " ������˵��" << endl;
	}
};
class Cat :public Animal
{
public:
	void Speak()
	{
		cout << " è�ڽ�" << endl;
	}
};
void DoSpeak(Animal &animal)
{
	animal.Speak();
}
void test01()
{
	Cat cat;
	DoSpeak(cat);
}
int main()
{
	test01();
	system("pause");
	return 0;
} 