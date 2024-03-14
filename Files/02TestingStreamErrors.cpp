#include<iostream>
using namespace std;

int main(){
    int a;
    while(true){
        cout<<"Enter an integer value for a"<<endl;
        cin>>a;
        if(cin.good()){
            cin.ignore(10,'\n');
            break;
        }
        cin.clear();
        cout<<"Invalid Input"<<endl;
        cin.ignore(10,'\n');
        // break;
    }
    cout<<"the value is "<<a<<endl;
    return 0;
}