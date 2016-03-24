#include <iostream>
#include <list>
#include <deque>

using namespace std;

void getIntToList(list<int>&  svec)
{
	int num=0;
	cout << "Enter the num to list (Ctrl+Z to end) : " << endl;
	while (cin >> num){
		svec.push_back(num);
	}
}

void copy2Deque(list<int> svec, deque<int>& odd, deque<int>& even)
{
	for (list<int>::iterator it = svec.begin(); it != svec.end(); ++it){
		if ((*it)%2 == 0)
			even.push_back(*it);
		else if ((*it)%2 == 1)
			odd.push_back(*it);
	}
}

int main()
{
	list<int> svec;
	deque<int> odd, even;
	getIntToList(svec);
	cout << "The list is : " << endl;
	for (list<int>::iterator it = svec.begin(); it != svec.end(); ++it){
		cout << *it <<endl;
	}
	copy2Deque(svec, odd, even);
	cout << "The odd deque is : " << endl;
	for (deque<int>::iterator it = odd.begin(); it != odd.end(); ++it){
		cout << *it <<endl;
	}
	cout << "The even deque is : " << endl;
	for (deque<int>::iterator it = even.begin(); it != even.end(); ++it){
		cout << *it << endl;
	}
	return 0;
}


