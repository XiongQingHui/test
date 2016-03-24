#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "TextQuery.h"

using namespace std;

void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery& file);

int main(int argc, char **argv)
{
	cout << "Enter the file name :" << endl;
	ifstream infile;
	string fileName;
	cin >> fileName;
	infile.open(fileName.c_str());
	cin.clear();
	TextQuery tq;
	tq.read_file (infile);
	while (true){
		cout << "enter word to look for, or q to quit: ";
		string s;
		cin >> s;
		if (!cin || s == "q")
			break;
		set<TextQuery::line_no> locs = tq.run_query(s);
		print_results(locs, s, tq);
	}
	return 0;
}

void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery& file)
{
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought << " occurs " << size << " " << endl;
	for (line_nums::const_iterator it = locs.begin(); it != locs.end(); ++it){
		cout << "\t(line " << (*it) + 1 << ")" << file.text_line(*it) << endl;
	}
}