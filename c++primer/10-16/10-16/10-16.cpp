#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<int>> m;
	string s1, s2;
	vector<int> svec(10,10);
	cout << "Enter string to map m (Ctrl+Z to end) :" << endl;
	while (cin >> s1)
		m[s1] = svec;
	cin.clear();
	cout << "Enter the string you want to find: " << endl;
	cin >> s2;
	if (m.count(s2)){
		map<string, vector<int>>::iterator it = m.find(s2);
		cout << "Find the string " << s2 << "!" << endl;
		cout << "The value is : " << endl;
		for (vector<int>::iterator i = it->second.begin(); i != it->second.end(); ++i)
			cout << *i <<endl;
	}
	else
		cout << "There is not this string!" << endl;
	return 0;
}