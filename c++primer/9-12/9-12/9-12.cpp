#include <iostream>
#include <vector>
#include <string>

using namespace std;

void getIntToVector(vector<int>& svec)
{
	int s;
	cout << "Enter the string (Ctrl+Z to end) :" << endl;
	while (cin>>s)
		svec.push_back(s);
}

bool findIntFromVector(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
	vector<int>::iterator it = begin;
	while (it != end){
		if (*it == num)
			return true;
		else if (it == end)
			return false;
		else
			++it;
	}
}

int main()
{
	int num=0;
	cout << "Enter the number you want find : ";
	cin >> num;
	vector<int> svec;
	getIntToVector(svec);
	bool x;
	x=findIntFromVector(svec.begin(), svec.end(), num);
	if (x == true)
		cout << "Find the num: " << num << " from the vector ! " << endl;
	else if (x == false)
		cout << "Can not find the num: " << num << " from the vector ! " << endl;
	return 0;
}

