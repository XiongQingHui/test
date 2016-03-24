#include <iostream>
#include <string>

using namespace std;

string greet(string form, string lastname, string title, string::size_type pos, int length)
{
	form.replace(form.find("Da"), 5, lastname);
	string s(title, pos, length);
	form.replace(form.find("Ms"), 2, s);
	return form;
}

int main()
{
	string generic1("Dear Ms Daisy: ");
	string generic2("MrsMsMissPeople");
	string lastName("Annap");
	string salute = greet(generic1, lastName, generic2, 5, 4);
	cout << salute << endl;
	return 0;
}
