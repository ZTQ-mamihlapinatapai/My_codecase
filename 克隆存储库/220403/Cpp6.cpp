//ʵ��һ4.��2��������2021203492
#include <iostream>	
using namespace std;	
int main()
{
	int Max(int,int,int=0);
	int a,b,c;
	cout<<"������2��3��������"<<endl;
cout<<"���ֻ����2������������3��������0"<<endl;
    cin>>a>>b>>c;
cout<<"Max of a and b is:"<<Max(a,b)<<endl;
cout<<"Max of a, b and c is:"<<Max(a,b,c)<<endl;
return 0;
}
int Max(int a,int b,int c)
{
if(a<b) a=b;
if(a<c) a=c;
return a;
}