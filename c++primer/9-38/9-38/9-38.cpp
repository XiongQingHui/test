#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	string numbers("0123456789");
	string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string str("ab2c3d7R4E6");
	string::size_type ip = 0;
	while ((ip = str.find_first_of(numbers, ip)) != string::npos){
		cout << "Find number at index : " << ip << " element is : " << str[ip] << endl;
		++ip;
	}
	ip = 0;
	while ((ip = str.find_first_of(letters, ip)) != string::npos){
		cout << "Find letter at index : " << ip << " element is : " << str[ip] << endl;
		++ip;
	}
	return 0;
}
*/

int main()
{
	string numbers("0123456789");
	string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string str("ab2c3d7R4E6");
	string::size_type ip = 0;
	while ((ip = str.find_first_not_of(letters, ip)) != string::npos){
		cout << "Find number at index : " << ip << " element is : " << str[ip] << endl;
		++ip;
	}
	ip = 0;
	while ((ip = str.find_first_not_of(numbers, ip)) != string::npos){
		cout << "Find letter at index : " << ip << " element is : " << str[ip] << endl;
		++ip;
	}
	return 0;
}

