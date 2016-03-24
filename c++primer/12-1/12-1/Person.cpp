#include <iostream>
#include <string>

using namespace std;

class Person{
public:
	Person(){
	name = "a";
	address = "b";
	}
	Person(const string nm, const string addr){
		name = nm;
		address = addr;
	}
	string getName() const
	{
		return name;
	}
	string getAddress() const
	{
		return address;
	}
private:
	string name;
	string address;
};

int main()
{
	Person xiong("qing", "hangdian");
	cout << xiong.getName() << endl;
	cout << xiong.getAddress() << endl;
	return 0;
}
