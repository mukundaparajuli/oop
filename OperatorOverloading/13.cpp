// string strcat with operator overloading
#include<iostream>
#include<cstring>
using namespace std;
class Str{
    char str1[10];
    char str2[20];
    public:
        Str(){

        }
        Str(const char* str1,const char* str2){
            strcpy(this->str1, str1);
            strcpy(this->str2, str2);
        }
        Str operator+(Str s){
           Str temp;
           strcpy(temp.str1,strcat(str1, s.str1));
           strcpy(temp.str2,strcat(str2, s.str2));
           return temp; 
        }
        void display(){
            cout<<"Str 1="<<str1<<endl;
            cout<<"Str 2="<<str2<<endl;
        }
};
int main(){
    Str s1("Muk","Para"), s2("unda", "juli"), s3;
    s3=s1+s2;
    s3.display();
}