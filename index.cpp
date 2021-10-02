#include <iostream>
using namespace std;

int main() {
	int noOfFriends;
	cin >> noOfFriends;
	
	string friend[noOfFriends], moneyPaid[noOfFriends];
	cout << "Enter friend with payment details";
	for(int i=0; i<noOfFriends; i++){
		cin >> friend[i] >> moneyPaid[i];
	}
	
	for(int i=0; i<noOfFriends; i++){
		cout << "Freind " << friend[i] << " paids " << moneyPaid[i] <<" amount.\n";
	}
	
	return 0;
}
