#include <iostream>
using namespace std;
int main()
{
	int arr[5]={1,3,2,5,4};
	int start=0;
	int end=sizeof(arr)/sizeof(arr[0])-1;
	int temp; //��ʱ
	int num;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	cout<<"���ú�Ϊ��"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	system("pause");
	return 0;
}


/* 1.
#include <iostream>
using namespace std;
int main()
{
	int arr[5]={300,350,200,400,250};
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		else continue;
	};
	cout<<"���ص�С������Ϊ��"<<max<<endl;
	system("pause");
	return 0;
}
*/
