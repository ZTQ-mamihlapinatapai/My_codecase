//ʵ���4.������2021203492
#include <iostream>
using namespace std;
class Clock
{
public:
	Clock(){hour=0;minute=0;second=0;}
	
	void selfset(){
		cout<<"����ʱ���֣���"<<endl;
		cin>>hour>>minute>>second;
	}
	void show()
	{
		cout<<"ʱ"<<":"<<"��"<<":"<<"��"<<endl;
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
private:
	int hour;
	int minute;
	int second;
};
int main()
{
	Clock al;
	
	al.selfset();
	al.show();
	return 0;
}