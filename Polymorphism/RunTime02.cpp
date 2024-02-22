#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // pure virtual function
};
class CWHVideo : public CWH
{
protected:
    float vl;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        this->vl = vl;
    }
    void display()
    {
        cout << "-----------------------------" << endl;
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Video Length: " << vl << endl;
        cout << "-----------------------------" << endl;
    }
};
class CWHText : public CWH
{
protected:
    int wl;

public:
    CWHText(string s, float r, int wl) : CWH(s, r)
    {
        this->wl = wl;
    }
    void display()
    {
        cout << "-----------------------------" << endl;
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Word Length: " << wl << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    string title;
    float rating;
    float videoLength;
    int wordLength;

    CWH *ptrVariable[2];

    title = "Django course",
    rating = 4.5;
    videoLength = 12.45;
    CWHVideo v1(title, rating, videoLength);

    title = "Django course",
    rating = 4.5;
    wordLength = 12.45;
    CWHText t1(title, rating, wordLength);

    ptrVariable[0] = &v1;
    ptrVariable[1] = &t1;
    ptrVariable[0]->display();
    ptrVariable[1]->display();

    return 0;
}