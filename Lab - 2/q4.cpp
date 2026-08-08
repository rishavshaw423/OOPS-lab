#include<iostream>
using namespace std;

class Hotel{
public:
    string room;
    string G_name;
    int days;
    int costperday;
    int tot_cost;
    void accept(){
        cout<<"Enter guest name:\n";
        cin>>G_name;
        cout<<"ROOM no.:\n";
        cin>>room;
        cout<<"Enter no. of days:\n";
        cin>>days;
        cout<<"Cost per day:\n";
        cin>>costperday;
    }
    void calculate(){
        tot_cost=costperday*days;
    }
    void display(){
        cout<<"\nGuest name:"<<G_name;
        cout<<"\nROOM no.:"<<room;
        cout<<"\nDays stayed:"<<days;
        cout<<"\nTotal cost @ "<<costperday<<"/- perday : "<<tot_cost<<"/-";

    }
};

int main(){
    Hotel h1;
    h1.accept();
    h1.calculate();
    h1.display();
return 0;
}