#include <iostream>
#include <list>
#include <vector>

using namespace std;

void getInt2List(list<int>& svec_list)
{
	int num = 0;
	cout << "Enter the num to list(Ctrl+Z to end): " << endl;
	while (cin >> num)
		svec_list.push_back(num);
}

void getInt2Vector(vector<int>& svec_vector)
{
	int num = 0;
	cout << "Enter the num to vector(Ctrl+Z to end): " << endl;
	while (cin >> num)
		svec_vector.push_back(num);
}

bool compareListAndVector(list<int> svec_list, vector<int> svec_vector)
{
	list<int>::iterator it = svec_list.begin();
	vector<int>::iterator id = svec_vector.begin();
	while ((it != svec_list.end()) && (id != svec_vector.end())){
		if (*it != *id)
			break;
		++it;
		++id;
	}
	if ((it == svec_list.end()) && (id == svec_vector.end()))
		return true;
	else
		return false;
}

int main()
{
	list<int> svec_list;
	vector<int> svec_vector;
	getInt2List(svec_list);
	cin.clear();
	getInt2Vector(svec_vector);
	if (compareListAndVector(svec_list, svec_vector))
		cout << "List and Vector is equal !" << endl;
	else
		cout << "List and Vector is not equal !" << endl;
	return 0;
}
