#include<iostream>
using namespace std;
#include<string>
struct Student
{
	string name;
	int age;
	int score;
};
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student s1;
};
int main()
{
	Teacher t1;
	
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 50;
	t1.s1.name = "小王";
	t1.s1.age = 18;
	t1.s1.score = 66;

	cout << " 老师姓名：" << t1.name << " 老师ID：" << t1.id << " 老师年龄：" << t1.age << endl;
	cout << " 学生姓名：" << t1.s1.name << " 学生年龄：" << t1.s1.age << " 学生分数：" << t1.s1.score << endl;

	system("pause");
	return 0;
}