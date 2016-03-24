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
	while ( getline(input, s) )						//��ȡ��������
	//while ( input >> s )                            //��ȡһ�����ʣ��ո��ʾ���ʵķָ�����
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

