#include<iostream>
using namespace std;
double PI = 3.14;
class Circle //设计一个圆类
{
public: //访问权限（这里是公共权限）
	int r; //属性（圆的半径）
	double S() //行为（获取圆的周长）
	{
		return 2 * PI * r;
	}
};
int main()
{
	Circle c1; //通过圆类创建一个圆对象
	c1.r = 10; //给属性赋值
	cout << "圆周长为：" << c1.S() << endl;

	system("pause");
	return 0;
}