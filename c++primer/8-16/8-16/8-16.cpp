#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int fileToVector(vector<string>& svec , string fileName)
{
	ifstream input(fileName.c_str());
	string s;
	if(!input){
		cout << "error : can not open file : " << fileName << endl;
		return 1;
	}
	while (getline(input,s))
		svec.push_back(s);
	input.close();
	if (input.eof())
		return 2;
	if (input.bad())
		return 3;
	if (input.fail())
		return 4;
}

int main()
{
	string fileName, s;
	vector<string> svec;
	cout << " Enter the file name : " << endl;
	cin >> fileName;
	fileToVector(svec, fileName);
	istringstream stream;
	for (vector<string>::iterator it = svec.begin(); it != svec.end(); ++it){
		stream.str(*it);
		while (stream >> s)
			cout << s <<endl;
		stream.clear();
	}
	return 0;
}
