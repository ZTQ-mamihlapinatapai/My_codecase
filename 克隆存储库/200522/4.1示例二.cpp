#include<iostream>
using namespace std;
#include<string>

class Student
{
public:
	string name;
	int id;
	void show()
	{
		cout << "������" << name << " ѧ�ţ�" << id << endl;

	}
};
int main()
{
	Student s1; //ʵ����
	s1.name = "����";
	s1.id = 2021203492;
	s1.show();

	system("pause");
	return 0;
}