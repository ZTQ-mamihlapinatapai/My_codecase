#include<iostream>
using namespace std;

typedef struct 
{
	float realpart;
	float imagpart;
}Complex;

void assign(Complex* A, float real, float imag);//��ֵ
void add(Complex* B, float real, float imag);//��+
//void minus(Complex* A, float real, float imag);//��-
//void multiply(Complex* A, float real, float imag);//��*
//void divide(Complex* A, float real, float imag);//��/

void assign(Complex &A, float real, float imag)
{
	A.realpart = real;//ʵ����ֵ
	A.imagpart = imag;//�鲿��ֵ
}
void add(Complex &B, Complex c, Complex d)
{
	B.realpart = c.realpart + d.realpart;
	B.imagpart = c.imagpart + d.imagpart;
	cout << B.realpart << "+" << B.imagpart << "i" << endl;
}

int main()
{
	Complex z1, z2, z3;
	assign(z1, 2.2, 3.3);
	assign(z2, 4.4, 5.5);
	add(z3, z1, z2);
	return 0;
}