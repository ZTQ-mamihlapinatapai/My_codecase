#include<iostream>
using namespace std;
#include<string>

class Student
{
public:
	string name;
	int id;
	void show()
	{
		cout << "姓名：" << name << " 学号：" << id << endl;

	}
};
int main()
{
	Student s1; //实例化
	s1.name = "张三";
	s1.id = 2021203492;
	s1.show();

	system("pause");
	return 0;
}