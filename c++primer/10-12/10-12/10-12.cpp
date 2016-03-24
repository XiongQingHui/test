#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	cout << "Enter the word to map (Ctrl+Z to end) :" << endl;
	string word;
	map<string, int> svec;
	while (cin >> word){
		pair<map<string, int>::iterator, bool> a = svec.insert(make_pair(word,1));
		if (!a.second)
		{
			++a.first->second;
		}
	}
	cin.clear();
	for (map<string, int>::iterator it = svec.begin(); it != svec.end(); ++it){
		cout << it->first << "\t\t" << it->second << endl;
	}
	return 0;
}
