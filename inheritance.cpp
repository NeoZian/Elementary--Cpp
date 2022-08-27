#include<iostream>
using namespace std;


// Base class
class humans{
    public:

        int age;

        void man(){
        cout<<"I am a man!";
        }


    };
// Derived class
class female : public humans{
    public:

        void lady(){

        cout<<"\nI am a lady human";
        }

    };


int main(){

    female fm;

    fm.man();
    fm.lady();

    return 0;

}


