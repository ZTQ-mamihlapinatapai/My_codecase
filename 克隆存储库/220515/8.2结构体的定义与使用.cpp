#include<iostream>
using namespace std;
#include<string>

struct Student //�Զ�����������(һЩ���͵ļ���)
{
	string name;
	int age;
	int score;
};

int main()
{
	struct Student s1; //�����ṹ�����
	s1.name = "����"; //ͨ��һ����������ʽṹ�����������
	s1.age = 18;
	s1.score = 100;
	cout << " ������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	struct Student s2 = {"����",19,99};
	cout << " ������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;


	//struct Student s2={"����",19,99};
	//cout<<" ������"<<s2.name<<" ���䣺"<<s2.age<<" ������"<<s2.score<<endl;

	system("pause");
	return 0;
}