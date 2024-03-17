// sum of two times
#include<iostream>
using namespace std;
class Time{
    int hr, min, sec;
    public:
        void getData(){
            cout<<"Enter the hour min and sec: "; cin>>hr>>min>>sec;
        }
        Time operator +(Time t1){
            Time temp;
            temp.hr=hr+t1.hr;
            temp.min=min+t1.min;
            temp.sec=sec+t1.sec;
            while(temp.sec>=60){
                temp.sec-=60;
                temp.min++;
            }
            while(temp.min>=60){
                temp.min-=60;
                temp.hr++;
            }
            return temp;
        }
        void showData(){
            cout<<"The result is: "<<endl;
            cout<<"Hours: "<<hr<<endl;
            cout<<"Minutes: "<<min<<endl;
            cout<<"Seconds: "<<sec<<endl;
        }
};
int main(){
    Time t1, t2, t3;
    t1.getData();
    t2.getData();
    t3=t1+t2;
    t3.showData();
    return 0;
}
