#include <iostream>
#include <vector>

using namespace std;

/// Function that takes the total payment to be split, the number of people to 
/// split the payment between, and their split percentages and outputs the
/// amount each person owes.
vector<double> splitPayments(double total_pay, int num_people, vector<double> &splits) {
    double total = 0;
    for (int i = 0; i < num_people; i++) total += splits[i];

    // Validate that split percentages are proper (add up to 100).
    if (total != 100) {
        cout<<"Error: total percentage split does not equal 100"<<endl;
        exit(1);
    }

    // Calculate each person's payment.
    vector<double> out(num_people);
    for (int i = 0; i < num_people; i++) {
        out[i] = total_pay*splits[i]/100;
        cout<<"Person "<<i+1<<" should pay "<<out[i]<<endl;
    }
    return out;
} 

int main ()
{
    // Get total payment.
    double total_pay;
    cout<<"Enter total payment to split (eg. 500): ";
    cin>>total_pay;

    // Get people's payment split percentage data.
    int n;
    cout<<"Enter Number of people to split payment between (eg. 3): ";
    cin>>n;

    bool splitEvenly = false;
    cout<<"Do you want to split payment evenly? (y/n): ";
    char c;
    cin>>c;
    splitEvenly = c == 'y';

    // Get split percentages.
    vector<double> splits(n, 100/n);
    if (!splitEvenly) {
        cout<<"Enter split percentages (eg. 50, 30, 20): ";
        for (int i = 0; i < n; i++) cin>>splits[i];
    }

    // Split payments.
    vector<double> out = splitPayments(total_pay, n, splits);
    return 0;
}
