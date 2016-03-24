#include <iostream>
#include <vector>
#include <string>

using namespace std;

void getStringToVector(vector<string>& svec)
{
	string s;
	cout << "Enter the string (Ctrl+Z to end) : " << endl;
	while (cin >> s)
		svec.push_back(s);
}

int main()
{
	vector<string> svec;
	getStringToVector(svec);
	for (vector<string>::iterator it = svec.begin(); it != svec.end(); ++it)
		cout <<*it <<endl;
	return 0;
}
