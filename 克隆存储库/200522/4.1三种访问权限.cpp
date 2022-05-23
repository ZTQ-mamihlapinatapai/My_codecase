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
		name = "张三";
		car = "奔驰";
		key = 000000;
	}
};
int main()
{
	Person p1;
	p1.name = "李四";
	//p1.car = "兰博基尼";
	//p1.key = 000001;
	system("pause");
	return 0;
}