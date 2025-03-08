#include<iostream>
using namespace std;

int main(){
    int num = 100;
    int sum = num/2*(2 + (num-1));
    cout<<"some of first 100 natural number is : "<<sum;
    return 0;
};




////////////////////////////using for loop///////////////////////////
// int main(){
//     int num;
//     cout<<"Enter the value of number of natural number to find its sum : ";
//     cin>>num;
//     int sum = 0;
//     for(int i = 1; i<=num; i++){
//         sum = sum + i;
//     }
//     cout<<"some of first 100 natural number is : "<<sum;
//     return 0;
// };



////////////////////////USING WHILE LOOP//////////////////////
// int main(){
//     int num;
//     cout<<"Enter the value of number of natural number to find its sum : ";
//     cin>>num;
//     int sum = 0;
//     int i = 0;
//     while(i<=num){
//         sum += i;
//         i++;
//     }
//     cout<<"some of first 100 natural number is : "<<sum;
//     return 0;
// };




///////////////////////////Do- While LOOP/////////////////
// int main(){
//     int num;
//     cout<<"Enter Number of natural number to find its sum: ";
//     cin>>num;
//     int sum = 0;
//     int i = 1;
//     do{
//         sum +=i;
//         i++;
//     }while(i<=num);
//     cout<<"some of first 100 natural number is : "<<sum;
//     return 0;
// }