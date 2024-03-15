// Matrix multiplication for 3x3 matrix using operator overloading with non member function
#include<iostream>
using namespace std;
class Matrix{
    int mat[3][3];
    public:
        void getData(){
            cout<<"Enter the elements of the matrix"
            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    cin>>mat[i][j];
                }
            }
        }
        void show(){
            cout<<"The resultant matrix is"<<endl;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout<<mat[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        friend Matrix operator *(Matrix &M1, Matrix &M2);
};
Matrix operator *(Matrix &M1, Matrix &M2){
    int sum; 
    Matrix temp;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum=0;
            for(int k=0; k<3; k++){
                sum=sum+M1.mat[i][k]*M2.mat[k][j];
            }
            temp.mat[i][j]=sum;
        }
    }
    return temp;
}
int main(){
    Matrix m1, m2, m3;
    m1.getData();
    m2.getData();
    m3=m1*m2;
    m3.show();
    return 0;
}