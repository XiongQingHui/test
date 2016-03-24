#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void getStr2Vector(vector<string>& svec)
{
	cout << "Enter String to Vector (Ctrl+Z to end) : " << endl;
	string s;
	while (cin >> s)
		svec.push_back(s);
	cin.clear();
}

bool GT4(const string& s)
{
	return s.size() >= 4;
}

int main()
{
	vector<string> svec;
	vector<string>::size_type cnt = 0;
	getStr2Vector(svec);
	cnt = count_if(svec.begin(), svec.end(), GT4);
	cout << cnt << endl;
	sort(svec.begin(), svec.end());
	vector<string>::iterator it = unique(svec.begin(), svec.end());
	svec.erase(it, svec.end());
	for (it = svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	return 0;
}

