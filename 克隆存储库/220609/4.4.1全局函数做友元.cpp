#include<iostream>
using namespace  std;
#include<string>
class Building
{
	//goodGay全局函数是Building的好朋友，可以访问Building中的私有成员
	friend void goodGay(Building& building);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
void goodGay(Building &building)
{
	cout << "好基友的全局函数正在访问：" << building.m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问：" << building.m_BedRoom << endl;

}
void test01()
{
	Building building;
	goodGay(building);
}
int main()
{
	test01();
	system("pause");
	return 0;
}