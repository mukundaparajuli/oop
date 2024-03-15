// Reference variable or alias variable is an alternate name given to a variable which has already been defined
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a;
    cout<<"The value from the alias variable is "<<b<<endl;
    return 0;
}