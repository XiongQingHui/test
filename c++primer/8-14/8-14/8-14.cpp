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

ifstream& open_file(ifstream& in, const string &fileName)
{
	in.close();
	in.clear();
	in.open(fileName.c_str());
	return in;
}

int main()
{
	string fileName;
	ifstream in;
	cout << " Enter the file name : " << endl;
	cin >> fileName;
	if ( !open_file(in,fileName) ){
		cout << " error : can not open this file : " << fileName << endl;
		return -1;
	}
	get(in);
	in.close();
	return 0;
}