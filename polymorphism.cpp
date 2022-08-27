#include<iostream>

using namespace std;
// Base class
class animal{

    public:
    void sound(){

        cout<<"Animals have various sounds";

    }

};
// Derived class
class dog : public animal{

public:
    void sound(){

        cout<<"\nDogs: Ghew ghew..barking";

    }


}  ;
// Derived class
class cat: public animal{

public:

    void sound(){

    cout<<"\nCats: Mew mew mew....\n\n\n\n";

    }

};

int main(){

    animal animObj;
    dog objDog;
    cat objCat;


    animObj.sound();
    objDog.sound(); //overriding the sound() method!
    objCat.sound();  //overriding the sound() method!

}



