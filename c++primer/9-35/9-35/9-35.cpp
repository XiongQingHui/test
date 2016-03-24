#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Input the char for s :" << endl;
	cin >> s;
	for (string::iterator it = s.begin(); it != s.end();){
		if (isupper(*it))
			it = s.erase(it);
		else
			++it;
	}
	cout << "The s is : " << s << endl;
	return 0;
}
