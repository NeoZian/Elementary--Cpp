#include<iostream>

using namespace std;


class animal{

    private:
        int age;  // Private attribute

    public:
        //setter
        void setAge(int years){

        age = years;

        }

        //getter
        int getAge(){

        return age;

        }
};

    int main(){

    animal dog;

    dog.setAge(10);

    cout<<"The age of dog:"<<dog.getAge();

    return 0;
    }
