#include<iostream>
using namespace std;
#include<string>
struct Student
{
	string name;
	int age;
	int score;
};
//ֵ����
void print_student_1(struct Student s)
{
	cout << " �Ӻ���1�е�������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}
//��ַ����
void print_student_2(struct Student* p)
{
	cout << " �Ӻ���2�е�������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}
int main()
{
	struct Student s;
	s.name = "����";
	s.age = 18;
	s.score = 100;

	print_student_1(s);
	print_student_2(&s);
	cout << " main�����е�������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
	system("pause");
	return 0;
}