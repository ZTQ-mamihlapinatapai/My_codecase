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
	struct Student stu_array[3] =
	{
		{"张三",18,100},
		{"李四",19,99},
		{"王五",18,98}
	};
	for (int i = 0; i<3; i++)
	{
		cout <<" 姓名：" << stu_array[i].name
			<< " 年龄：" << stu_array[i].age
			<< " 分数：" << stu_array[i].score << endl;
	}
	system("pause");
	return 0;
}