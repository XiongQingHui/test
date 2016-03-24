#include <iostream>
#include <fstream>
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
	string s, fileName;
	cout << "Enter the filename :" << endl;
	cin >> fileName;
	ifstream inFile(fileName.c_str());
	if ( !inFile ){
		cerr << "error:can not open input file: " << fileName << endl;
		return -1;
	}
	get(inFile);
	return 0;
}