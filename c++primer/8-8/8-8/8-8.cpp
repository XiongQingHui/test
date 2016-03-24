#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int vectorToFile (ifstream & input, vector<string> svec)
{
	string s;
	vector<string>::iterator it = svec.begin();
	while ( it != svec.end()){
		input.open(it->c_str());
			if ( !input){
				cout << " error : can not open file : " << *it <<endl;
				input.clear();
				++it;
			}
			else{
				while(input >> s)
					cout << s;
				input.close();
				input.clear();
				++it;
			}
	}
	return 0;
}

int main()
{
	ifstream input;
	string fileName;
	vector<string> svec;
	cout << "Enter the file name :(Ctrl+Z to end) " << endl;
	while(cin >> fileName)
		svec.push_back(fileName);
	vectorToFile(input,svec);
	return 0;
}

