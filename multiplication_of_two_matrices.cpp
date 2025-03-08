#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    cout<<"Order of the matrix is: "<<row<<"x"<<col<<"\n";
    int mul[row][col];
    int arr1[row][col];
    int arr2[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Enter the element of first matrix: \n";
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Enter the element of second matrix: \n";
            cin>>arr2[i][j];
        }
    }
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            // cout<<"Entered the element of second matrix: "<<arr2[i][j]<< "\n";
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }


    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            mul[i][j] = 0;
            for(int k = 0; k<col; k++){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout<<"The multiplication of two matrices is: \n";
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}