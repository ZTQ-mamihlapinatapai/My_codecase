#include<iostream>
using namespace std;
#include<string>
class Building;
class Good
{
public:
	void visit();//参观函数访问Building的属性
	Good();
private:
	Building* p;
};
class Building
{
	friend class Good;
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
Good::Good()
{
	p = new Building;
}
void Good::visit()
{
	cout << "Good正在访问：" << p->m_SittingRoom << endl;
	cout << "Good正在访问：" << p->m_BedRoom << endl;
}
void test01()
{
	Good g;
	g.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}