#include<iostream>
using namespace std;
int main()
{
	for (int i=1;i<=100;i++)
	{
		if(i%7==0||i%10==7||i/10==7)
		{
			cout<<"������"<<endl;
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
		a=num%10;//��ȡ���ֵĸ�λ
		b=num/10%10;//��ȡ���ֵ�ʮλ
    	c=num/100;//��ȡ���ֵİ�λ
		if(a*a*a+b*b*b+c*c*c==num)
		cout<<num<<endl;
		num++;
	}while(num<1000);

	return 0;
}
*/

/*eg2.
#include <iostream>
#include <ctime>//timeʱ��ϵͳͷ�ļ�
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));//�����������ӣ����õ�ǰʱ���������������ֹÿ���������һ��
	int num1=rand()%100+1;// rand()%100 -->�������1~99�����������+1����1~100�������
	int num2;
	cout<<"������²����ֵ��"<<endl;
	while(1)
	{
	  cin>>num2;
	  if(num1<num2)
	  {
		  cout<<"û��ô���"<<endl;
	  }
	  else if(num1>num2)
	  {
		  cout<<"��Ҳ������ôС��"<<endl;
	  }
	  else
	  {
		  cout<<"��ϲ���¶���"<<endl;
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
	cout<<"������С��A�����أ�"<<endl;
	cin>>num1;
	cout<<"������С��B�����أ�"<<endl;
	cin>>num2;
	cout<<"������С��C�����أ�"<<endl;
	cin>>num3;
	if(num1>num2)
	{
		if(num1>num3)
		{cout<<"С��A����"<<endl;}
		else
		{cout<<"С��C����"<<endl;}
	}
	else
	{
		if(num2>num3)
		{cout<<"С��B����"<<endl;}
		else
		{cout<<"С��C����"<<endl;}
	}
    return 0;
}
*/