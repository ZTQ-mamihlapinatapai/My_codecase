//P54第二大题6. 张天祺2021203492
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void sta(string);
int main(){

	string str1;
	cout<<"输入一个字符串:"<<endl;
	cin>>str1;
	sta(str1);
	return 0;
}
void sta(string a ){
	int letter,number,el,i;
	letter=number=el=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=122)
			letter+=1;
		else if(a[i]>=65&&a[i]<=90)
			letter+=1;
		else
			if(a[i]>=48&&a[i]<=57)
			number+=1;
		else
			el+=1;
	}
	cout<<"字母的个数为:"<<letter<<endl;
	cout<<"数字的个数为:"<<number<<endl;
	cout<<"其他符号的个数为:"<<el<<endl;
}
