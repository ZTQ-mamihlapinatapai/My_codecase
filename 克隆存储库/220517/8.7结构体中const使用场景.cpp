#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//1.���������ܴ��ʱ�򣬽������е��βθ�Ϊָ����Լ����ڴ�ռ䣬�Ҳ��Ḵ���µĸ�������
void print_student(const Student *s) //3.�����������const��һ�����޸ĵĲ����ᱨ���Է�ֹ�����
{
	//s->age = 180; //2.����Ϊָ��ͱ�ɵ�ַ���ݣ�����ʹԭ�����ݱ����޸�
	cout << " ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}
int main()
{
	struct Student s = {"����"��18��100};
	print_student��&s��
	system("pause");
	return 0;
}