#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ofstream out;
    out.open("student.txt", ios::out);
    while((ch=cin.get())!='\n'){
        out.put(ch);
    }
    out.close();
    cout<<"file has been written"<<endl;
    return 0;
}