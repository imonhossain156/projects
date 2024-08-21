#include <iostream>
using namespace std;
class myClass {
    public:
    void myFunction(){
        cout << "This is parent class"<<endl;

    }
};

class childclass:public myClass {
    public:

};
class grandchild : public childclass {
    public:
};

int main() {
    grandchild myobj;
    myobj.myFunction(); // Calls the myFunction() of grandchild class
    
    return 0;
}