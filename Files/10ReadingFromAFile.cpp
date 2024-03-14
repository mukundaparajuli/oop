#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    char ch;
    fstream in;
    in.open("student.txt",ios::in);
    if(in.fail()){
        cout<<"Error while opening the file"<<endl;
        exit(1);
    }
    while(in.get(ch)){
        cout<<ch;
    }
    in.close();
    return 0;
}