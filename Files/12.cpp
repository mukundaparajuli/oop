#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char name[40];
    char add[40];
    int roll;

    int n;
    cout<<"Enter the numbers of students: "<<endl;
    cin>>n;
    ofstream out;
    out.open("student2.txt", ios::out);
    for(int i=0; i<n; i++){
        cout<<"Enter name: ";cin>> name;
        cout<<"Enter address: ";cin>> add;
        cout<<"Enter roll no. : ";cin>> roll;
        out<<name<<"\t"<<add<<"\t"<<roll<<endl;
    }
    cout<<"File written!"<<endl;
    out.close();
    return 0;
}