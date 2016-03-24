#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getInt2Vector(vector<int>& svec)
{
	cout << "Enter data to vector (Ctrl+Z to end):" << endl;
	int num;
	while (cin >> num){
		svec.push_back(num);
	}
	cin.clear();
}

int main()
{
	vector<int> svec;
	getInt2Vector(svec);
	int num;
	cout << "Enter the num you want to know how many appear :" << endl;
	cin >> num;
	cout << count(svec.begin(), svec.end(), num) << endl;
	return 0;
}