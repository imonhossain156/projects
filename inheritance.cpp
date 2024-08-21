#include <iostream>
using namespace std;
//base class 
class vehicle {
    public:
    string Brand = "Ford";
    void honk (){
        cout <<"Tuut Tuut!!"<<endl;
    } 
};

//derived class
class Car : public vehicle {
public:
string Model = "Mustang";
};
int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.Brand << " " << myCar.Model <<endl;
    return 0;
}