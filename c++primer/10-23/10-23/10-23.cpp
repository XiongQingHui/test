#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> svec;
	string s;
	cout << "Enter the word you want to excluded(Ctrl+Z to end) : " << endl;
	while (cin >> s)
		svec.push_back(s);
	return 0;
}
//理解题目所给意思，以后继续。