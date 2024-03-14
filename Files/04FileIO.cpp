// unformatted input output for a line
#include<iostream>
using namespace std;
int main(){
    char str[30];
    cin.getline(str, 20);
    cout.write(str, 20);
    return 0;
}