// Multiplication of 2 3x3 matrix
#include<iostream>
using namespace std;
int main(){
    int arr1[3][3], arr2[3][3], arr[3][3];
    cout<<"Enter the array1"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the array2"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"The product is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        int sum=0, k;
            for(k=0; k<3; k++){
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            arr[i][j]=sum;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}