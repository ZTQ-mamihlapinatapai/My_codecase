#include<iostream>
using namespace std;
#include<string>
#include<ctime>
struct Student
{
	string s_name;
	int score;
};
struct Teacher
{
	string t_name;
	struct Student s_array[5];
};
void allocateSpace(struct Teacher t_array[],int len) //allocateSpace ���ٿռ�
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		t_array[i].t_name = "Teacher_";
		t_array[i].t_name += nameSeed[i]; //i=0ʱ����Teacher_���»��ߺ���׷��һ����nameSeed[0]������׷��һ����A��
		for (int j = 0; j < 5; j++)
		{
			t_array[i].s_array[j].s_name = "Student_";
			t_array[i].s_array[j].s_name += nameSeed[j];
			int random = rand() % 61 + 40; //ran() % 61��ʾ0��60֮������������40���ʾ40��100֮��������
			t_array[i].s_array[j].score = random;

		}
	}
}
void print(struct Teacher t_array[], int len)
{
	for (int i = 0; i< len; i++)
	{
		cout << "��ʦ������" << t_array[i].t_name << endl;
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << t_array[i].s_array[j].s_name<< " ���Ե÷֣�" << t_array[i].s_array[j].score << endl;

		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	struct Teacher t_array[3];
	int len = sizeof(t_array) / sizeof(t_array[0]);
	allocateSpace(t_array,len);
	print(t_array,len);
	system("pause");
	return 0;
}