#include<iostream>
using namespace std;
#include<string>

struct Student //自定义数据类型(一些类型的集合)
{
	string name;
	int age;
	int score;
};

int main()
{
	struct Student s1; //创建结构体变量
	s1.name = "张三"; //通过一个点儿来访问结构体变量的属性
	s1.age = 18;
	s1.score = 100;
	cout << " 姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

	struct Student s2 = {"李四",19,99};
	cout << " 姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;


	//struct Student s2={"李四",19,99};
	//cout<<" 姓名："<<s2.name<<" 年龄："<<s2.age<<" 分数："<<s2.score<<endl;

	system("pause");
	return 0;
}