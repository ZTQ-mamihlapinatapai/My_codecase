#include<iostream>
using namespace std;
#include<string>
struct Student
{
	string name;
	int age;
	int score;
};
int main()
{
	struct Student s1 = {"张三",18,100}; //这里的struct可以省略
	struct Student* p = &s1; //这里的struct也可以省略
	cout << " 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	system("pause");
	return 0;
}