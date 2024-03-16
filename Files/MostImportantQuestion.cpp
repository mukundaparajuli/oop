#include<iostream> 
#include<cstdlib> 
#include<fstream> 
#include<iomanip> 

using namespace std; 

class student 
{ 
    private: 
    int roll; 
    float marks; 
    char name[50],address[50]; 
    public: 
        void getdata() 
        { 
             cout<<"Enter name";cin>>name; 
             cout<<"Enter roll";cin>>roll; 
             cout<<"Enter marks";cin>>marks; 
             cout<<"Enter address";cin>>address; 
        } 
        void putdata() 
        { 
            cout<<setw(10)<<name<<setw(15)<<roll<<setw(20)<<marks<<setw(30)<<address<<endl; 
        } 
        int getroll() 
        { 
            return roll; 
        } 
}; 
int main() { 
    student std; 
    fstream inout; 
    int m,roll,object,isfound; 
    cout<<"What do you like to do?"<<endl; 
    cout<<"1.Write records into file:"<<endl; 
    cout<<"2.Read records from the file:"<<endl; 
    cout<<"3.Update record in the file:"<<endl; 
    cout<<"4.Search record of a student:"<<endl; 
    cout<<"5.Modify record of a student:"<<endl; 
    cout<<"6.Delete record of a student:"<<endl; 
    cout<<"7.count the number of objects in file and total file size"<<endl; 
    cin>>m; 
    switch(m){   
    case 1://Write into the file 
        inout.open("REC.txt",ios::out); 
        int z; 
        cout<<"Enter the number of students"<<"\n"; 
        cin>>z; 
        for(int i=1;i<=z;i++) 
        { 
        std.getdata(); 
        inout.write((char*)&std,sizeof(std)); 
        } 
        cout<<"File Written!"<<endl; 
        inout.close(); 
        break; 


    case 2://Read the file 
inout.open("REC.txt",ios::in); 
cout<<"Current contents of file"<<endl; 
cout<<setw(10)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<"\n"; 
while(inout.read((char *)&std,sizeof(std))) 
{ 
std.putdata(); 
} 
inout.close(); 
break; 


    case 3://Update the record of the student 
inout.open("REC.txt",ios::app); 
cout<<"Add Student Record:"<<endl; 
std.getdata(); 
inout.write((char *)&std,sizeof(std)); 
cout<<"Record Added!!!"<<endl; 
inout.close(); 
break; 


    case 4://Search the record of the student 
inout.open("REC.txt",ios::in); 
isfound=0; 
cout<<"Enter Roll number:"<<endl; 
cin>>roll; 
inout.seekg(0,ios::beg); 
while(inout.read((char *)&std,sizeof(std))) 
{ 
if(std.getroll()==roll){ 
isfound=1; 
cout<<"Searched record!:"<<endl; 
cout<<setw(10)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<"\
 n"; 
std.putdata(); 
break; 
} 
} 
if(isfound==0) 
cout<<"The record with the roll number "<<roll<<" is not found!"<<endl; 
inout.close(); 
break; 


    case 5://Modify Record 
inout.open("REC.txt",ios::out|ios::in|ios::ate); 
int location; 
object=isfound=0; 
cout<<"Enter Roll number:"<<endl; 
cin>>roll; 
inout.seekg(0,ios::beg); 
while(inout.read((char *)&std,sizeof(std))) 
{ 
++object; 
if(std.getroll()==roll) 
{ 
isfound=1; 
location=(object-1)*sizeof(std); 
inout.seekp(location,ios::beg); 
cout<<"Enter new data"<<endl; 
std.getdata(); 
inout.write((char *)&std,sizeof(std))<<flush; 
cout<<"Record Modified!!!"<<endl; 
break; 
} 
} 
if(isfound==0) 
cout<<"The record with the roll number "<<roll<<"is not found!"<<endl; 
inout.close(); 
break; 


    case 6://Delete Record 
inout.open("REC.txt",ios::in); 
student st[48]; 
int i,j; 
i=0; 
cout<<"Enter Roll number:"<<endl; 
cin>>roll; 
inout.seekg(0,ios::beg); 
while(inout.read((char *)&st[i],sizeof(st[i]))) 
{ 
++i; 
} 
j=i; 
inout.close(); 
inout.open("REC.txt",ios::out); 
for(i=0;i<j;i++) 
{ 
if(st[i].getroll()!=roll) 
{ 
inout.write((char *)&st[i],sizeof(st[i])); 
} 
} 
cout<<"Record Deleted!!!"<<endl; 
inout.close(); 
break; 


    case 7://Calculates file size and the number of Objects 
int filesize; 
inout.open("REC.txt",ios::in); 
inout.seekg(0,ios::end); 
filesize =inout.tellg(); 
cout<<"The total file size is:"<<filesize<<"  Bytes"<<endl; 
cout<<"And number of objects:"<<(filesize/sizeof(std))<<endl; 
inout.close(); 
break; 
default: 
cout<<"wrong choice:"; 
break; 
} 
return 0; 
} 