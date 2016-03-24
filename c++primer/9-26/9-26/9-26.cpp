#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = { 0, 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 55 , 89 };
	vector<int> svec_v(ia, ia+11);
	list<int> svec_l(ia, ia+11);
	for (vector<int>::iterator it = svec_v.begin(); it != svec_v.end(); ){
		if ((*it)%2 != 1){
			it = svec_v.erase(it);
		}
		else
			++it;
	}
	for (list<int>::iterator it = svec_l.begin(); it != svec_l.end(); ){
		if ((*it)%2 != 0){
			it = svec_l.erase(it);
		}
		else
			++it;
	} 
	for (list<int>::iterator it = svec_l.begin(); it != svec_l.end(); ++it)
		cout << *it << endl;
	for (vector<int>::iterator it = svec_v.begin(); it != svec_v.end(); ++it)
		cout << *it << endl;

	return 0;
}


