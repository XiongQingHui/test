#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include "TextQuery.h"

using namespace std;
typedef vector<string>::size_type line_no;

void TextQuery::store_file(ifstream& is)
{
	string linetext;
	while (getline (is, linetext))
		lines_of_text.push_back(linetext);
}

void TextQuery::build_map()
{
	for (vector<string>::size_type it = 0; it != lines_of_text.size(); ++it){
		istringstream line(lines_of_text[it]);
		string word;
		while (line >> word){
			
			word_map[word].insert(it);
		}
	}
}

set<line_no> TextQuery::run_query(const string& query_word) const
{
	map<string, set<line_no> >::const_iterator it = word_map.find(query_word);
	if (it != word_map.end())
		return it->second;
	return set<line_no>();
}

string TextQuery::text_line(line_no line) const
{
	if (line < lines_of_text.size())
		return lines_of_text[line];
	throw std::out_of_range("error:out of the range");
}

