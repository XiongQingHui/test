#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int fileToVector(vector<string>& svec, string fileName)
{
	string s;
	ifstream input(fileName.c_str());
	if ( !input )
		return 1;
	while ( getline(input, s) )						//读取整行数据
	//while ( input >> s )                            //读取一个单词（空格表示单词的分隔符）
		svec.push_back(s);
	input.close();
	if ( input.eof() )
		return 4;
	if ( input.bad() )
		return 2;
	if ( input.fail() )
		return 3;
}

int main()
{
	string fileName, s;
	vector<string> svec;
	cout << " Enter the file name :" << endl;
	cin >> fileName;
	switch ( fileToVector(svec, fileName) ){
		case 1:
			cout << " error: can not open file : " << fileName << endl;
			return -1;
		case 2:
			cout << " error: system failure " << endl;
			return -1;
		case 3:
			cout << " error: read failure " << endl;
			return -1;
	}
	for ( vector<string>::iterator it = svec.begin() ; it != svec.end() ; ++it)
		cout << *it << endl;
	return 0;
}

