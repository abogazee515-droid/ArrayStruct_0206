
#include <iostream>
#include<string>
using namespace std;


struct STAddress {

	string city;
	string vallage;

};

struct student {

	string NIM;
	string name;
	STAddress Address;
	int Age;

};



int main() {





	student  ST[3];

	for (int i = 0; i < 3; i++) {

		cout << " student number : " << i + 1 << endl;

		cout << " please enter  your NIM :"; getline(cin, ST[i].NIM);
		cout << endl;

		cout << " please enter your name : "; getline(cin, ST[i].name);
		cout << endl;

		cout << " please enter your city : "; getline(cin, ST[i].Address.city);
		cout << endl;

		cout << " please enter your vallage : "; getline(cin, ST[i].Address.vallage);
		cout << endl;

		cout << "please enter your Age : "; cin >> ST[i].Age;
		cout << endl;

	}

	cout << " NIM : " << ST.NIM << endl;
	cout << " Name :" << ST.name << endl;
	cout << " Address :" << ST.Address << endl;
	cout << " Age : " << ST.Age;

}
