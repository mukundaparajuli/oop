#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(4);
    vector<float> v2(4);

    v1.arr[0] = 2;
    v1.arr[1] = 3;
    v1.arr[2] = 4;
    v1.arr[3] = 5;

    v2.arr[0] = 0.5;
    v2.arr[1] = 1.5;
    v2.arr[2] = 2.5;
    v2.arr[3] = 3.5;
    cout << "The ans is " << v1.dotProduct(v2) << endl;
    return 0;
}