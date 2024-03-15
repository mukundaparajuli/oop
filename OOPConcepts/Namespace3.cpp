#include<iostream>
using namespace std;

namespace Kathmandu{
    char name[30];
    int ctzn;
}

namespace Kaski{
    char name[30];
    int ctzn;
}

int main(){
    cout<<"Enter the name and ctzn for Kathmandu: "; cin>>Kathmandu::name>>Kathmandu::ctzn;
    cout<<"Enter the name and ctzn for Kaski: "; cin>>Kaski::name>>Kaski::ctzn;
    cout<<"The details for kathmandu"<<endl
        <<"Name: "<<Kathmandu::name<<endl
        <<"Citizenship No.:  "<<Kathmandu::ctzn<<endl;

    cout<<"The details for Kaski"<<endl
        <<"Name: "<<Kaski::name<<endl
        <<"Citizenship No.:  "<<Kaski::ctzn<<endl;
}