#include <iostream>
#include <string>

using namespace std;

class Sales{
public:
	Sales():units_sold(0), revenue(0.0){}
	explicit Sales(const string &book):isbn(book), units_sold(0), revenue(0.0){}  //explicit是一个限定强制转换的标符
	bool Same_isbn(const Sales &i)
	{
		if (isbn == i.isbn)
			return true;
		else
			return false;
	}
private:
	string isbn;
	int units_sold;
	double revenue;
};

int main()
{
	Sales X("abc"), Y;
	bool result;
	string a("abc");
	result = X.Same_isbn(Sales(a));			//	分别是用string类型a和Sales类型Y做对比
	if (result)
		cout << "Yes!" << endl;
	else 
		cout << "NO!" << endl;
	return 0;
}


