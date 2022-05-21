#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//1.当数据量很大的时候，将函数中的形参改为指针可以减少内存空间，且不会复制新的副本出来
void print_student(const Student *s) //3.所以这里加上const，一旦有修改的操作会报错，以防止误操作
{
	//s->age = 180; //2.但改为指针就变成地址传递，容易使原有数据被误修改
	cout << " 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}
int main()
{
	struct Student s = {"张三"，18，100};
	print_student（&s）
	system("pause");
	return 0;
}