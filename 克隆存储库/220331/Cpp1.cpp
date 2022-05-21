#include<iostream>
using namespace std;
int main()
{
	for (int i=1;i<=100;i++)
	{
		if(i%7==0||i%10==7||i/10==7)
		{
			cout<<"敲桌子"<<endl;
		}
		else
		{
			cout<<i<<endl;
		}
	}
	return 0;
}

/*eg3.
#include <iostream>
using namespace std;
int main()
{
	int num=100;
	do
	{
		int a,b,c;
		a=num%10;//获取数字的个位
		b=num/10%10;//获取数字的十位
    	c=num/100;//获取数字的百位
		if(a*a*a+b*b*b+c*c*c==num)
		cout<<num<<endl;
		num++;
	}while(num<1000);

	return 0;
}
*/

/*eg2.
#include <iostream>
#include <ctime>//time时间系统头文件
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));//添加随机数种子：利用当前时间生成随机数，防止每次随机数都一样
	int num1=rand()%100+1;// rand()%100 -->随机生成1~99的随机数，再+1就是1~100的随机数
	int num2;
	cout<<"输入你猜测的数值："<<endl;
	while(1)
	{
	  cin>>num2;
	  if(num1<num2)
	  {
		  cout<<"没这么大吧"<<endl;
	  }
	  else if(num1>num2)
	  {
		  cout<<"倒也不必这么小哈"<<endl;
	  }
	  else
	  {
		  cout<<"恭喜您猜对了"<<endl;
	      break;
	  }
	}
	return 0;
}
*/

/*eg1.
#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"请输入小猪A的体重："<<endl;
	cin>>num1;
	cout<<"请输入小猪B的体重："<<endl;
	cin>>num2;
	cout<<"请输入小猪C的体重："<<endl;
	cin>>num3;
	if(num1>num2)
	{
		if(num1>num3)
		{cout<<"小猪A最重"<<endl;}
		else
		{cout<<"小猪C最重"<<endl;}
	}
	else
	{
		if(num2>num3)
		{cout<<"小猪B最重"<<endl;}
		else
		{cout<<"小猪C最重"<<endl;}
	}
    return 0;
}
*/