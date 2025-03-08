//Write a C++ program to find the largest value
#include<iostream>
using namespace std;

int main(){
    int firstnum;
    int secondnum;
    // int thirdnum;
    cout<<"Enter The Value for firstnum:";
    cin>>firstnum;
    cout<<"Enter The Value  for secondnum:";
    cin>>secondnum;
    // cout<<"Enter The Value for thirdnum:";
    // cin>>thirdnum;
    if(firstnum > secondnum){
        cout<<firstnum<<": is the greatest number";
    }else {
        cout<<secondnum<<": is the greatest number";
    }
    return 0;
};