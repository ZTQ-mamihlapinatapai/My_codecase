//实验二1.（3）张天祺20212034925
#include <iostream>
using namespace std;
class X
{ private:
    int a;   //int a=0; 不能在类内对数据成员进行初始化
    int b;  //声明引用必须对其进行初始化
    int c;//定义常变量必须对其初始化
public:
    void setA(int i){a=i;} // 为公用
    X(int i){ a=i;}   //为公用
    X(){ a=b=0;}  //int X(){ a=b=0;} 析构函数
    X(int i, int j, int k){ a=i; b=j; c=k; }
    void setC(int k)  { c=c+k;}//成员函数 const在函数中间表明不允许改变变量的值
	
};
int main()
{
    X x1;
	
    X x2(2);
	
    X x3(1,2,3);
	
    x1.setA(3);
	
    return 0;}
