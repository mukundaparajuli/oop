// STL
// stands for Standard Template Library
// powerful set of C++ templates class to provide general purpose template classes and functions
// Container->contains a set of objects->eg. Array, List, Deque, Queue, Vector
// Algorithm->perfoms/acts on the objects stored inside the container
// Iterators->accesses the elements of the container to be acted by the algorithm

// Algorithm uses Iterator to act on the objects of the Container

#include<iostream>
#include<list>

using namespace std;

int main(){
    list <string> l;   //l is a container(list) of string
    l.push_back("Ram");
    l.push_back("Shyam");
    l.push_back("Hari");
    l.push_back("Gita");

    cout<<"The size of container is: "<<l.size()<<endl;  //size() is an algorithm which returns the no. of element in the list
    l.sort();   //sorts the list in an ascending order-->sorting algorithm
    cout<<"The elements of the list in ascendint order is: "<<endl;
    while(!l.empty()){
        cout<<l.front()<<endl;
        l.pop_front();
    }
}
