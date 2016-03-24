#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void getData2Map(map<string, vector<string>>& m)
{
	string firstName;
	cout << "Enter the First to map(m) (Ctrl+Z to end): " << endl;
	while (cin >> firstName){
		cout << "Enter the second Name to first Name (Ctrl+Z to end):" << firstName << endl;
		string secondName;
		vector<string> svec;
		while (cin >> secondName){
			if (m.count(firstName)){
				m[firstName].push_back(secondName);
			}
			else{
				svec.push_back(secondName);
				m[firstName] = svec;
			}
		}
		cin.clear();
		cout << "Enter the First to map(m) (Ctrl+Z to end) : " << endl;
	}
	cin.clear();
}

void findName(map<string, vector<string>> m)
{
	while (1){
		cout << "Enter firstName you want to know zhe secondName :(Ctrl+C to end) " << endl;
		string Name;
		cin >> Name;
		if (!m.count(Name))
			cout << "Can't find the FirstName in map!" << endl;
		else{
			cout << "The secondName is : " << endl;
			for (vector<string>::iterator it = m[Name].begin(); it != m[Name].end(); ++it)
				cout << *it << endl;
		}
	}
}

int main()
{
	map<string, vector<string>> m;
	getData2Map(m);
	findName(m);
	return 0;
}
