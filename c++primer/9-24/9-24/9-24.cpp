#include <iostream>
#include <vector>

using namespace std;

void getInt2Vector(vector<int>& svec)
{
	int num = 0;
	cout << "Enter the number to vector(Ctrl+Z to end) : " << endl;
	while (cin >> num)
		svec.push_back(num);
}

int main()
{
	vector<int> svec;
	getInt2Vector(svec);
	cin.clear();
	if (svec.empty())
		cout << "This vector is empty !" << endl;
	else{
		cout << "The First element is(1) : " << svec.front() << endl;
		cout << "The First element is(2) : " << svec[0] << endl;
		cout << "The First element is(3) : " << *svec.begin() << endl;
	}
	return 0;
}
