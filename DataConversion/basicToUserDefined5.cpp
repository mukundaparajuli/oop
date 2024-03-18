// Distance in meter to feet and inches
#include<iostream>
using namespace std;
class Distance{
    float feet, inches;
    public:
        Distance(){
            feet=0.0;
            inches=0.0;
        }
        Distance(int m){
            float feetf=m*3.2808;
            feet=int(feetf);
            inches=(feetf-feet)*12;
        }
        void showData(){
            cout<<"The result is: "<<feet<<" feet and "<<inches<<" inches."<<endl;
        }
};
int main(){
    int meters=46;
    Distance d1;
    d1=meters;
    d1.showData();
}