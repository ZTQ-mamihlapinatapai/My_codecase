#include <iostream>
using namespace std;
#include <string>
class Building;
class Goodgay
{
public:
	Goodgay();
	void visit01();//visit01���Է���Building�е�˽�г�Ա
	void visit02();//visit02�����Է���Building�е�˽�г�Ա
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit01()
{
	cout << "visit01���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit01���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void Goodgay::visit02()
{
	cout << "visit02���ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit02���ڷ��ʣ�" << building->m_BedRoom << endl;
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