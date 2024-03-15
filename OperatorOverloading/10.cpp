// Multiplication of 2 3x3 matrix using operator overloading
#include<iostream>
using namespace std;

class Matrix{
    int mat[3][3];
    public:
        void getMat(){
            cout<<"Enter the numbers in 3x3 matrix: "<<endl;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                cin>>mat[i][j];
        }
        void show(){
            cout<<"The final result is:"<<endl;
            for(int i=0; i< 3; i++){
                for(int j=0; j<3; j++){
                    cout<<mat[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        Matrix operator*(Matrix&){
            Matrix temp;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    int sum=0;
                    for(int k=0; k<3; k++){
                        sum=sum+mat[i][k]*mat[k][j];
                    }
            temp.mat[i][j]=sum;
                }
            }
            return temp;
        }
};
int main(){
    Matrix m1, m2, m3;
    m1.getMat();
    m2.getMat();
    m3=m1*m2;
    m3.show();
}