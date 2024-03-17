#include<iostream>
using namespace std;
void divide(int divider, int dividend){
    try{
        if(divider!=0){
            cout<<"The result of the division is: "<<dividend/divider<<endl;
        }else{
            throw(divider);
        }
    }catch(int x){
        cout<<"could not handle the error1"<<endl;
        throw;
    }
}
int main(){
    try{
        divide(0, 0);
    }catch(...){
        cout<<"Re-thrown error"<<endl;
    }
}