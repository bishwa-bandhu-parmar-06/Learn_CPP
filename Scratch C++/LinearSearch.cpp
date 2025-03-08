#include<iostream>
using namespace std;

int findkey(int arr[], int arrSize, int key){
    int flag = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] == key){
            flag++;
        }
    }
    return flag;
};

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrSize = 10;

    int key;
    cout<<"Enter key b/w 1 to 10 to find in Array : "<<endl;
    cin>>key;

    if(findkey(arr, arrSize, key) == 1){
        cout<<"Key found."<<endl;
    }
    else {
        cout<<"Key Not found."<<endl;
    }
    return 0;
}