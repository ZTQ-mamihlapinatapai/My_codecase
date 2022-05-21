//实验二3.张天祺2021203492
//某单位的职工工资包括基本工资Wage，岗位津贴Subsidy，房租Rent，水费WaterFee，电费ElecFee。
//设计实现工资管理的类Salary，该类的形式如下：
#include <iostream>
using namespace std;
class Salary
{
public:
	Salary(){Wage=0;Subsidy=0;Rent=0;WaterFee=0;ElecFee=0;}//初始化工资数据的各分项数据为0}
    
    void setWage(double f){  Wage=f;  }
    double getWage(){ return Wage;  }
    void setSubsidy(double f){  Subsidy=f;  }
    double getSubsidy(){ return Subsidy;  }
    void setRent(double f){  Rent=f;  }
    double getRent(){ return Rent;  }
	void setWaterFee(double f){  WaterFee=f;  }
    double getWaterFee(){ return WaterFee;  }
	void setElecFee(double f){ ElecFee=f;  }
    double getElecFee(){ return ElecFee;  }
	double RealSalary(){return Wage+Subsidy-Rent-WaterFee-ElecFee ;}//计算实发工资
private:
    double Wage, Subsidy, Rent, WaterFee, ElecFee;
}Name;
int main(){
	Name.setWage(5000);Name.setSubsidy(2000);Name.setRent(1000);Name.setWaterFee(100);Name.setElecFee(100);
	cout<<"该职工的实际工资是"<<Name.RealSalary()<<endl;
	return 0;
}


/*其中，成员函数setXX()用于设置工资的各分项数据，成员函数getXX()用于获取工资的各分项数据，XX代表Wage、Subsidy等数据成员，
如Wage对应的成员函数则为setWage()和
getWage()。
      实发工资=Wage+Subsidy-Rent-WaterFee-ElecFee
编程完善该类的设计，并在主函数中测试该类的各成员函数。*/