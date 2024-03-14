#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char name[40];
    char add[40];
    int roll;

    ifstream in;
    in.open("student2.txt", ios::in);
    in>>name>>add>>roll;
    while(in){
    cout<<name<<"\t"<<add<<"\t"<<roll<<endl; 
    in>>name>>add>>roll;
    }
    cout<<"File written"<<endl;
    in.close();
}