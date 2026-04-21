
#include <iostream>
using namespace std;

struct student {

	string NIM;
	string name;
	string Address;
	int Age;

};



int main(){

	student ST;

	cout << " please enter NIM ";
	cin >> ST.NIM;

	cout << endl;
	cout << " please enter your name : ";
	cin >> ST.name;

	cout << endl;
	cout << " please enter your Address :";
	cin >> ST.Address;
	cout << endl;

	cout << " please enter your Age:";
	cin >> ST.Age;
	cout << endl;

	cout << " NIM: " << ST.NIM << endl;
	cout << "Name :" << ST.name << endl;
	cout << "Address :" << ST.Address << endl;













}
