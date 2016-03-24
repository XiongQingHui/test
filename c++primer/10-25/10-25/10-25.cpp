#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

void getBook2Vactor(vector<string>& svec)
{
	cout << "Enter the book name (Ctrl+Z to end) : " << endl;
	string s;
	while (cin >> s){
		svec.push_back(s);
	}
	cin.clear();
}

int getRandomNum(int num)
{
	srand( unsigned(time(NULL)));
	return rand() % num;
}

int main()
{
	vector<string> bookName;
	set<string> readedName;
	bool timeOver = false;
	getBook2Vactor(bookName);
	while (!timeOver && !bookName.empty()){
		int i = getRandomNum(bookName.size());
		string answer, book;
		cout << "Do you want to read a book (answer 'Y' or 'N' ) ?" << endl;
		cin >> answer;
		if (answer[0] == 'y' || answer[0] == 'Y'){
			book = bookName[i];
			cout << "Intrduce this book to you : " << book << endl;
			readedName.insert(book);
			bookName.erase(bookName.begin() + i);
			cout << "Did you read this book?( answer 'Y' or 'N' ) " << endl;
			cin >> answer;
			if (answer[0] == 'n' || answer[0] == 'N'){
				bookName.push_back(book);
				readedName.erase(book);
			}
		}
		cout << "Time Over ? (answer 'Y' or 'N') " << endl;
		cin >> answer;
		if (answer[0] == 'y' || answer[0] == 'Y'){
			timeOver = true;
		}
	}
	if (timeOver){
		cout << "You readed book :" << endl;
		for (set<string>::iterator it = readedName.begin(); it != readedName.end(); ++ it)
			cout << *it << endl;
		cout << "You didn't readed book : " << endl;
		for (vector<string>::iterator it = bookName.begin(); it != bookName.end(); ++it)
			cout << *it << endl;
	}
	else
		cout << "You have been readed all the book !" << endl;
	return 0;
}



