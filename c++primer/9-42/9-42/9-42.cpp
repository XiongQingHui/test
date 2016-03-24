#include <iostream>
#include <stack>
#include <string>

using namespace std;

void getString2Stack(stack<string>& svec)
{
	string s;
	cout << "Enter the string to stack (Ctrl+Z to end) : " << endl;
	while (cin >> s)
		svec.push(s);
	cin.clear();
}

int main ()
{
	stack<string> svec;
	getString2Stack(svec);
	return 0;
}
