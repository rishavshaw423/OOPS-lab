#include<iostream>
using namespace std;
class Square{
    public:
    int l;
    void read(){
        cout<<"Enter length"<<endl;
        cin>>l;
    }
    void area(){
        cout<<"AREA: "<<l*l<<endl;
    }
    void perimeter(){
        cout<<"PERIMETER: "<<4*l<<endl;
    }
    void display(){
        cout<<"RESULT: "<<endl;
        area();
        perimeter();
    }
};

int main(){
    Square s1;
    s1.read();
    s1.display();
    return 0;
}