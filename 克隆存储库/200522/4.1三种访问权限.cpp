#include <iostream>
using namespace std;
#include<string>
class Person
{
public:
	string name;
protected:
	string car;
private:
	int key;

public:
	void func()
	{
		name = "����";
		car = "����";
		key = 000000;
	}
};
int main()
{
	Person p1;
	p1.name = "����";
	//p1.car = "��������";
	//p1.key = 000001;
	system("pause");
	return 0;
}