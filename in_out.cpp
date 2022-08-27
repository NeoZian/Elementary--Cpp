#include<iostream>
#include<string>
using namespace std;


int main(){

    cout<< "Put your name here for cpp:";
    string name;
    cin>> name;


    cout<< "your name is:\n"<<name;
    cout<<"\nonly first word of your name was printed \n";
    cout<<"again type another one:";


    string nam;

    cin.ignore();   //so that another input can be taken
    getline(cin,nam);  //takes a full line
    cout<< "Your full name is:"<< nam;

    int i=10;
    float f=20;
    double d=30;

    cout<< "\n i="<<i<<" f= "<<f<<" d= "<<d;


    return 0;

}
