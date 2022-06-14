#include <iostream>
using namespace std;
#include<string>
class MyPrint
{
public:
	void operator()(string text1)
	{
		cout << text1 << endl;
	}
};
void myprint02(string text2)
{
	cout << text2 << endl;
}
void test01()
{
	MyPrint myprint01;
	myprint01(" hello world ");
	myprint02(" hello world ");

}
int main()
{
	test01();
	system("pause");
	return 0;
}