//ʵ��һ 3.������2021203492 
#include <iostream>	//����ͷ�ļ�����
using namespace std;	//ʹ�����ֿռ�std
int max(int x, int y) {   return (x> y) ?x:y;  }    //���������еĴ��ߵĺ���
int main()
{	int a,b;                               //������������a��b 
	cout<<"Please input to a and b: "<<endl;	//�����ʾ��Ϣ����Ļ
	cin>>a>>b;	//�ȴ��û��Ӽ�����������
	cout<< "Max="<< max(a,b)<<endl;	//��������Ϣ����Ļ
	return 0;	//����������0������ϵͳ
}
