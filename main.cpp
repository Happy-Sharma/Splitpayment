#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showFriends(vector<string> &friends){
	int n= friends.size();
	cout<<"List of Students:\n";
	for(int i=0;i<n;i++){
		cout<<"-"<<friends[i]<<"\n";	
	}
	cout<<"=================";

}


int main() {
	vector<string> friends={"Ramesh", "Suresh", "Soni", "Titu"};
	
	showFriends(friends);
	
	return 0;
}
