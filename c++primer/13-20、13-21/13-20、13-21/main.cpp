#include <iostream>

using namespace std;

class HasPtr{
public:
	HasPtr(int *p, int i): ptr(p), val(i){}
	~HasPtr(){ delete ptr; }
	int *get_ptr() const { return ptr; }
	int get_int() const { return val; }
	void set_ptr(int *p) { ptr = p; }
	void set_int(int i) { val = i; }
	int get_ptr_val() const { return *ptr; }
	void set_ptr_val(int val) { *ptr = val; }
private:
	int val;
	int *ptr;
};

int main()
{
	int i = 42;
	HasPtr p1(&i, 42);
	HasPtr p2 = p1;
	cout << p2.get_ptr_val() << endl;
	p1.set_ptr_val(0);
	cout << p2.get_ptr_val() << endl;
	return 0;
}
