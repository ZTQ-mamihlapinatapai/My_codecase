//P53 2. ÕÅÌìì÷2021203492
#include <iostream>
using namespace std;
int main()
{
	int x=100;
	void *p=&x;
	//cout<<"*p="<<*p<<endl;
	cout<<"*p="<<*(char *)p<<endl;
	cout<<"*p="<<*(int *)p<<endl;
	cout<<"*p="<<*(float *)p<<endl;
	cout<<"*p="<<*(double *)p<<endl;
	return 0;
}