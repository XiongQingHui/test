//#include <string>
#include <iostream>

using namespace std;

class x{
public:
	void a(istream& is);
};
void x::a(istream &is)
{
	int num;
	is >> num;
	for(int i = 0; i <num; ++i)
		cout << "*" ;
}

int main()
{
	x a1;
	a1.a(cin);
	return 0;
}
