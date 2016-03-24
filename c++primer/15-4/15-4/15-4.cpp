#include <iostream>

using namespace std;

class A{
public:
	virtual void show()
	{
		cout << "1" << endl;
	}
};

class B:public A
{
public:
	void show()
	{
		cout << "2" << endl;
	}
};

int main()
{
	A *a = new B;
	a->show();
	A b;
	B c;
	c.A::show();
	b.show();
	return 0;
}

