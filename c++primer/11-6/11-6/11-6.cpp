#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i<10; ++i)
		cout << *(a+i) << endl;
	file_n(back_inserter(a), 10, 0);
	for (int i = 0; i<10; ++i)
		cout << *(a+i) << endl;
	fill_n(a, 10, 0);
	for (int i = 0; i<10; ++i)
		cout << *(a+i) << endl;
	return 0;
}