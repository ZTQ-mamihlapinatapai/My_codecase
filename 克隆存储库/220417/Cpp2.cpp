#include <iostream>
using namespace std;
int main()
{

	system("pause");
	return 0;
}



/*
#include <iostream>
using namespace std;
int add(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
}
int main()
{
	int a=987,b=345;
	int c=add(a,b);
	cout<<"c="<<c<<endl;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int scores[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string names[3]={"张三","李四","王五"};
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			sum+=scores[i][j];
		}
		cout<<names[i]<<"同学总成绩为："<<sum<<endl;
	}
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
	//冒泡法实现升序序列
	int arr[9]={4,2,8,0,5,7,1,3,9};
	cout<<"排序前为：";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//开始冒泡
	for(i=0;i<9-1;i++) //总共排序轮数为：元素个数-1=8次
	{
		for(int j=0;j<9-i-1;j++) //每轮内部对比次数为：元素个数-当前轮数-1
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"排序后为：";
	for(i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
*/