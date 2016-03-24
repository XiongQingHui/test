#include <iostream>

using namespace std;

class U_Ptr{
	friend class HasPtr;
	int *ip;
	size_t use;
	U_Ptr(int *p):ip(p), use(1){}
	//~U_Ptr() { delete ip; }
};

class HasPtr{
private:
	U_Ptr *ptr;
	int val;
public:
	HasPtr(int *p, int i):ptr(new U_Ptr(p)), val(i){}
	HasPtr(const HasPtr& other):ptr(other.ptr), val(other.val){ ++ptr->use; }
	HasPtr& operator=(const HasPtr &rhs)
	{
		++rhs.ptr->use;
		if (--ptr->use == 0)
			delete ptr;
		ptr = rhs.ptr;
		val = rhs.val;
		return *this;
	}
	/*~HasPtr()
	{
		if (--ptr->use == 0)
			delete ptr;
	}*/
	int *get_ptr() const { return ptr->ip; }
	int get_int() const { return val; }
	void set_ptr(int *p) { ptr->ip = p; }
	void set_int(int i) { val = i; }
	int get_ptr_val() const { return *ptr->ip; }
	void set_ptr_val(int i) { *ptr->ip = i; }
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
