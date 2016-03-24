#include <iostream>
#include <string>
#include <map>

using namespace std;

void getName2Map(multimap<string, string>& m_map)
{
	string authorname, bookname;
	do{
		cout << "Enter the authorname (Ctrl+Z to end) : " << endl;
		cin >> authorname;
		if (!cin)
			break;
		else{
			cout << "Enter the bookname (Ctrl+Z to end) : " << endl;
			while (cin >> bookname){
				m_map.insert(make_pair(authorname, bookname));
			}
			cin.clear();
		}
	}while (cin);
	cin.clear();
}

int main()
{
	multimap<string, string> m_map;
	getName2Map(m_map);
	string currN, proN;
	for (multimap<string, string>::iterator it = m_map.begin(); it != m_map.end(); ++it){
		if (currN == it->first)
			continue;
		currN = it->first;
		if (currN[0] != proN[0])
			cout << "Author Names beginning with '"<< (char)toupper(currN[0]) << "'" << endl;
		cout << currN ;
		pair<multimap<string, string>::iterator, multimap<string, string>::iterator> a = m_map.equal_range(it->first);
		while (a.first != a.second){
			cout << ", " << a.first->second;
			++a.first;
		}
		cout << endl;
		proN = currN;
	}
	return 0;
}
