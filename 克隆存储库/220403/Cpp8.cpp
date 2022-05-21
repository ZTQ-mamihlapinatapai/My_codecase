//实验一5.（2）张天祺2021203492
#include <iostream>
using namespace std;
void exchange(int&, int&, int&);
int main()
{
    int a, b, c;
    cout<< "请输入三个整数" << endl;
    cin>>a>>b>>c;
    exchange(a,b,c);
    cout << "从小到大排序为"<<a<<" "<<b<<" "<<c<<" "<<endl;
    return 0;
}
void exchange(int&a, int&b, int&c)
{
    int tmp;
    if(a > b)
    {
        tmp = a;
        a= b;
        b = tmp;
    }
    if(a> c)
    {
        tmp = a;
        a= c;
        c = tmp;
    }
    if(b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
}