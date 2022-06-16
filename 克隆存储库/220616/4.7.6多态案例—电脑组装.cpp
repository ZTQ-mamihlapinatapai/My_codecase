#include <iostream>
using namespace std;
class CPU
{public:
	virtual void calculate() = 0;
};
class VideoCard
{public:
	virtual void display() = 0;
};
class Memory
{public:
	virtual void storage() = 0;
};
class Computer
{
public:
	Computer(CPU* cp, VideoCard* vi, Memory* me)
	{
		m_cp = cp;
		m_vi = vi;
		m_me = me;
	}
	void Work()
	{
		m_cp->calculate();
		m_vi->display();
		m_me->storage();
	}
	~Computer()
	{
		if (m_cp != NULL)
		{
			delete m_cp;
			m_cp = NULL;
		}
		if (m_vi != NULL)
		{
			delete m_cp;
			m_vi = NULL;
		}
		if (m_me != NULL)
		{
			delete m_cp;
			m_me = NULL;
		}

	}
private:
	CPU* m_cp;
	VideoCard* m_vi;
	Memory* m_me;
};
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << " Intel的CPU正在工作中..." << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << " Intel的显卡正在显示中..." << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << " Intel的内存条正在存储中..." << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << " Lenovo的CPU正在工作中..." << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << " Lenovo的显卡正在显示中..." << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << " Lenovo的内存条正在存储中..." << endl;
	}
};

void test01() 
{
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelvideocard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	cout << " 第一台电脑开始工作 " << endl;
	Computer* computer1 = new Computer(intelcpu, intelvideocard, intelmemory);
	computer1->Work();
	delete computer1;

	cout << "---------------------------------" << endl;
	cout << " 第二台电脑开始工作 " << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new  LenovoMemory);
	computer2->Work();
	delete computer2;

}
int main()
{
	test01();
	system("pause");
	return 0;
}