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

void eraseName(multimap<string, string>& m_map)
{
	string authorname;
	cout << "Which author do you want to delete ?" << endl;
	cin >> authorname;
	pair<multimap<string, string>::iterator, multimap<string, string>::iterator> it = m_map.equal_range(authorname);
	if (it.first != it.second){
		m_map.erase(it.first, it.second);
	}
	else
		cout << "Can't find the author !" << endl;
}

int main()
{
	multimap<string, string> m_map;
	getName2Map(m_map);
	eraseName(m_map);
	cout << "authorname\t\twork " << endl;
	for (multimap<string, string>::iterator it = m_map.begin(); it != m_map.end(); ++it)
		cout << it->first << "\t\t" << it->second << endl;
	return 0;
}