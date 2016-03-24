#include <iostream>
#include <string>

using namespace std;

class Sale_item{
public:
	Sale_item():isbn(""), units_sold(0), revenue(0.0)	{	}
	Sale_item(const Sale_item &other):isbn(other.isbn), units_sold(other.units_sold), revenue(other.revenue)	{ }
	Sale_item(const string &s):isbn(s), units_sold(0), revenue(0.0)	{ }
	Sale_item& operator=(const Sale_item rhs)
	{
		isbn = rhs.isbn;
		units_sold = rhs.units_sold;
		revenue = rhs.revenue;
		return *this;
	}
	void set_units_sold(int num)
	{
		units_sold = num;
	}
	void set_revenue(double total)
	{
		revenue = total;
	}
	Sale_item& operator+=(const Sale_item& rhs)				//赋值操作符必须是类的成员
	{
		isbn = rhs.isbn;
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}
	friend ostream& operator<<(ostream &is, const Sale_item &s);
	friend istream& operator>>(istream &in, Sale_item &s);
	friend Sale_item operator+(const Sale_item& rhs, const Sale_item& lhs);
	friend bool operator==(const Sale_item& rhs, const Sale_item& lhs);
	friend bool operator!=(const Sale_item& rhs, const Sale_item& lhs);
private:
	string isbn;
	int units_sold;
	double revenue;
};

inline ostream& operator<<(ostream &is, const Sale_item &s)
{
	is << s.isbn << "\t" << s.units_sold << "\t" << s.revenue ;
	return is;
}
inline istream& operator>>(istream &in, Sale_item &s)
{
	in >> s.isbn >> s.units_sold >> s.revenue;
	if (!in)
		s = Sale_item();
	return in;
}
inline Sale_item operator+(const Sale_item& rhs, const Sale_item& lhs)
{
	Sale_item a;
	if (rhs.isbn == lhs.isbn){
		a.isbn = rhs.isbn;
		a.units_sold = rhs.units_sold + lhs.units_sold;
		a.revenue = rhs.revenue + lhs.revenue;
	}
	return a;
}
inline bool operator==(const Sale_item& rhs, const Sale_item& lhs)
{
	if (rhs.isbn == lhs.isbn)
		return true;
	return false;
}
inline bool operator!=(const Sale_item& rhs, const Sale_item& lhs)
{
	return !(rhs.isbn == lhs.isbn);
}

int main()
{
	Sale_item a, b;
	cin >> a >> b;
	cout << a << endl << b << endl;
	/*if (a != b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;*/
	a+=b;
	cout << a << endl;
	return 0;
}