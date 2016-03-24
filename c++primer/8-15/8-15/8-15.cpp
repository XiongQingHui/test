#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istream& get(istream & in)
{
	int ival;
	while(in>>ival, !in.eof()){
		if( in.bad())
			cout << " IO stream corrupted " << endl;
		if( in.fail()){
			cout << " Enter the bad data! " << endl;
			in.clear();
			in.ignore(200,' ');
			continue;
		}
		cout << ival << endl;
	}
	in.clear();
	return in;
}

int main()
{
	string line;
	cout << " Enter a line of text : " << endl;
	getline (cin, line);
	line += " ";
	istringstream isstr(line);
	get(isstr);
	return 0;
}
