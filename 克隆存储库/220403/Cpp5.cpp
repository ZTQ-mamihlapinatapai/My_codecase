//ʵ��һ4.��1��������2021203492
#include <iostream>	
using namespace std;	
int main()
{
	int Max(int,int);
int mmax(int ,int ,int);
	int a,b,c;
	cout<<"������2��3��������"<<endl;
cout<<"���ֻ����2������������3��������0"<<endl;
    cin>>a>>b>>c;
cout<<"Max of a and b is:"<<Max(a,b)<<endl;
cout<<"Max of a, b and c is:"<<mmax(a,b,c)<<endl;
return 0;
}
int Max(int a,int b)
{
if(a<b) return b;
}
int mmax(int a,int b,int c)
{
if(Max(a,b)<c) return c;
}