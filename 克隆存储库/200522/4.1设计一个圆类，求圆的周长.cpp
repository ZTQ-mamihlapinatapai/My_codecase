#include<iostream>
using namespace std;
double PI = 3.14;
class Circle //���һ��Բ��
{
public: //����Ȩ�ޣ������ǹ���Ȩ�ޣ�
	int r; //���ԣ�Բ�İ뾶��
	double S() //��Ϊ����ȡԲ���ܳ���
	{
		return 2 * PI * r;
	}
};
int main()
{
	Circle c1; //ͨ��Բ�ഴ��һ��Բ����
	c1.r = 10; //�����Ը�ֵ
	cout << "Բ�ܳ�Ϊ��" << c1.S() << endl;

	system("pause");
	return 0;
}