#include <iostream>
#include <string>
#include <list>

using namespace std;

void getString2List(list<string>& svec)
{
	cout << "Enter the string to list (Ctrl+Z to end the list) :" << endl;
	string s;
	while (cin >> s)
		svec.push_back(s);
}

int main()
{
	int num = 0;
	list<string> svec;
	getString2List(svec);
	cin.clear();
	cout << "Please input you want to delete string :" << endl;
	string s;
	cin >> s;
	for (list<string>::iterator it = svec.begin(); it != svec.end(); ){
		if (*it == s){
			it = svec.erase(it);
			break;
		}
		else{
			++it;
			++num;
			if (num == svec.size()){
				cout << "Can not find the string from list !" << endl;
				return 0;
			}
		}
	}
	cout << "The list is :" << endl;
	for (list<string>::iterator it = svec.begin(); it != svec.end(); ++it)
		cout << *it << endl;
	return 1;
}
