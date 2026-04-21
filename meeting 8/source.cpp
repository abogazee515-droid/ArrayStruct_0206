
#include <iostream>
using namespace std;






struct student {

	string NIM;
	string Name;
	STAdddress Address;
	int Age;

};


int main()
{

	student S1;
	cout << " please enter NIM ";
	cin >> S1.NIM;
	cout << endl;
	cout << " please enter your name : ";
	cin >> S1.Name;
	cout << endl;
	cout << " please enter your city :";
	cin >>S1.Address.city ;
	cout << endl;

	cout << " please enter your vallage :";
	cin >> S1.Address.vallage;
	cout << endl;

	cout << " please enter your Age:";
	cin >> S1.Age;
	cout << endl;


	cout << " NIM: " << S1.NIM << endl;
	cout << "Name :" << S1.Name << endl;
	cout << "Address :" << S1.Address.city << endl;
	cout << "Address :" << S1.Address.vallage << endl;
	cout << " Age : " << S1.Age;

}

