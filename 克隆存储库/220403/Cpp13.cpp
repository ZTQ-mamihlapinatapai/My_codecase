//ʵ���1.��3��������20212034925
#include <iostream>
using namespace std;
class X
{ private:
    int a;   //int a=0; ���������ڶ����ݳ�Ա���г�ʼ��
    int b;  //�������ñ��������г�ʼ��
    int c;//���峣������������ʼ��
public:
    void setA(int i){a=i;} // Ϊ����
    X(int i){ a=i;}   //Ϊ����
    X(){ a=b=0;}  //int X(){ a=b=0;} ��������
    X(int i, int j, int k){ a=i; b=j; c=k; }
    void setC(int k)  { c=c+k;}//��Ա���� const�ں����м����������ı������ֵ
	
};
int main()
{
    X x1;
	
    X x2(2);
	
    X x3(1,2,3);
	
    x1.setA(3);
	
    return 0;}
