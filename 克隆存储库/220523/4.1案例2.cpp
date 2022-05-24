#include<iostream>
using namespace std;
class Point
{
public:
	void set_x(float x)
	{
		X = x;
	}
	float get_x()
	{
		return X;
	}
	void set_y(float y)
	{
		Y = y;
	}
	float get_y()
	{
		return Y;
	}
private:
	float X;
	float Y;
};
class Circle
{
public:
	void set_r(float r)
	{
		R = r;
	}
	float get_r()
	{
		return R;
	}
	void set_center(Point center)
	{
		Center = center;
	}
	Point get_center()
	{
		return Center;
	}

private :
	float R;
	Point Center;
};
void f(Circle& c, Point& p)
{
	float dfang=
	(c.get_center().get_x() - p.get_x())* (c.get_center().get_x() - p.get_x()) +
	(c.get_center().get_y() - p.get_y()) * (c.get_center().get_y() - p.get_y());
	float rfang = c.get_r() * c.get_r();
	if (dfang == rfang)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		if (dfang < rfang)
		{
			cout << "点在圆内" << endl;
		}
		else cout << "点在圆外" << endl;
	}
}
int main()
{
	Circle c;
	c.set_r(10);
	Point center;
	center.set_x(10);
	center.set_y(0);
	c.set_center(center);

	Point p;
	p.set_x(10);
	p.set_y(11);

	f(c,p);

	system("pause");
	return 0;
}