#include<iostream>
// using namespace std;  //namespace defined inside iostream

// defining a namespace 
namespace Paschimanchal{
    int roll=24;
    char name[30]="Mukunda";
}

// using the namespace
// if this line is not used
// using namespace Paschimanchal;

int main(){
    std::cout<<"The details of the student is "<<std::endl;
    std::cout<<"Name: "<<Paschimanchal::name<<std::endl
        <<"Roll: "<<Paschimanchal::roll<<std::endl;
    return 0;
}
