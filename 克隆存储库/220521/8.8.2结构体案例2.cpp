#include<iostream>
using namespace std;
#include<string>
//Ӣ�۽ṹ��
struct hero
{
	string name;
	int age;
	string sex;
};
//ð�ݺ���
void bubbleSort(struct hero array[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j+1].age<array[j].age)
			{
				struct hero temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
//��ӡ����
void print(struct hero array[], int len)
{
	for(int i=0;i<len;i++)
	cout << "������" << array[i].name  << " ���䣺" << array[i].age << " �Ա�" << array[i].sex << endl;

}
int main()
{
	struct hero array[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(array) / sizeof(array[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << "������" << array[i].name  << " ���䣺" << array[i].age << " �Ա�" << array[i].sex << endl;

	//}
	bubbleSort(array,len);
	print(array,len);
	system("pause");
	return 0;
}