#include <iostream>
#include <vector>

using namespace std;

void getIntToVector(vector<int>& svec)
{
	int num=0;
	cout << "Enter the number to vector (Ctrl+Z to end) :" << endl;
	while (cin >> num)
		svec.push_back(num);
}

vector<int>::iterator getIterator(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
	vector<int>::iterator it = begin;
	while (it != end){
		if (*it == num)
			return it;
		else
			++it;
	}
	return end;
}

int main()
{
	int num=0;
	cout << "Enter the number you want to find :" << endl;
	cin >> num;
	vector<int> svec;
	getIntToVector(svec);
	vector<int>::iterator it;
	it = getIterator(svec.begin(), svec.end(), num);
	if (it != svec.end())
		cout << num << " is a element of the vector !" << endl;
	else
		cout << num << " is not a element of the vector !" << endl;
	return 0;
}
