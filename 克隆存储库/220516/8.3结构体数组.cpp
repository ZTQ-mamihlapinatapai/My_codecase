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
		{"����",18,100},
		{"����",19,99},
		{"����",18,98}
	};
	for (int i = 0; i<3; i++)
	{
		cout <<" ������" << stu_array[i].name
			<< " ���䣺" << stu_array[i].age
			<< " ������" << stu_array[i].score << endl;
	}
	system("pause");
	return 0;
}