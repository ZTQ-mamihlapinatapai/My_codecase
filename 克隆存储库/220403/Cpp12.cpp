//实验二1.（2）张天祺2021203492
#include <iostream>
using namespace std;
class A
{public:
        A(int i=0){m=i;}
		void change(int j){m+=j;}
        void show(){cout<<m<<endl;}
        ~A(){}
private:
        int m;
};
int main()
{   A a(5);
    a.change(10);
	a.show();
	return 0;
}