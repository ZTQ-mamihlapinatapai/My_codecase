//实验二1.（1）张天祺2021203492
#include <iostream>
using namespace std;
class Date
{public:
	void set_date(void);
    void show_date(void); 
private:
    int year;
    int month;
    int day;
};
Date d;
int main()
{
	d.set_date();
    d.show_date ();
    return 0;
}
void Date:: set_date(void)
{
    cin>>year;
    cin>>month;
    cin>>day;
}
void Date:: show_date(void)
{  
	cout<<year<<"/"<<month<<"/"<<day<<endl;
}