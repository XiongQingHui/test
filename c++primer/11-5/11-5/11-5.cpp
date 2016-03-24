#include <iostream>
#include <string>
#include <list>
#include <algorithm>
//#include <numeric>

using namespace std;

void cin2List(list<string>& list)
{
	string s;
	while (cin >> s)
		list.push_back(s);
	cin.clear();
}

int main()
{
	list<string> list_1, list_2;
	cin2List(list_1);
	cin2List(list_2);
	list<string>::iterator it = list_1.begin();
	while ((it = find_first_of(it, list_1.end(), list_2.begin(), list_2.end())) != list_1.end()){
		cout << *it << endl;
		++it;
	}
	return 0;
}
