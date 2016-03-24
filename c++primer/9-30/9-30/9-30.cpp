#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> svec;
	cout << "svec: size: " << svec.size()
		<< " capacity: " << svec.capacity() << endl;
	for (int it = 0; it != 10; ++it){
		svec.push_back(0);
		cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	}
	while (svec.size() != svec.capacity())
		svec.push_back(0);
	cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	svec.push_back(0);
	cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	while (svec.size() != svec.capacity())
		svec.push_back(0);
	cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	svec.reserve(100);
	svec.push_back(0);
	cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	while (svec.size() != svec.capacity())
		svec.push_back(0);
	cout << "svec: size: " << svec.size()
			<< " capacity: " << svec.capacity() << endl;
	return 0;
}
