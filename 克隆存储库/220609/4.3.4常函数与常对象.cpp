#include <iostream>
using namespace std;
class Person 
{public:
	void showPerson() const
	{
		m_A = 100;
		m_B = 100;
	}
	void func()
	{

	}
	int m_A;
	mutable int m_B;
};
void test02()
{
	const Person p;
	p.m_A = 200;
	p.m_B = 200;
	p.showPerson();
	p.func();

}
int main()
{
	system("pause");
	return 0;
}
	
