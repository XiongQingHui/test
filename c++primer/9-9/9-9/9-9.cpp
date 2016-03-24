#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<string> svec;
	string s;
	cout << " Enter the string(Crtl + Z to end the input) : " << endl;
	while( cin >> s){
		svec.push_back(s);
	}
	/*
	list<string>::iterator iter1 = svec.begin(),
		iter2 = svec.end();
	while (iter2 != iter1)
		cout << *(--iter2);
		*/
	for	(list<string>::iterator it = svec.end(); it != svec.begin();)
		cout << *(--it) << endl;
	return 0;
}

