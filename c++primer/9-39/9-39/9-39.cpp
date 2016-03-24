#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string line1 = "We were her pride of 10 she named us:";
	string line2 = "Benjamin, Phoenix, the Prodigal";
	string line3 = "and perspicacious pacific Suzanne";
	string sentence = line1 + " " + line2 + " " + line3;
	vector<string> svec_max, svec_min;
	string::size_type num = 0, maxlen, minlen, wordlen;
	string::size_type pos_start = 0, pos_end = 0;
	string word;
	string a = " \t,:\r\v\n\f";
	while ((pos_start = sentence.find_first_not_of(a, pos_end)) != string::npos){
		++num;
		pos_end = sentence.find_first_of(a, pos_start);
		if (pos_end == string::npos)
			wordlen = sentence.size() - pos_start;
		else
			wordlen = pos_end - pos_start;
		word.assign(sentence.begin() + pos_start, sentence.begin() + pos_start + wordlen);
		pos_start = sentence.find_first_not_of(a, pos_end);
		if (num == 1){
			maxlen = minlen = wordlen;
			svec_max.push_back(word);
			svec_min.push_back(word);
		}
		else{
			if (wordlen > maxlen){
				maxlen = wordlen;
				svec_max.clear();
				svec_max.push_back(word);
			}
			else if (wordlen == maxlen)
				svec_max.push_back(word);
			if (wordlen < minlen){
				minlen = wordlen;
				svec_min.clear();
				svec_min.push_back(word);
			}
			else if (wordlen == minlen)
				svec_min.push_back(word);
		}
	}
	cout << "The total word in sentence is : " << num << endl;
	cout << "The longest word in sentence is : " << endl;
	vector<string>::iterator it = svec_max.begin();
	while (it != svec_max.end()){
		cout << *it << endl;
		++it;
	}
	cout << "The shortest word in sentence is : " << endl;
	it = svec_min.begin();
	while (it != svec_min.end()){
		cout << *it << endl;
		++it;
	}
	return 0;
}




		