#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void getData2Map(map<string, vector<pair<string, int>>>& m)
{
	string firstName;
	cout << "Enter the First to map(m) (Ctrl+Z to end): " << endl;
	while (cin >> firstName){
		cout << "Enter the second Name and birthday to first Name (Ctrl+Z to end):" << firstName << endl;
		string secondName;
		vector<pair<string, int>> svec;
		int birthday;
		while (cin >> secondName >> birthday){
			if (m.count(firstName)){
				m[firstName].push_back(make_pair(secondName, birthday));
			}
			else{
				svec.push_back(make_pair(secondName, birthday));
				m[firstName] = svec;
			}
		}
		cin.clear();
		cout << "Enter the First to map(m) (Ctrl+Z to end) : " << endl;
	}
	cin.clear();
}

void findName(map<string, vector<pair<string, int>>> m)
{
	while (1){
		cout << "Enter firstName you want to know zhe secondName :(Ctrl+C to end) " << endl;
		string Name;
		cin >> Name;
		if (!m.count(Name))
			cout << "Can't find the FirstName in map!" << endl;
		else{
			for (vector<pair<string, int>>::iterator it = m[Name].begin(); it != m[Name].end(); ++it)
				cout << "The secondName is:" << (*it).first << " The birthday is: " << (*it).second << endl;				
		}
	}
}

int main()
{
	map<string, vector<pair<string, int>>> m;
	getData2Map(m);
	findName(m);
	return 0;
}
