//P54�ڶ�����3.��2��������2021203492
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int t;
	if(a>b){t=a;
	a=b;
	b=t;
	}
}
int main(){
	int a[50],i,j,n;
	cout<<"���ݸ���n��";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<(n-1);j++){
			swap(a[j],a[j+1]);
		}	
	}
	cout<<"��СΪ"<<a[0]<<" "<<"���Ϊ"<<a[n-1]<<endl;
} 