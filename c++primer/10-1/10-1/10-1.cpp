#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector< pair<string, int> > svec;
	pair<string, int> a;
	cout << "Enter the pair (string and int) to vector (Ctrl+Z to end) : " << endl;
	while (cin >> a.first >> a.second){
		svec.push_back(a);
	}
	cin.clear();
	return 0;
}
