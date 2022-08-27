#include<iostream>?

using namespace std;

class animal{  // The class

public:         // Access specifier
    animal(){   // Constructor name as same as the class name and having no return type!
        cout<<"Welcome";

    }

};

int main(){

    animal obj; //  Create an object of animal (this will call the constructor)
    return 0 ;



}
