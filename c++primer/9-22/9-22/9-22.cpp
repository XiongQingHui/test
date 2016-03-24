#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> svec(25,1);
	cout << "The vector is :" << endl;
	for (vector<int>::iterator it = svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	svec.resize(100);
	cout << "The vector after resize100 is :" << endl;
	for (vector<int>::iterator it = svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	svec.resize(10);
	cout << "The vector after resize10 is :" << endl;
	for (vector<int>::iterator it = svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	return 0;
}


