//实验一6.张天祺2021203492
#include<iostream>
#include<string>
using namespace std;
int fun(int *a,int n);
float fun(float *a,int n);
char fun(char *a,int n);
string fun(string *a,int n);
int main()
{
    int m,n,i;
	cout<<"输入数据类型，整数型为1，浮点型为2，字符型为3，字符串型为4："<<endl;
	cin>>m;
	cout<<"输入数据的个数："<<endl;
    cin >> n;
    int*a=new int[n]; 
    float* b=new float[n];
	char *c=new char[n];
    string * d=new string[n];
	if(m==1)
    {for(i=0; i<n; i++)
	cin >> a[i];
    fun(a,n);	}
	if(m==2)
	{
    for(i=0; i<n; i++)
        cin >> b[i];
	fun(b,n);}
	if(m==3)
	{
    for(i=0; i<n; i++)
        cin >> c[i];
	fun(c,n);	}
   if(m==4)
	{
    for(i=0; i<n; i++)
        cin >> d[i];
	fun(d,n);	}
   
    return 0;
}
int fun(int *a,int n)
{
    int t;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
	cout<<n<<"个数据的升序排列是:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
float fun(float *a,int n)
{
    float temp;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<n<<"个数据的升序排列是:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
char fun(char *a,int n)
{
    char temp;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
	cout<<n<<"个数据的升序排列是:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
string fun(string *a,int n)
{
    string temp;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
	cout<<n<<"个数据的升序排列是:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}