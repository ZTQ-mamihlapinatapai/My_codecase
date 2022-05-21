#include<iostream>
using namespace std;
#include<string>
//英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};
//冒泡函数
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
//打印函数
void print(struct hero array[], int len)
{
	for(int i=0;i<len;i++)
	cout << "姓名：" << array[i].name  << " 年龄：" << array[i].age << " 性别：" << array[i].sex << endl;

}
int main()
{
	struct hero array[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(array) / sizeof(array[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << "姓名：" << array[i].name  << " 年龄：" << array[i].age << " 性别：" << array[i].sex << endl;

	//}
	bubbleSort(array,len);
	print(array,len);
	system("pause");
	return 0;
}