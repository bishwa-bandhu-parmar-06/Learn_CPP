#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter The Number To Print Table:";
    cin>>number;
    for(int i = 1; i<=10; i++){
        cout<<number*i<<"\n";
    }
    return 0;
}