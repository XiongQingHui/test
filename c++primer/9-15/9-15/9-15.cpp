#include <iostream>
#include <list>
#include <string>

using namespace std;

void getStringToList(list<string>& svec)
{
	string s;
	cout << "Enter the string to list (Ctrl+Z to end) : " << endl;
	while (cin >> s)
		svec.push_back(s);
}

int main()
{
	list<string> svec;
	getStringToList(svec);
	for (list<string>::iterator it =svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	return 0;
}