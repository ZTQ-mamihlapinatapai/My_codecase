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
	t1.name = "����";
	t1.age = 50;
	t1.s1.name = "С��";
	t1.s1.age = 18;
	t1.s1.score = 66;

	cout << " ��ʦ������" << t1.name << " ��ʦID��" << t1.id << " ��ʦ���䣺" << t1.age << endl;
	cout << " ѧ��������" << t1.s1.name << " ѧ�����䣺" << t1.s1.age << " ѧ��������" << t1.s1.score << endl;

	system("pause");
	return 0;
}