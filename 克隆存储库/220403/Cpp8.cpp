//ʵ��һ5.��2��������2021203492
#include <iostream>
using namespace std;
void exchange(int&, int&, int&);
int main()
{
    int a, b, c;
    cout<< "��������������" << endl;
    cin>>a>>b>>c;
    exchange(a,b,c);
    cout << "��С��������Ϊ"<<a<<" "<<b<<" "<<c<<" "<<endl;
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