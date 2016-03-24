#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Foo{
public:
	const int operator[](const size_t x) const
	{
		return data[x];
	}
	Foo& setData()
	{
		int num;
		while (cin >> num)
			data.push_back(num);
		cin.clear();
		return *this;
	}
private:
	vector<int> data;
};

int main()
{
	Foo a;
	a.setData();
	cout << a[1] << endl;
	return 0;
}
