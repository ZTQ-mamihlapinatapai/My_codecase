//实验一2.张天祺2021203492
#include<iostream>
using namespace std;
int main()
{  int a=10,b=20 ;
const int c=105 ;
int const *p1=&c ;
int * const p2=&b ;
const int *const p3=&c ;
   cout<<"*p1="<<*p1<<endl;
   cout<<"*p2="<<*p2<<endl;
   cout<<"*p3="<<*p3<<endl;
   cout<<endl;
   p1=&b;
   b=100;
   cout<<"*p1="<<*p1<<endl;
   *p2=10;
   cout<<"*p2="<<*p2<<endl;
   cout<<"*p3="<<*p3<<endl;
   return 0;
}