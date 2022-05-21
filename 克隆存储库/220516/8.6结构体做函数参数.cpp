#include<iostream>
using namespace std;
#include<string>
struct Student
{
	string name;
	int age;
	int score;
};
//值传递
void print_student_1(struct Student s)
{
	cout << " 子函数1中的姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}
//地址传递
void print_student_2(struct Student* p)
{
	cout << " 子函数2中的姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main()
{
	struct Student s;
	s.name = "张三";
	s.age = 18;
	s.score = 100;

	print_student_1(s);
	print_student_2(&s);
	cout << " main函数中的姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
	system("pause");
	return 0;
}