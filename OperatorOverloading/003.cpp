#include<iostream>
using namespace std;
class display{
    string Name;
    int Roll;
    public:
    void getData(string Name, int Roll){
        this->Name=Name;
        this->Roll=Roll;
    }

friend ostream& operator<<(ostream& COUT, display& d){
    COUT<<"Name: "<<d.Name<<endl;
    COUT<<"Roll: "<<d.Roll<<endl;
}
};
int main(){
    display d1;
    d1.getData("Mukunda Parajuli",19);
    cout<<d1;
    return 0;
}