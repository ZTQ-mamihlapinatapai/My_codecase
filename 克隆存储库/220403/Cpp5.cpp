//实验一4.（1）张天祺2021203492
#include <iostream>	
using namespace std;	
int main()
{
	int Max(int,int);
int mmax(int ,int ,int);
	int a,b,c;
	cout<<"请输入2或3个正整数"<<endl;
cout<<"如果只输入2个正整数，第3个请输入0"<<endl;
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