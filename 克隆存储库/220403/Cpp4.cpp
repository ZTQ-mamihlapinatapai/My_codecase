//实验一 3.张天祺2021203492 
#include <iostream>	//包含头文件命令
using namespace std;	//使用名字空间std
int max(int x, int y) {   return (x> y) ?x:y;  }    //求两个数中的大者的函数
int main()
{	int a,b;                               //定义两个变量a和b 
	cout<<"Please input to a and b: "<<endl;	//输出提示信息到屏幕
	cin>>a>>b;	//等待用户从键盘输入数据
	cout<< "Max="<< max(a,b)<<endl;	//输出结果信息至屏幕
	return 0;	//主函数返回0至操作系统
}
