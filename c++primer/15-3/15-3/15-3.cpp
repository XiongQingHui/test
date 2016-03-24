#include <iostream>
#include <string>

using namespace std;

class Item_base{
public:
	friend ostream& operator<<(ostream& , const Item_base&);
	Item_base(const string &book = "", double sales_price = 0.0):isbn(book), price(sales_price)
	{	
	} 
	string book() const
	{
		return isbn;
	}
	void setisbn(const string &isbnname)
	{
		isbn = isbnname;
	}
	void setprice(const double &pricenum)
	{
		price = pricenum;
	}
private:
	string isbn;
	double price;
};

class Item_son:public Item_base
{
public:
	void show()
	{
		//cout << "isbn:" << isbn << "\t" << "price:" << price <<endl;
	}
};


inline ostream& operator<<(ostream& out, const Item_base& other)
{
	out << other.isbn << "\t" << other.price << endl;
	return out;
}

int main()
{
	Item_base a;
	a.setisbn("9-99-999");
	a.setprice(10.9);
	cout<< a << endl;
	Item_son b;
	b.setisbn("8-88-888");
	b.setprice(10.9);
	b.show();
	return 0;
}

	