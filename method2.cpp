#include<iostream>

using namespace std;

class testClass{

    public:
        void fun();

};

// Method/function definition outside the class
void testClass::fun(){

    cout<<"This is a test class, executed!!";

}

int main(){

    testClass obj;

    obj.fun();

    return 0;


}
