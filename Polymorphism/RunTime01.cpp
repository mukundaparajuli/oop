#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void Draw()
    {
        cout << "Draaw function in Shape" << endl;
    }
};
class Square : public Shape
{
public:
    void Draw() override
    {
        cout << "Square is drawn" << endl;
    }
};
class Circle : public Shape
{
public:
    void Draw() override
    {
        cout << "Circle is drawn" << endl;
    }
};
int main()
{
    Shape *ShapePtr;
    Square sq;
    ShapePtr = &sq;
    ShapePtr->Draw();
    Circle cr;
    ShapePtr = &cr;
    ShapePtr->Draw();
}