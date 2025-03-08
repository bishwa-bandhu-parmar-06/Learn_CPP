#include<iostream>
using namespace std;

int main(){
    int p;//initial principal balance
    int r;//annual inetrest rate
    int t; //time in year
    int A; //final amount
    cout<<"Enter the initial principal balance: ";
    cin>>p;
    cout<<"Enter the annual intrest rate :";
    cin>>r;
    cout<<"Enter the Time in Year:";
    cin>>t;
    A = p*(1 + r*t);
    cout<<"Final Amount is: "<<A;
    return 0;
};