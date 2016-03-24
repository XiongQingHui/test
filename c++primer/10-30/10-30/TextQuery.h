#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>

using namespace std;

class TextQuery{
public:
	typedef vector<string>::size_type line_no;
	void read_file(ifstream& is)
	{	store_file(is);build_map();}
	std::set<line_no> run_query(const std::string&) const;
	std::string text_line(line_no) const;
private:
	void store_file(ifstream&);
	void build_map();
	vector<string> lines_of_text;
	map< string, set<line_no> > word_map;
};

#endif
