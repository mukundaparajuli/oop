#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class student {
private:
  int roll;
  float marks;
  char name[50], address[50];

public:
  void getdata() {
    cout << "Enter name";
    cin >> name;
    cout << "Enter roll";
    cin >> roll;
    cout << "Enter marks";
    cin >> marks;
    cout << "Enter address";
    cin >> address;
  }
  void putdata() {
    cout << setw(10) << name << setw(15) << roll << setw(20) << marks
         << setw(30) << address << endl;
  }
  int getroll() { return roll; }
};
int main() {
  student std;
  fstream inout;
  int m, roll, object, isfound;
  cout << "What do you like to do?" << endl;
  cout << "1.Write records into file:" << endl;
  cout << "2.Read records from the file:" << endl;
  cout << "3.Update record in the file:" << endl;
  cout << "4.Search record of a student:" << endl;
  cout << "5.Modify record of a student:" << endl;
  cout << "6.Delete record of a student:" << endl;
  cout << "7.count the number of objects in file and total file size" << endl;
  cin >> m;
  switch (m) {
  case 1://write into the file
  inout.open("REC.txt", ios::out);
  int z;
  cout<<"How many students do you want to add: "<<endl;cin>>z;
  for(int i=0; i<z; i++){
    std.getdata();
    inout.write((char *)&std, sizeof(std));
  }
  inout.close();
  break;

    case 2: //read from the file
    inout.open("REC.txt", ios::in);
    cout<<"Data are: "<<endl;
    while(inout.read((char *)&std, sizeof(std))){
        std.putdata();
    }
    inout.close();
    break;

    case 3: //search in the file
    inout.open("REC.txt", ios::in);
    cout<<"Enter the roll: "; cin>>roll;
    isfound=0;
    inout.seekg(0, ios::beg);
    while(inout.read((char *)&std, sizeof(std))){
        if(std.getroll()==roll){
            isfound=1;
            cout<<"Searched!"<<endl;
            std.putdata();
        }
    }
    inout.close();
    break;


    case 4://modify the detail
    isfound=object=0;
    int location;
    cout<<"ENter roll: "<<endl; cin>>roll;
    inout.open("REC.txt", ios::in|ios::out|ios::ate);
    while(inout.read((char *)&std, sizeof(std))){
        object++;
        if(roll=std.getroll()){
            isfound=1;
            location=(object-1)*sizeof(std);
            inout.seekp(location, ios::beg);
            std.getdata();
            inout.write((char *)&std, sizeof(std));
            inout.close();
        }
        break;
    }if(isfound== 0){
        cout<<"Record not found!"<<endl;
        inout.close();
        break;
    }

    case 5:     //update the record
    isfound=0;
    inout.open("REC.txt", ios::app);
    cout<<"Enter the detail you would like to update: ";
    std.getdata();
    inout.write((char *)&std, sizeof(std));
    inout.close();
    break;

    case 6:    //delete the record;
    student s[48];
    int i, j;
    inout.open("REC.txt", ios::out);
    cout<<"ENter the roll: "; cin>>roll;
    while(inout.read((char *)&std, sizeof(std))){
        i++;
    }
    j=i;
    inout.close();
    inout.open("REC.txt",ios::out);
    for(int k=0; k<j; k++){
        if(s[k].getroll()!=roll){
            inout.write((char *)&s[k], sizeof(s[i]));
        }
    }
    inout.close();
    break;


  }
}
