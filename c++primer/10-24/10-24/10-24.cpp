#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	cout << "Enter the word to set(Ctrl+Z to end) :" << endl;
	set<string> set_str;
	string str;
	while (cin >> str)
		set_str.insert(str);
	cin.clear();
	cout << "Enter the word from even to odd(Ctrl+Z to end) : " << endl;
	while (cin >> str){
		if (set_str.count(str))
			cout << "The non-plural version is : " << str << endl;
		else{
			if (str[str.size()-1]== 's'){
				str.resize(str.size()-1);
				cout << "The non-plural version is : " << str << endl;
			}
			else
				cout << "The input word is non-plural version :" << str << endl;
		}
		cout << "Enter the word from even to odd(Ctrl+Z to end) : " << endl;
		cin.clear();
	}
	return 0;
}