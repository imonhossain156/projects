#include <iostream>
using namespace std;
class myClass{
    public:
    void myfunction()
    {
        cout << "I am being called in myClass"<<endl;

    }
};

class myAnotherClass {
    public:
    void myAnotherFunction(){
        cout << "I am being called in myAnotherClass" << endl;
        
    }
};

class derivedClass: public myClass, public myAnotherClass{
    public:
    

};
int main(){
    derivedClass myobj;
    myobj.myfunction();
    myobj.myAnotherFunction();
    return 0;
}