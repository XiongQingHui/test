#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getChar2Vector(vector<char>& svec)
{
	char a;
	cout << "Enter the char to Vector(Ctrl+Z to end) : " << endl;
	while (cin >> a)
		svec.push_back(a);
	cin.clear();
}

int main()
{
	vector<char> svec;
	getChar2Vector(svec);
	string s(svec.begin(),svec.end());
	cout << " The s is : " << s << endl;
	return 0;
}
