#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	vector<int> svec;
	int num = 0, sum = 0;
	cout << "Enter the number to vector (Ctrl+Z to end) : " << endl;
	while (cin >> num)
		svec.push_back(num);
	cin.clear();
	sum = accumulate(svec.begin(), svec.end(), 0);
	cout << "The sum of vector is : " << sum << endl;
	return 0;
}
