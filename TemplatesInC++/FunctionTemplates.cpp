#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << "The first result is: " << add<int>(2, 3) << endl;
    cout << "The second result is: " << add<string>("a", "b") << endl;
    return 0;
}