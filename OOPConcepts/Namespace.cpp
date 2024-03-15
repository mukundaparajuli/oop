// Namespace is a feature in c++ which helps us to overcome the problem we have to encounter when 
//  more than two functions or variables with same name but corresponding to a differnt class/scope/library
#include<iostream>
using namespace std;  //namespace defined inside iostream

// defining a namespace 
namespace Paschimanchal{
    int roll=24;
    char name[30]="Mukunda";
}

// using the namespace
using namespace Paschimanchal;

int main(){
    cout<<"The details of the student is "<<endl;
    cout<<"Name: "<<name<<endl
        <<"Roll: "<<roll<<endl;
    return 0;
}
