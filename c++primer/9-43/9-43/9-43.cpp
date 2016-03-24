#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
 {
	stack<char> svec;
	string s;
	cout << "Enter the string to s : ";
	cin >> s;
	string::iterator it = s.begin();
	while (it != s.end()){
		if (*it == '('){
			while (*it != ')'){
				svec.push(*it);
				++it;
			}
		}
		else{
			while (!svec.empty() && *it == ')'){
				svec.pop();
				svec.push('!');
				break;
			}
			++it;
		}
	}
	return 0;
}