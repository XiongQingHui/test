#include <iostream>
#include <string>

using namespace std;

class Sales_item{
public:
	/*Sales_item(const string &book):
	  isbn(book), units_sold(0), revenue(0.0){}
	Sales_item():units_sold(0), revenue(0.0){}
	Sales_item(istream &is){
		string s;
		is >> s;
		isbn = s;
		units_sold = 0;
		revenue = 0;
	}*/
private:
	string isbn;
	int units_sold;
	double revenue;
};

int main()
{
	//Sales_item X("0-201-82470-1");
	Sales_item Y;
	//Sales_item Z(cin);
	return 0;
}

