#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void Speak()//虚函数
	{
		cout << " 动物在说话" << endl;
	}
};
class Cat :public Animal
{
public:
	void Speak()
	{
		cout << " 猫在叫" << endl;
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