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

bool GT6(const string& s)
{
	return s.size() >= 6;
}

int main()
{
	vector<string> svec;
	vector<string>::size_type cnt = 0;
	getStr2Vector(svec);
	vector<string>::iterator it = svec.begin();
	while ((it = find_if(it, svec.end(), GT6)) != svec.end()){
		++cnt;
		++it;
	}
	cout << cnt << endl;
	return 0;
}