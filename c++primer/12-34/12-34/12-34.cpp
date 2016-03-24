#include <iostream>
#include <string>

using namespace std;

class Sales_item{
public:
	friend Sales_item add(Sales_item a1, Sales_item a2);
	Sales_item(){}
	Sales_item(istream& in)
	{
		in >> isbn >> units_sold >> revenue ;
	}
private:
	string isbn;
	int units_sold;
	double revenue;
};

Sales_item add(Sales_item a1, Sales_item a2)
{
	if (a1.isbn != a2.isbn)
		return a1;
	Sales_item a3;
	a3.revenue = a1.revenue + a2.revenue;
	a3.isbn = a1.isbn;
	a3.units_sold = a1.units_sold + a2.units_sold;
	return a3;
}

int main()
{
	Sales_item a(cin), b(cin), c;
	c = add(a, b);
	return 0;
}