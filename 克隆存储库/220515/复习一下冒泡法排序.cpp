//��ϰһ��ð�ݷ�����
#include <iostream>
using namespace std;
int main()
{
	int arr[9]={6,1,2,7,0,9,4,5,3};
	cout<<"����ǰ��";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<9-1;i++)
	{
		for(int j=0;j<9-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"�����";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}