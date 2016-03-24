#include <iostream>

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
	get(cin);
	return 1;
}