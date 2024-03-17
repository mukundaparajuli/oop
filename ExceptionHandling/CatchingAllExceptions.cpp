#include<iostream>
using namespace std;
int main(){
     int divider, dividend;
    char name[]="Mukunda";
    cout<<"Enter the dividend and divider: "<<endl; cin>>dividend>>divider;
    try{
        if(divider !=0){
            cout<<"The result for the division is: "<<divider/dividend<<endl;
        }
        else throw(divider);

        for(int i=0; i<20; i++){
            cout<<name[i];
            if(name[i]=='\0'){
                throw(name[i]);
            }
        }
    }
    catch(...){
        cout<<endl;
        cout<<"An Error has occured!"<<endl;
    }
    return 0;
}