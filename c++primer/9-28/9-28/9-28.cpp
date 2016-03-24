#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	char* a[] = {"abc", "def", "ghi"};
	list<char*> svec_l(a, a+3);
	vector<string> svec_v;
	svec_v.assign(svec_l.begin(), svec_l.end());
	for (vector<string>::iterator it = svec_v.begin(); it != svec_v.end(); ++it)
		cout << *it << endl;
	return 0;
}
