#include <iostream>
using namespace std;

class myClass {
    public:
    int myNum;
    string myName;
};

int main() {
    myClass obj;
    obj.myNum = 20;
    obj.myName = "Imon Hossain";
    cout << "Number: " << obj.myNum << endl;
    cout << "Name: " << obj.myName << endl;
    return 0;
 
}