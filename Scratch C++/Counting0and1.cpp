#include<iostream>
using namespace std;

// int countingElements(int arr[],int size){
//     int count1 = 0;
//     int count0 = 0;
//     for(int i = 0; i < size; i++){
//         if(arr[i] == 1){
//             count1++;
//         }
//         else if(arr[i] == 0){
//             count0++;
//         }
//     }
//     return(count1, count0);
// };

int main(){
    int size;
    cout<<"Enter Size of an Array : "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter 0s and 1s an Elements for "<<size <<"of an Array : "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    // countingElements(arr, size);

    int count1 = 0;
    int count0 = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 1){
            count1++;
        }
        else if(arr[i] == 0){
            count0++;
        }
    }
    cout<< " Number of 1 elements :"<< count1 <<endl;
    cout<< " Number of 0 elements :"<< count0 <<endl;
}