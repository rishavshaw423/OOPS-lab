#include<iostream>
using namespace std;

class Car{
    public:
    string car_no;
    string brand;
    int model_year;

    
    void accept(){
            cout<<"Enter car no."<<endl;
            cin>>car_no;
            cout<<"Enter car Brand"<<endl;
            cin>>brand;
            cout<<"Enter car Model year"<<endl;
            cin>>model_year;
    }
    void display(){
        cout<<"No.:" <<car_no <<"  BRAND:"<<brand<< "  YEAR: "<<model_year<<endl;
    }
};

int main(){
    int car;
    
    cout<<"Enter the no. of cars"<<endl;
    cin>>car;
    Car c[car];
    for(int i=0;i<car;i++){
    
    cout<<"CAR"<<i + 1<<endl;
    c[i].accept();
    }
    for(int i=0;i<car;i++){
    
    cout<<"CAR"<<i+1<<endl;
    c[i].display();
    }
    return 0;
}