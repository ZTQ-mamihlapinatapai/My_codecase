#include <iostream>
using namespace std;
#include<string>

class Person
{
public:
	
	void set_name(string name)//������д
	{
		p_name = name;
	}
	string get_name()//�����ɶ�
	{
		return p_name;
	}
	int get_age()//����ɶ�
	{
		p_age = 18;//��ʼ��Ϊ18��
		return p_age;
	}
	void set_lover(string lover)//���˿�д
	{
		p_lover = lover;
	}
private:
	string p_name;
	int p_age;
	string p_lover;
};
int main()
{
	Person p1;
	p1.set_name("����");
	cout << "����Ϊ��" << p1.get_name() << endl;
	cout << "����Ϊ��" << p1.get_age() << endl;
	p1.set_lover("����");
	system("pause");
	return 0;
}