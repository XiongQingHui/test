#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("Hello world!");
	for (string::iterator it = s.begin(); it != s.end(); ++it){
		if (islower(*it))
			*it = toupper(*it);
	}
	cout << "s : " << s << endl;
	return 0;
}