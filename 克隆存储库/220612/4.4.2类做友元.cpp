#include<iostream>
using namespace std;
#include<string>
class Building;
class Good
{
public:
	void visit();//�ιۺ�������Building������
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
Good::Good()
{
	p = new Building;
}
void Good::visit()
{
	cout << "Good���ڷ��ʣ�" << p->m_SittingRoom << endl;
	cout << "Good���ڷ��ʣ�" << p->m_BedRoom << endl;
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