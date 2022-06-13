#include <iostream>
using namespace std;
#include <string>
class Building;
class Goodgay
{
public:
	Goodgay();
	void visit01();//visit01可以访问Building中的私有成员
	void visit02();//visit02不可以访问Building中的私有成员
private:
	Building* building;
};
class Building
{
	friend void Goodgay::visit01();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit01()
{
	cout << "visit01正在访问：" << building->m_SittingRoom << endl;
	cout << "visit01正在访问：" << building->m_BedRoom << endl;
}
void Goodgay::visit02()
{
	cout << "visit02正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit02正在访问：" << building->m_BedRoom << endl;
}
void test01()
{
	Goodgay g;
	g.visit01();
	g.visit02();
}

int main()
{
	test01();
	system("pause");
	return 0;
}