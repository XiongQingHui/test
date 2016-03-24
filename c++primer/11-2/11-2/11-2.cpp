#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void getStr2Vector(vector<string>& svec)
{
	cout << "Enter data to vector (Ctrl+Z to end):" << endl;
	string str;
	while (cin >> str){
		svec.push_back(str);
	}
	cin.clear();
}

int main()
{
	vector<string> svec;
	getStr2Vector(svec);
	string str;
	cout << "Enter the string you want to know how many appear :" << endl;
	cin >> str;
	cout << count(svec.begin(), svec.end(), str)<< endl;
	return 0;
}