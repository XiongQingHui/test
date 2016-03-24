#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	cout << "Enter the word to map (Ctrl+Z to end):" << endl;
	map<string, int> svec;
	string word;
	while (cin >> word)
		++svec[word];
	cin.clear();
	map<string, int>::iterator it = svec.begin();
	cout << "word\t\tnum" << endl;
	while (it != svec.end()){
		cout << it->first << "\t\t" << it->second << endl;
		++it;
	}
	return 0;
}
