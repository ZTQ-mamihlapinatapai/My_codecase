//ʵ���3.������2021203492
//ĳ��λ��ְ�����ʰ�����������Wage����λ����Subsidy������Rent��ˮ��WaterFee�����ElecFee��
//���ʵ�ֹ��ʹ������Salary���������ʽ���£�
#include <iostream>
using namespace std;
class Salary
{
public:
	Salary(){Wage=0;Subsidy=0;Rent=0;WaterFee=0;ElecFee=0;}//��ʼ���������ݵĸ���������Ϊ0}
    
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
	double RealSalary(){return Wage+Subsidy-Rent-WaterFee-ElecFee ;}//����ʵ������
private:
    double Wage, Subsidy, Rent, WaterFee, ElecFee;
}Name;
int main(){
	Name.setWage(5000);Name.setSubsidy(2000);Name.setRent(1000);Name.setWaterFee(100);Name.setElecFee(100);
	cout<<"��ְ����ʵ�ʹ�����"<<Name.RealSalary()<<endl;
	return 0;
}


/*���У���Ա����setXX()�������ù��ʵĸ��������ݣ���Ա����getXX()���ڻ�ȡ���ʵĸ��������ݣ�XX����Wage��Subsidy�����ݳ�Ա��
��Wage��Ӧ�ĳ�Ա������ΪsetWage()��
getWage()��
      ʵ������=Wage+Subsidy-Rent-WaterFee-ElecFee
������Ƹ������ƣ������������в��Ը���ĸ���Ա������*/