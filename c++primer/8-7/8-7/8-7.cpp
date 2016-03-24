#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int vectorToFile (vector<string> svec, ifstream& input)
{
	string s;
	vector<string>::const_iterator it = svec.begin();
	while ( it != svec.end()){
		input.open( it->c_str());
		if (!input){
			cerr << " error : can not open the filename : " << *it << endl;
			input.clear();
			++it;
			continue;
		}
		while ( input >> s)
			cout << s;
		input.close();
		input.clear();
		++it;
	}
	return 0;
}

int main()
{
	string fileName;
	ifstream input;
	vector<string> svec;
	cout << "Enter the filename : (Ctrl+Z to end) " << endl;
	while ( cin >> fileName){
		svec.push_back(fileName);
	}
	vectorToFile(svec, input);
	return 1;
}

