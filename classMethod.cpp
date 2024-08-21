#include <iostream>
using namespace std;
class myclass {
    public:
    void myMethod(){
        cout << "This is my method" <<endl;
    }
};
int main(){
    myclass myObject;
    myObject.myMethod();
    return 0;
}