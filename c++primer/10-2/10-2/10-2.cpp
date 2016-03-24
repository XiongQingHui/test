#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> a("abc",23), b, c;
	cin >> b.first >> b.second;
	string str("abc");
	int num(23);
	c = make_pair(str,num);
	return 0;
}
