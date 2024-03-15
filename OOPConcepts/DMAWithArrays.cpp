// Dynamic Memory allocation with arrays
#include<iostream>
using namespace std;
int main(){
    float sum=0;int n;
    cout<<"Enter the no. of data you would like to add: "; cin>>n;
    // allocating dynamically
    float *ptr;
    ptr= new float[n];
    cout<<"Enter the values: "<<endl;
    for(int i=0; i<n; i++){
        cin>>ptr[i];
        sum+=ptr[i];
    }
    cout<<"The total sum is: "<<sum<<endl;
    cout<<"The average of the sum is: "<<sum/n<<endl;
    delete []ptr;
}