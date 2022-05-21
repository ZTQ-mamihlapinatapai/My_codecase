//P54第二大题3.（1） 张天祺2021203492
#include<iostream>
using namespace std;
void abc(int *a,int n){
	int i,j,t,k;
	for(i=0;i<(n-1);i++){
		t=i;
		for(j=i+1;j<n;j++){
		if(a[t]<a[j])t=j;
		}
		k=a[t];
		a[t]=a[i];
		a[i]=k;
	}
	cout<<"最大值"<<a[0]<<" "<<"最小值"<<a[n-1];
	
	
}

int main(){
	int a[100],n,i,j;
	cout<<"n的个数"; 
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	abc(a,n);
	
} 