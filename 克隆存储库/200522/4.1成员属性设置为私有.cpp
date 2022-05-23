#include <iostream>
using namespace std;
#include<string>

class Person
{
public:
	
	void set_name(string name)//姓名可写
	{
		p_name = name;
	}
	string get_name()//姓名可读
	{
		return p_name;
	}
	int get_age()//年龄可读
	{
		p_age = 18;//初始化为18岁
		return p_age;
	}
	void set_lover(string lover)//情人可写
	{
		p_lover = lover;
	}
private:
	string p_name;
	int p_age;
	string p_lover;
};
int main()
{
	Person p1;
	p1.set_name("张三");
	cout << "姓名为：" << p1.get_name() << endl;
	cout << "年龄为：" << p1.get_age() << endl;
	p1.set_lover("李四");
	system("pause");
	return 0;
}