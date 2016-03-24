#include <iostream>
#include <string>

using namespace std;

class Sales{
public:
	Sales():units_sold(0), revenue(0.0){}
	explicit Sales(const string &book):isbn(book), units_sold(0), revenue(0.0){}  //explicit��һ���޶�ǿ��ת���ı��
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
	result = X.Same_isbn(Sales(a));			//	�ֱ�����string����a��Sales����Y���Ա�
	if (result)
		cout << "Yes!" << endl;
	else 
		cout << "NO!" << endl;
	return 0;
}


